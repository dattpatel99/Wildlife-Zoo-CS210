//============================================================================
// Name        : Pelican.cpp
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : Pelican Class
//============================================================================
#include <iostream>
using namespace std;

#include "Pelican.h"

/**
 * Function Description: Default Constructor. It helps create a default pelican obj with default values   
 * Params: None
 * Returns: None
*/
Pelican::Pelican(){
	this->SetName("Default"); // Gives it a default name
	this->SetTrackNumber(-1); // Gives it an unacceptable value
	this->SetNumEggs(-1); // Gives it an unacceptable value
}

/**
 * Function Description: Constructor. Helps create pelican obj with the param entered
 * Params: t_name: name of pelican, t_tracker: the track# of pelican, t_numEggs: number of eggs pelican can lay
 * Returns: None
*/
Pelican::Pelican(string t_name, int t_trackerNum, int t_numEggs){
	this->SetName(t_name);
	this->SetTrackNumber(t_trackerNum);
	this->SetNumEggs(t_numEggs);
}
