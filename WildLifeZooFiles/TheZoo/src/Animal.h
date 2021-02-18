//============================================================================
// Name        : Animal.h
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : Animal Class
//============================================================================
#include<string>

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
public:
	void SetTrackNumber(int t_trackNum);
	void SetName(string t_name);
	string GetName();
	int GetTrackNumber();
	virtual int GetNurse(){return -1;}; // This uses a dummy return statement 
	virtual int GetNumEggs(){return -1;};  // This uses a dummy return statement
private:
	int m_trackNum;
	string m_name;
};

#endif
