//============================================================================
// Name        : SeaLion.h
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : SeaLion class header file
//============================================================================
#ifndef SEALION_H
#define SEALION_H

#include "Mammal.h"

class SeaLion : public Mammal{
public:
	SeaLion();
	SeaLion(string t_name, int t_trackerNum, int t_nurse);
};

#endif
