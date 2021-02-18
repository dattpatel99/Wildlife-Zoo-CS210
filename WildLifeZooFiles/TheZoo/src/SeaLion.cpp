//============================================================================
// Name        : SeaLion.cpp
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : SeaLion Class
//============================================================================
#include <iostream>
using namespace std;

#include "SeaLion.h"

/**
 * Function Description: Default Constructor. It helps create a default sealion obj with default values   
 * Params: None
 * Returns: None
*/
SeaLion::SeaLion(){
	this->SetName("Default"); // Gives it a default name
	this->SetTrackNumber(-1); // Gives it an unacceptable value
 	this->SetNurse(-1); // Gives it an unacceptable value
}

/**
 * Function Description: Constructor. Helps create sealion obj with the param entered
 * Params: t_name: name of sealion, t_tracker: the track# of sealion, t_nurse: whether the sealion obj is to be nursed or not
 * Returns: None
*/
SeaLion::SeaLion(string t_name, int t_trackerNum, int t_nurse){
	this->SetName(t_name);
	this->SetTrackNumber(t_trackerNum);
	this->SetNurse(t_nurse);
}
