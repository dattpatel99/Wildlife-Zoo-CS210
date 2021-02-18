//============================================================================
// Name        : Pelican.h
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : Pelican class header file
//============================================================================
#ifndef PELICAN_H
#define PELICAN_H

#include "Oviparous.h"

class Pelican : public Oviparous{
public:
	Pelican();
	Pelican(string t_name, int t_trackerNum, int t_numEggs);
};

#endif
