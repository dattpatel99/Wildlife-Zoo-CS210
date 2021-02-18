//============================================================================
// Name        : Goose.h
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : Goose class header file
//============================================================================
#ifndef GOOSE_H
#define GOOSE_H

#include "Oviparous.h"

class Goose : public Oviparous{
public:
	Goose();
	Goose(string t_name, int t_trackerNum, int t_numEggs);
};

#endif
