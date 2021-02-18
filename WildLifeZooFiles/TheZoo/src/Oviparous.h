//============================================================================
// Name        : Oviparous.h
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : Oviparous class header file
//============================================================================
#ifndef OVIPAROUS_H
#define OVIPAROUS_H

#include "Animal.h"

class Oviparous : public Animal{
public:
	void SetNumEggs(int t_numEggs);
	int GetNumEggs();
private:
	int m_numEggs;
};

#endif
