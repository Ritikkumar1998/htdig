/* Configuration reader for ht://Dig  */

%option yylineno noyywrap
%x t_right
%x incl
%x bracket
%x br_string

%{
//#include <string.h>
#include <iostream.h>
#include "Configuration.h"
//#include "Dictionary.h"
#include "conf.tab.cc.h"
#define MAX_INCLUDE_DEPTH 10
YY_BUFFER_STATE include_stack[MAX_INCLUDE_DEPTH];
int include_stack_ptr = 0;
%}

KEYWORD			[a-zA-Z_][a-zA-Z_0-9/]*
NUMBER			[0-9]+
STRING			[[:alnum:][:punct:]]+
BR_STRING		[^ \n\t<>]+
%%

^#.*\n			/*   Ignore comments     */
^[[:space:]]*\n		/*   Ignore emty lines   */
<*>[ \t]+		/*   Ignore spaces       */
include			BEGIN(incl);
"<"                     { BEGIN(bracket); return(T_LEFT_BR); }
<bracket>"/"                       return(T_SLASH);
<bracket>">"            return(T_RIGHT_BR);
<INITIAL,bracket>{KEYWORD}		{
			//yylval.str = (char *)malloc(yyleng+1);
                        yylval.str = new char[yyleng+1];
                        strcpy(yylval.str,yytext);
			return(T_KEYWORD);
			}
<br_string>{BR_STRING}	{
			BEGIN(bracket);
			yylval.str = new char[yyleng+1];
			strcpy(yylval.str,yytext);
			return(T_STRING);
			}

<t_right>{NUMBER}		{
                        //yylval.str = (char*)malloc(yyleng+1);
                        yylval.str = new char[yyleng+1];
                        strcpy(yylval.str,yytext);
			return(T_NUMBER);
			}

<INITIAL,bracket>:			{
			if (YY_START==bracket)
			    BEGIN(br_string);
			else
			BEGIN(t_right);
                        return(T_DELIMITER);
                        }

<t_right>{STRING}\\\n	{
			//yylval.str = (char *)malloc(yyleng+1-2);
                        yylval.str = new char[yyleng+1-2];
                        //strcpy(yylval.str,yytext);
                        bcopy(yytext,yylval.str,yyleng-2);
                        yylval.str[yyleng-2]='\0';
			return(T_STRING);  
			}

<t_right>"\""[^\n]+"\"" {
			yylval.str = new char[yyleng+1];
			strcpy(yylval.str,yytext);
                        return(T_STRING);
                        }

<t_right>{STRING}		{
			//yylval.str = (char *)malloc(yyleng+1);
                        yylval.str = new char[yyleng+1];
                        strcpy(yylval.str,yytext);
			return(T_STRING);
			}
<t_right>\\\n		/*   Ignore newline after "\"    */

<t_right>[ \t]*		/*   Ignore spaces               */

<incl>{STRING}		{ /* got the include file name */
			if ( include_stack_ptr >= MAX_INCLUDE_DEPTH )
			    {
			    fprintf(stderr,"Includes nested too deeply\n");
			    exit(1);
			    }
			include_stack[include_stack_ptr++] =
			    YY_CURRENT_BUFFER;

			yyin = fopen( yytext, "r" );

			if ( ! yyin ) {
			    fprintf(stderr,"can't find file: %s\n",yytext);
			    exit(1);
			}
		        yy_switch_to_buffer( yy_create_buffer( yyin, YY_BUF_SIZE ) );

		        BEGIN(INITIAL);
		        }

<<EOF>> 		{
		        if ( --include_stack_ptr < 0 )
		            yyterminate();
		        else
		            {
		            yy_delete_buffer( YY_CURRENT_BUFFER );
		            yy_switch_to_buffer(
		                 include_stack[include_stack_ptr] );
		            }
		        }


<bracket,t_right>\n			{
			BEGIN(INITIAL);
			return(T_NEWLINE);
			}
^[[:space:]]+

\n			
%%