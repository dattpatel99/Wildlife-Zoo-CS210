//============================================================================
// Name        : Whale.cpp
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : Whale Class
//============================================================================
#include <iostream>
using namespace std;

#include "Whale.h"

/**
 * Function Description: Default Constructor. It helps create a default whale obj with default values   
 * Params: None
 * Returns: None
*/
Whale::Whale(){
	this->SetName("Default"); // Gives it a default name
	this->SetTrackNumber(-1); // Gives it an unacceptable value
 	this->SetNurse(-1); // Gives it an unacceptable value
}

/**
 * Function Description: Constructor. Helps create whale obj with the param entered
 * Params: t_name: name of whale, t_tracker: the track# of whale, t_nurse: whether the whale obj is to be nursed or not
 * Returns: None
*/
Whale::Whale(string t_name, int t_trackerNum, int t_nurse){
	this->SetName(t_name);
	this->SetTrackNumber(t_trackerNum);
	this->SetNurse(t_nurse);
}
