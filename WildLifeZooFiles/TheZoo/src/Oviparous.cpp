//============================================================================
// Name        : Oviparous.cpp
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : Oviparous Class
//============================================================================
#include <iostream>
using namespace std;

#include "Oviparous.h"

/**
 * Function Description: Sets the number of eggs for oviparous
 * Params: t_numEggs: value to set
 * Returns: None
*/
void Oviparous::SetNumEggs(int t_numEggs){
	m_numEggs = t_numEggs;
}

/**
 * Function Description: returns the number of eggs 
 * Params: None
 * Returns: m_numEggs
*/
int Oviparous::GetNumEggs(){
	return m_numEggs;
}
