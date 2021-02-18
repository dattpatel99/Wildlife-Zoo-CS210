//============================================================================
// Name        : Whale.h
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : Whale class header file
//============================================================================
#include <string>
#ifndef WHALE_H
#define WHALE_H


#include "Mammal.h"

class Whale : public Mammal{
public:
	Whale();
	Whale(string t_name, int t_trackerNum, int t_nurse);
};

#endif
