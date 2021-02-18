//============================================================================
// Name        : Goose.cpp
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : Goose class header file
//============================================================================
#include <iostream>
using namespace std;

#include "Goose.h"

/**
 * Function Description: Default Constructor. It helps create a default goose obj with default values   
 * Params: None
 * Returns: None
*/
Goose::Goose(){
	this->SetName("Default"); // Gives it a default name
	this->SetTrackNumber(-1); // Gives it an unacceptable value
	this->SetNumEggs(-1); // Gives it an unacceptable value
}

/**
 * Function Description: Constructor. Helps create goose obj with the param entered
 * Params: t_name: name of goose, t_tracker: the track# of goose, t_numEggs: number of eggs goose can lay
 * Returns: None
*/
Goose::Goose(string t_name, int t_trackerNum, int t_numEggs){
	this->SetName(t_name);
	this->SetTrackNumber(t_trackerNum);
	this->SetNumEggs(t_numEggs);
}
