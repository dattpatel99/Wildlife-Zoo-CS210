//============================================================================
// Name        : Mammal.h
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : Mammal class header file
//============================================================================
#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal{
public:
	void SetNurse(int t_nurse);
	int GetNurse();
private:
	int m_nurse;
};

#endif
