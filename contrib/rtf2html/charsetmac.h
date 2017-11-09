unsigned char* mac[256] = {
	"", /* 1 - 1 */
	"", /* 2 - 2 */
	"", /* 3 - 3 */
	"", /* 4 - 4 */
	"", /* 5 - 5 */
	"", /* 6 - 6 */
	"", /* 7 - 7 */
	"", /* 8 - 8 */
	"\t", /* 9 - 9 */
	"\n", /* 10 - a */
	"", /* 11 - b */
	"", /* 12 - c */
	"\r", /* 13 - d */
	"", /* 14 - e */
	"", /* 15 - f */
	"", /* 16 - 10 */
	"", /* 17 - 11 */
	"", /* 18 - 12 */
	"", /* 19 - 13 */
	"", /* 20 - 14 */
	"", /* 21 - 15 */
	"", /* 22 - 16 */
	"", /* 23 - 17 */
	"", /* 24 - 18 */
	"", /* 25 - 19 */
	"", /* 26 - 1a */
	"", /* 27 - 1b */
	"", /* 28 - 1c */
	"", /* 29 - 1d */
	"", /* 30 - 1e */
	"", /* 31 - 1f */
	" ", /* 32 - 20 */
	"!", /* 33 - 21 */
	"\"", /* 34 - 22 */
	"#", /* 35 - 23 */
	"$", /* 36 - 24 */
	"%", /* 37 - 25 */
	"&amp;", /* 38 - 26 */
	"'", /* 39 - 27 */
	"(", /* 40 - 28 */
	")", /* 41 - 29 */
	"*", /* 42 - 2a */
	"+", /* 43 - 2b */
	",", /* 44 - 2c */
	"-", /* 45 - 2d */
	".", /* 46 - 2e */
	"/", /* 47 - 2f */
	"0", /* 48 - 30 */
	"1", /* 49 - 31 */
	"2", /* 50 - 32 */
	"3", /* 51 - 33 */
	"4", /* 52 - 34 */
	"5", /* 53 - 35 */
	"6", /* 54 - 36 */
	"7", /* 55 - 37 */
	"8", /* 56 - 38 */
	"9", /* 57 - 39 */
	":", /* 58 - 3a */
	";", /* 59 - 3b */
	"<", /* 60 - 3c */
	"=", /* 61 - 3d */
	">", /* 62 - 3e */
	"?", /* 63 - 3f */
	"@", /* 64 - 40 */
	"A", /* 65 - 41 */
	"B", /* 66 - 42 */
	"C", /* 67 - 43 */
	"D", /* 68 - 44 */
	"E", /* 69 - 45 */
	"F", /* 70 - 46 */
	"G", /* 71 - 47 */
	"H", /* 72 - 48 */
	"I", /* 73 - 49 */
	"J", /* 74 - 4a */
	"K", /* 75 - 4b */
	"L", /* 76 - 4c */
	"M", /* 77 - 4d */
	"N", /* 78 - 4e */
	"O", /* 79 - 4f */
	"P", /* 80 - 50 */
	"Q", /* 81 - 51 */
	"R", /* 82 - 52 */
	"S", /* 83 - 53 */
	"T", /* 84 - 54 */
	"U", /* 85 - 55 */
	"V", /* 86 - 56 */
	"W", /* 87 - 57 */
	"X", /* 88 - 58 */
	"Y", /* 89 - 59 */
	"Z", /* 90 - 5a */
	"[", /* 91 - 5b */
	"\\", /* 92 - 5c */
	"]", /* 93 - 5d */
	"^", /* 94 - 5e */
	"_", /* 95 - 5f */
	"`", /* 96 - 60 */
	"a", /* 97 - 61 */
	"b", /* 98 - 62 */
	"c", /* 99 - 63 */
	"d", /* 100 - 64 */
	"e", /* 101 - 65 */
	"f", /* 102 - 66 */
	"g", /* 103 - 67 */
	"h", /* 104 - 68 */
	"i", /* 105 - 69 */
	"j", /* 106 - 6a */
	"k", /* 107 - 6b */
	"l", /* 108 - 6c */
	"m", /* 109 - 6d */
	"n", /* 110 - 6e */
	"o", /* 111 - 6f */
	"p", /* 112 - 70 */
	"q", /* 113 - 71 */
	"r", /* 114 - 72 */
	"s", /* 115 - 73 */
	"t", /* 116 - 74 */
	"u", /* 117 - 75 */
	"v", /* 118 - 76 */
	"w", /* 119 - 77 */
	"x", /* 120 - 78 */
	"y", /* 121 - 79 */
	"z", /* 122 - 7a */
	"{", /* 123 - 7b */
	"&brvbar;", /* 124 - 7c */
	"}", /* 125 - 7d */
	"~", /* 126 - 7e */
	" ", /* 127 - 7f */
	"&euro;", /* 128 - 80 */
	"&Aring;", /* 129 - 81 */
	"&sbquo;", /* 130 - 82 */
	"&fnof;", /* 131 - 83 */
	"&bdquo;", /* 132 - 84 */
	"&hellip;", /* 133 - 85 */
	"&dagger;", /* 134 - 86 */
	"&#0135;", /* 135 - 87 */
	"&aacute;", /* 136 - 88 */
	"&#0137;", /* 137 - 89 */
	"&Scaron;", /* 138 - 8a */
	"&lsaquo;", /* 139 - 8b */
	"&OElig;", /* 140 - 8c */
	"&ccedil;", /* 141 - 8d */
	"&eacute;", /* 142 - 8e */
	"&egrave; ", /* 143 - 8f */
	"&ecirc;", /* 144 - 90 */
	"&#145;", /* 145 - 91 */
	"&#146;", /* 146 - 92 */
	"&igrave;", /* 147 - 93 */
	"\"", /* 148 - 94 */
	"&bull;", /* 149 - 95 */
	"&ensp;", /* 150 - 96 */
	"&emsp;", /* 151 - 97 */
	"&tilde;", /* 152 - 98 */
	"&trade;", /* 153 - 99 */
	"&scaron;", /* 154 - 9a */
	"&rsaquo;", /* 155 - 9b */
	"&oelig;", /* 156 - 9c */
	"&ugrave;", /* 157 - 9d */
	"&zcaron;", /* 158 - 9e */
	"&Yuml;", /* 159 - 9f */
	"&nbsp;", /* 160 - a0 */
	"&ordm;", /* 161 - a1 */
	"&cent;", /* 162 - a2 */
	"&pound;", /* 163 - a3 */
	"&sect;", /* 164 - a4 */
	"&yen;", /* 165 - a5 */
	"&brvbar;", /* 166 - a6 */
	"&sect;", /* 167 - a7 */
	"&uml;", /* 168 - a8 */
	"&copy;", /* 169 - a9 */
	"&ordf;", /* 170 - aa */
	"&laquo;", /* 171 - ab */
	"&not;", /* 172 - ac */
	"&shy;", /* 173 - ad */
	"&reg;", /* 174 - ae */
	"&macr;", /* 175 - af */
	"&deg;", /* 176 - b0 */
	"&plusmn;", /* 177 - b1 */
	"&sup2;", /* 178 - b2 */
	"&sup3;", /* 179 - b3 */
	"&acute;", /* 180 - b4 */
	"&micro;", /* 181 - b5 */
	"&para;", /* 182 - b6 */
	"&middot;", /* 183 - b7 */
	"&ccedil;", /* 184 - b8 */
	"&sup1;", /* 185 - b9 */
	"&ordm;", /* 186 - ba */
	"&raquo;", /* 187 - bb */
	"&frac14;", /* 188 - bc */
	"&frac12;", /* 189 - bd */
	"&frac34;", /* 190 - be */
	"&iquest;", /* 191 - bf */
	"&Agrave;", /* 192 - c0 */
	"&Aacute;", /* 193 - c1 */
	"&Acirc;", /* 194 - c2 */
	"&Atilde;", /* 195 - c3 */
	"&Auml;", /* 196 - c4 */
	"&Aring;", /* 197 - c5 */
	"&AElig;", /* 198 - c6 */
	"&Ccedil;", /* 199 - c7 */
	"&Egrave;", /* 200 - c8 */
	"&Eacute;", /* 201 - c9 */
	"&Ecirc;", /* 202 - ca */
	"&Agrave;", /* 203 - cb */
	"&Igrave;", /* 204 - cc */
	"&Iacute;", /* 205 - cd */
	"&Icirc;", /* 206 - ce */
	"&Iuml;", /* 207 - cf */
	"&ETH;", /* 208 - d0 */
	"&Ntilde;", /* 209 - d1 */
	"\"", /* 210 - d2 */
	"\"", /* 211 - d3 */
	"&Oring;", /* 212 - d4 */
	"&Otilde;", /* 213 - d5 */
	"&Ouml;", /* 214 - d6 */
	"&times;", /* 215 - d7 */
	"&Oslash;", /* 216 - d8 */
	"&Ugrave;", /* 217 - d9 */
	"&Uacute;", /* 218 - da */
	"&Ucirc;", /* 219 - db */
	"&Uuml;", /* 220 - dc */
	"&Yacute;", /* 221 - dd */
	"&THORN;", /* 222 - de */
	"&szlig;", /* 223 - df */
	"&agrave;", /* 224 - e0 */
	"&aacute;", /* 225 - e1 */
	"&acirc;", /* 226 - e2 */
	"&atilde;", /* 227 - e3 */
	"&auml;", /* 228 - e4 */
	"&aring;", /* 229 - e5 */
	"&aelig;", /* 230 - e6 */
	"&ccedil;", /* 231 - e7 */
	"&egrave;", /* 232 - e8 */
	"&eacute;", /* 233 - e9 */
	"&ecirc;", /* 234 - ea */
	"&euml;", /* 235 - eb */
	"&igrave;", /* 236 - ec */
	"&iacute;", /* 237 - ed */
	"&icirc;", /* 238 - ee */
	"&iuml;", /* 239 - ef */
	"&eth;", /* 240 - f0 */
	"&ntilde;", /* 241 - f1 */
	"&ograve;", /* 242 - f2 */
	"&oacute;", /* 243 - f3 */
	"&ocirc;", /* 244 - f4 */
	"&otilde;", /* 245 - f5 */
	"&ouml;", /* 246 - f6 */
	"&divide;", /* 247 - f7 */
	"&oslash;", /* 248 - f8 */
	"&ugrave;", /* 249 - f9 */
	"&uacute;", /* 250 - fa */
	"&ucirc;", /* 251 - fb */
	"&uuml;", /* 252 - fc */
	"&yacute;", /* 253 - fd */
	"&thorn;", /* 254 - fe */
	"&yuml;" /* 255 - ff */
};
