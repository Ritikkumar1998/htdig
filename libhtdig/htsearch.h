//
// htsearch.h
//
// htsearch: The main search CGI. Parses the CGI input, reads the config files
//           and calls the necessary code to put together the result lists
//           and the final display.
//
// Part of the ht://Dig package   <http://www.htdig.org/>
// Copyright (c) 1995-2000 The ht://Dig Group
// For copyright details, see the file COPYING in your distribution
// or the GNU Public License version 2 or later
// <http://www.gnu.org/copyleft/gpl.html>
//
// $Id: htsearch.h,v 1.1 2003/04/09 00:51:55 nealr Exp $
//

#ifndef _htsearch_h_
#define _htsearch_h_

#include "List.h"
#include "StringList.h"
#include "Dictionary.h"
#include "DocumentRef.h"
#include "Database.h"
#include "good_strtok.h"
#include "DocumentDB.h"
#include "htString.h"
#include "HtConfiguration.h"
#include "ResultMatch.h"
#include "ResultList.h"
#include "HtWordReference.h"
#include "StringMatch.h"
#include "defaults.h"

#include <stdio.h>
#include <fstream.h>
#include <stdlib.h>
#include <unistd.h>

extern int		n_matches;
extern int		do_and;
extern int		do_short;
extern StringList	fields;

#ifndef _WIN32
//extern StringMatch	limit_to;
#endif

extern StringMatch	URLimage;
extern List		URLimageList;
extern StringMatch	wm;
extern Database		*dbf;
extern String		logicalWords;
extern String		originalWords;
extern int              debug;
extern StringList       collectionList;

#endif

