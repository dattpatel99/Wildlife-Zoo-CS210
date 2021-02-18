//============================================================================
// Name        : Crocodile.h
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : Crocodile Class header
//============================================================================
#ifndef CROCODILE_H
#define CROCODILE_H

#include "Oviparous.h"

class Crocodile : public Oviparous{
public:
	Crocodile();
	Crocodile(string t_name, int t_trackerNum, int t_numEggs);
};

#endif
