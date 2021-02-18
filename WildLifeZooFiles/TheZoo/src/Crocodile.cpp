//============================================================================
// Name        : Crocodile.cpp
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : Crocodile Class
//============================================================================
#include <iostream>
using namespace std;

#include "Crocodile.h"

/**
 * Function Description: Default Constructor. It helps create a default crocodile obj with default values   
 * Params: None
 * Returns: None
*/
Crocodile::Crocodile(){
	this->SetName("Default"); // Gives it a default name
	this->SetTrackNumber(-1); // Gives it an unacceptable value
	this->SetNumEggs(-1); // Gives it an unacceptable value
}

/**
 * Function Description: Constructor. Helps create crocodile obj with the param entered
 * Params: t_name: name of crocodile, t_tracker: the track# of crocodile, t_numEggs: number of eggs crocodile can lay
 * Returns: None
*/
Crocodile::Crocodile(string t_name, int t_trackerNum, int t_numEggs){
	this->SetName(t_name);
	this->SetTrackNumber(t_trackerNum);
	this->SetNumEggs(t_numEggs);
}
