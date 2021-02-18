//============================================================================
// Name        : TheZoo.cpp
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : Main Driver Class
//============================================================================
#include <iostream>
using namespace std;

#include "General.h"

int main()
{
       General *objNew = new General(); // Creates new pointer obj of class General

       objNew->DisplayMenu(); // Displays the menu to user

       delete objNew; // Deletes the pointer objNew and calls its destructor

       cout << "Program Finished." << endl;
       return 0;
}
