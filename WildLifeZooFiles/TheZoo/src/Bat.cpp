//============================================================================
// Name        : Bat.cpp
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : Bat Class
//============================================================================
#include <iostream>
using namespace std;

#include "Bat.h"

/**
 * Function Description: Default Constructor. It helps create a default bat obj with default values   
 * Params: None
 * Returns: None
*/
Bat::Bat(){
	this->SetName("Default"); // Gives it a default name
	this->SetTrackNumber(-1); // Gives it an unacceptable value
 	this->SetNurse(-1); // Gives it an unacceptable value
}

/**
 * Function Description: Constructor. Helps create bat obj with the param entered
 * Params: t_name: name of bat, t_tracker: the track# of bat, t_nurse: whether the bat obj is to be nursed or not
 * Returns: None
*/
Bat::Bat(string t_name, int t_trackerNum, int t_nurse){
	this->SetName(t_name);
	this->SetTrackNumber(t_trackerNum);
	this->SetNurse(t_nurse);
}
