//============================================================================
// Name        : Mammal.cpp
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : Mammal Class
//============================================================================
#include <iostream>
using namespace std;

#include "Mammal.h"

/**
 * Function Description: Sets the nurse value for mammal
 * Params: t_nurse: value to set
 * Returns: None
*/
void Mammal::SetNurse(int t_nurse){
	m_nurse = t_nurse; 
}

/**
 * Function Description: returns the nurse value 
 * Params: None
 * Returns: m_nurse
*/
int Mammal::GetNurse(){
	return m_nurse;
}
