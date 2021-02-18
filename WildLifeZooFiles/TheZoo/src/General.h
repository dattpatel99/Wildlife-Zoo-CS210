//============================================================================
// Name        : General.h
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : General class used to declare functions and variables
//============================================================================
#include <vector>
using namespace std;

#ifndef GENERAL_H
#define GENERAL_H


#include "Animal.h"
#include "Oviparous.h"
#include "Crocodile.h"
#include "Pelican.h"
#include "Goose.h"
#include "SeaLion.h"
#include "Whale.h"
#include "Bat.h"

class General{
public:
	General();
	~General();
	void DisplayMenu();
	string Spaces(string t_str, int t_maxLen);
	void GapOutput();
private:
	void LoadAnimalData(); 
	void GenerateData();
	void DisplayAnimalData(); 
	void AddAnimal(); 
	void RemoveAnimal(); 
	void SavaDataToFile(); 
	void CreateObjectForVector(int t_trackerNum, string t_name, string t_type, string t_subType, int t_numEggs, int t_nurse); 
protected:
	// vectors
	vector<Animal*> animals; // Holds the animal pointers
	vector<string> types; // Holds the type of animal it is
	vector<string> subTypes; // Holds the sub type of animal
	
	// A pointer
	Animal* aPtr;
	
	// Functions that can be used by class functions and variables
	void LengthCheck(string strCheck, int maxLength); 
	void MakeDisplayTable(); // Protected so that only the functions of class can use
	string paddingLeft(string str, int len, string stringPadVal); // Protected so that only the functions of class can use
	string paddingRight(string str, int len, string stringPadVal); // Protected so that only the functions of class can use
};

#endif
