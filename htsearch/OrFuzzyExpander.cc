//
// OrFuzzyExpander.cc
//
// OrFuzzyExpander: a concrete Fuzzy expander that makes a OR with
//                  all the results returned by the applicable Fuzzies.
//
// Part of the ht://Dig package   <http://www.htdig.org/>
// Copyright (c) 1995-2000 The ht://Dig Group
// For copyright details, see the file COPYING in your distribution
// or the GNU Public License version 2 or later
// <http://www.gnu.org/copyleft/gpl.html>
//
// $Id: OrFuzzyExpander.cc,v 1.2 2002/02/02 18:18:13 ghutchis Exp $
//

#include "OrFuzzyExpander.h"
#include "Dictionary.h"
#include "ExactWordQuery.h"
#include "OrQuery.h"

extern int debug;

//
// creates a query with a OrQuery with all the
// distinct fuzzy results
//
// additionally, sets fuzzy scores for used words
//
Query *
OrFuzzyExpander::MakeQuery(const String &word)
{
	Query *result = 0;
	Dictionary exacts;

	// for each configured fuzzy
	filters.Start_Get();
	Fuzzy *fuzzy = (Fuzzy *)filters.Get_Next();
	while(fuzzy)
	{
		// for each word expanded by fuzzy
		List words;
		String nonconst = word;
		fuzzy->getWords(nonconst, words);
		words.Start_Get();
		String *w = (String *)words.Get_Next();
		while(w)
		{
			// if not yet expanded by another fuzzy
			// add it to the big Or
			if(debug) cerr << "fuzzy " << word << "=" << *w << endl;
			ExactWordQuery *exact = (ExactWordQuery *)exacts[*w];
			if(!exact)
			{
				exact = new ExactWordQuery(*w);
				exact->SetWeight(fuzzy->getWeight());
				exacts.Add(*w, exact);
			}
			// otherwise, just adjust the weight
			else
			{
				exact->SetWeight(
						exact->GetWeight() +
						fuzzy->getWeight());
			}
			w = (String *)words.Get_Next();
		}
		fuzzy = (Fuzzy *)filters.Get_Next();
	}

	// return the expanded query
	// a single word or
	// a Or with all the expanded words
	exacts.Start_Get();
	Query *exact = (Query *)exacts.Get_NextElement();
	if(exact)
	{
		result = exact;
		exact = (Query *)exacts.Get_NextElement();
	}
	if(exact)
	{
		Query *tmp = result;
		result = new OrQuery;
		result->Add(tmp);
		while(exact)
		{
			result->Add(exact);
			exact = (Query *)exacts.Get_NextElement();
		}
	}
	exacts.Release();

	return result;
}
