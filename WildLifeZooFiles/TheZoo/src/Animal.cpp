//============================================================================
// Name        : Animal.cpp
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : Animal Class
//============================================================================
#include <iostream>
#include <string>
using namespace std;

#include "Animal.h"

/**
 * Function Description: Sets the track Number for animal
 * Params: t_trackNum: value to set
 * Returns: None
*/
void Animal::SetTrackNumber(int t_trackNum){
	m_trackNum = t_trackNum;
}

/**
 * Function Description: Sets the name for animal
 * Params: t_nurse: value to set
 * Returns: None
*/
void Animal::SetName(string t_name){
	m_name = t_name;
}

/**
 * Function Description: returns the track number 
 * Params: None
 * Returns: m_trackNum
*/
int Animal::GetTrackNumber(){
	return m_trackNum;
}

/**
 * Function Description: returns the name 
 * Params: None
 * Returns: m_name
*/
string Animal::GetName(){
	return m_name;
}
