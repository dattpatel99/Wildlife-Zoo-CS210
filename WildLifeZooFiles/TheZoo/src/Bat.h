//============================================================================
// Name        : Bat.h
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : Bat Class header file
//============================================================================
#ifndef BAT_H
#define BAT_H

#include "Mammal.h"

class Bat : public Mammal{
public:
	Bat();
	Bat(string t_name, int t_trackerNum, int t_nurse);
};

#endif
