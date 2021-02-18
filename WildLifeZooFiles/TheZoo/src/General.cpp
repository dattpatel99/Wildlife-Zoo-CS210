//==========================================================================================
// Name        : Genreal.cpp
// Author      : Datt Hiteshkumar Patel
// Version     : 1.0
// Copyright   : This is my homework
// Description : General class used to basically run most of the functions and hold vectors
//==========================================================================================
#include <iostream>
#include <string>
#include <jni.h>
#include <stdexcept> // For runtime error
#include <vector>	 // For vector
#include <fstream>	 // For file handling
using namespace std;

#include "General.h"

/**
 * Function Description: Declares vectors: animal pointer vector, string vectors of types and subType 
 * Params: None
 * Returns: None
*/
General::General()
{
	vector<Animal *> animals;
	vector<string> types;
	vector<string> subTypes;
	aPtr = nullptr;
}

/**
 * Function Description: Deletes the pointers inside of the vector and deletes "aPtr"
 * Params: None
 * Returns: None
*/
General::~General()
{
	for (auto p : animals) // Loops through animals vector
	{
		delete p;
	}

	// clears the animal vector
	animals.clear();
	delete aPtr; // Deletes
}

/**
 * Function Description: Adds some newlines between outputs
 * Params: None
 * Returns: None
*/
void General::GapOutput()
{
	for (int i = 0; i < 4; ++i)
	{
		cout << endl;
	}
}

/**
 * Function Description: Adds spaces around the string parameter for display table and returns a new string
 * Params: t_str: String that is to be outputed to table, t_maxLen: max length that string can be  
 * Returns: t_str: String with spaces around it to output to table
*/
string General::Spaces(string t_str, int t_maxLen)
{
	int numSpaces = t_maxLen - t_str.length();
	int spacesLeft = -1;
	int spacesRight = -1;

	if (numSpaces % 2 == 0) // If the length of string entered is even then split leftover spaces equally
	{
		numSpaces /= 2;
		spacesLeft = numSpaces;
		spacesRight = numSpaces;
	}
	else // If the length of string is odd then split the leftover spaces giving space on right + 1
	{
		numSpaces = (numSpaces + 1) / 2;
		spacesLeft = numSpaces - 1;
		spacesRight = numSpaces;
	}

	// Adds spaces to the right
	for (int i = 0; i < spacesRight; ++i)
	{
		t_str += " ";
	}

	// Adds spaces to the left
	for (int i = 0; i < spacesLeft; ++i)
	{
		t_str = " " + t_str;
	}

	return t_str;
}

/**
 * Function Description: Checks the length of the string and ensures it is lower than the max length
 * Param: strCheck: string to check, maxLength: max length possible of string
 * Return: None
 */ 
void General::LengthCheck(string strCheck, int maxLength){
	if (strCheck.length() > maxLength){
		throw runtime_error ("The length is too long");
	}
}

/**
 * Function Description: Adds the 'stringPadVal' to the left side of 'str' till the total length of 'str' is equal to 'len' 
 * Params: str: Initial string that will be outputed to file, len: max length possible of string, stringPadVal: The string to add to the left of 'str'
 * Returns: str: Final string that will be outputed to file
*/
string General::paddingLeft(string str, int len, string stringPadVal)
{
	for (int i = str.length(); i < len; i++)
	{
		str = stringPadVal + str;
	}
	return str;
}

/**
 * Function Description: Adds the 'stringPadVal' to the right side of 'str' till the total length of 'str' is equal to 'len' 
 * Params: str: Initial string that will be outputed to file, len: max length possible of string, stringPadVal: The string to add to the right of 'str'
 * Returns: str: Final string that will be outputed to file
*/
string General::paddingRight(string str, int len, string stringPadVal)
{
	for (int i = str.length(); i < len; i++)
	{
		str = str + stringPadVal;
	}
	return str;
}

/**
 * Function Description: Creates class objs based on the subType, then uses 'aPtr' to point to that obj and adds 'aPtr' in animals vector, types vector and subType vectors.
 * Params: t_trackerNum: track# for animal, t_name: name of animal, t_type: type of animal, t_subType: the sub-type of the animal 
 * Params: t_numEggs: number of eggs animal lays, t_nurse: whether the animal should be nursed or not. 
 * Returns: Nothing
*/
void General::CreateObjectForVector(int t_trackerNum, string t_name, string t_type, string t_subType, int t_numEggs, int t_nurse)
{
	/**
	 * Creates a new pointer of type 'subType' using a constructor
	 * Adds pointer the to the vector animals
	 * Pushes back t_types to types vector
	 * Pushes back t_subType to subTypes vector   
	 */

	if (t_subType == "Bat")
	{
		aPtr = new Bat(t_name, t_trackerNum, t_nurse);
		animals.push_back(aPtr);
		types.push_back(t_type);
		subTypes.push_back(t_subType);
	}
	else if (t_subType == "Whale")
	{
		aPtr = new Whale(t_name, t_trackerNum, t_nurse);
		animals.push_back(aPtr);
		types.push_back(t_type);
		subTypes.push_back(t_subType);
	}
	else if (t_subType == "SeaLion")
	{
		aPtr = new SeaLion(t_name, t_trackerNum, t_nurse);
		animals.push_back(aPtr);
		types.push_back(t_type);
		subTypes.push_back(t_subType);
	}
	else if (t_subType == "Crocodile")
	{
		aPtr = new Crocodile(t_name, t_trackerNum, t_numEggs);
		animals.push_back(aPtr);
		types.push_back(t_type);
		subTypes.push_back(t_subType);
	}
	else if (t_subType == "Pelican")
	{
		aPtr = new Pelican(t_name, t_trackerNum, t_numEggs);
		animals.push_back(aPtr);
		types.push_back(t_type);
		subTypes.push_back(t_subType);
	}
	else if (t_subType == "Goose")
	{
		aPtr = new Goose(t_name, t_trackerNum, t_numEggs);
		animals.push_back(aPtr);
		types.push_back(t_type);
		subTypes.push_back(t_subType);
	}
}

/**
 * Function Description: Displays the Menu to user and asks them which option they want and acts accordingly 
 * Params: None
 * Returns: None
*/
void General::DisplayMenu()
{
	int choice = -1; // Used to get users input

	while (choice != 7) //Loops till user either enters 7 or 2
	{
		// Creates a gap before the menu is displayed
		this->GapOutput();

		try
		{
			// Menu Top border output
			for (int i = 0; i < 22; ++i)
			{
				cout << '=';
			}
			cout << endl;
			cout << "         Menu         " << endl;

			// Menu bottom border output
			for (int i = 0; i < 22; ++i)
			{
				cout << '=';
			}

			// Outputs the menu options
			cout << endl;
			cout << "1) Load Animal Data" << endl;
			cout << "2) Generate Data" << endl;
			cout << "3) Display Animal Data" << endl;
			cout << "4) Add Record" << endl;
			cout << "5) Delete Record" << endl;
			cout << "6) Save Animal Data" << endl;
			cout << "7) Quit" << endl;

			cin >> choice; // Takes in users input and stores in temporary variable

			// In the event user enters value that is not int
			if (cin.fail())
			{
				throw runtime_error("Invalid menu choice.");
			}

			// If the input is not
			if (choice < 1 || choice > 7)
			{
				throw runtime_error("Invalid Input.");
			}

			// Switch cases based on users choice
			switch (choice)
			{
			case 1:
				this->LoadAnimalData();
				break;
			case 2:
				this->GenerateData();
				break;
			case 3:
				this->DisplayAnimalData();
				break;
			case 4:
				this->AddAnimal();
				break;
			case 5:
				this->RemoveAnimal();
				break;
			case 6:
				this->SavaDataToFile();
				break;
			default:
				break;
			}
		}
		catch (runtime_error &excpt)
		{
			cout << excpt.what() << endl;
			cout << "Please re-enter value." << endl;

			cin.clear();
			cin.ignore(100, '\n');
		}
	}
}

/**
 * Function Description: Loads the data from file into the vector animals, types and subTypes.
 * Params: None
 * Returns: None
*/
void General::LoadAnimalData()
{
	ifstream inFs;	 // Input File Stream
	string fileLine; // Holds the whole string in file
	string name;	 // Holds the name
	string type;	 // Holds the type
	string subType;	 // Holds the subtype
	int trackerNum;	 // Holds the Tracker Number
	int nurse;		 // Holds the value for nurse or not
	int numEggs;	 // Holds the number of eggs

	try
	{
		inFs.open("zoodata.txt"); // Opens the file

		if (!inFs.is_open()) // Checks that there is no problem in opening file
		{
			throw runtime_error("File not found."); // If there is a problem then outputs error else continues with program
		}

		// Loops while it is not end of file
		while (!inFs.eof())
		{
			// Read data file lines and stores each value in proper data variable
			inFs >> fileLine;
			if (!inFs.fail())
			{
				trackerNum = stoi(fileLine); // stoi() converts from string to int
			}

			inFs >> fileLine;
			if (!inFs.fail())
			{
				name = fileLine;
			}

			inFs >> fileLine;
			if (!inFs.fail())
			{
				type = fileLine;
			}

			inFs >> fileLine;
			if (!inFs.fail())
			{
				subType = fileLine;
			}

			inFs >> fileLine;
			if (!inFs.fail())
			{
				numEggs = stoi(fileLine);
			}

			inFs >> fileLine;
			if (!inFs.fail())
			{
				nurse = stoi(fileLine);
			}

			// Calls the method to create objs based on subtype
			this->CreateObjectForVector(trackerNum, name, type, subType, numEggs, nurse);
		}
		cout << "Load Complete." << endl; // Outputs that load is complete
		inFs.close();					  // Close the file
	}
	catch (runtime_error &ept)
	{
		cout << ept.what() << endl;
	}
}

/**
 * Funciton Description: Generate Data?
 * Params: None
 * Return: None
 */
void General::GenerateData()
{ //DO NOT TOUCH CODE IN THIS METHOD

	JavaVM *jvm;											// Pointer to the JVM (Java Virtual Machine)
	JNIEnv *env;											// Pointer to native interface
															//================== prepare loading of Java VM ============================
	JavaVMInitArgs vm_args;									// Initialization arguments
	JavaVMOption *options = new JavaVMOption[1];			// JVM invocation options
	options[0].optionString = (char *)"-Djava.class.path="; // where to find java .class
	vm_args.version = JNI_VERSION_1_6;						// minimum Java version
	vm_args.nOptions = 1;									// number of options
	vm_args.options = options;
	vm_args.ignoreUnrecognized = false;						   // invalid options make the JVM init fail
															   //=============== load and initialize Java VM and JNI interface =============
	jint rc = JNI_CreateJavaVM(&jvm, (void **)&env, &vm_args); // YES !!
	delete options;											   // we then no longer need the initialisation options.
	if (rc != JNI_OK)
	{
		// TO DO: error processing...
		cin.get();
		exit(EXIT_FAILURE);
	}
	//=============== Display JVM version =======================================
	cout << "JVM load succeeded: Version ";
	jint ver = env->GetVersion();
	cout << ((ver >> 16) & 0x0f) << "." << (ver & 0x0f) << endl;

	jclass cls2 = env->FindClass("ZooFileWriter"); // try to find the class
	if (cls2 == nullptr)
	{
		cerr << "ERROR: class not found !";
	}
	else
	{ // if class found, continue
		cout << "Class MyTest found" << endl;
		jmethodID mid = env->GetStaticMethodID(cls2, "createZooFile", "()V"); // find method
		if (mid == nullptr)
			cerr << "ERROR: method void createZooFile() not found !" << endl;
		else
		{
			env->CallStaticVoidMethod(cls2, mid); // call method
			cout << endl;
		}
	}

	jvm->DestroyJavaVM();
	cin.get();
}

/**
 * Function Description: Makes the tables borders and title header for DisplayAnimalData()
 * Params: None
 * Returns: None
*/
void General::MakeDisplayTable()
{
	// Top border
	for (int i = 0; i < 94; ++i)
	{
		cout << "=";
	}
	cout << endl;

	// Header row:
	cout << "|     Track#     |      Name      |      Type      |    Sub-Type    | Number of Eggs | Nurse |" << endl;

	// Bottom Border
	for (int i = 0; i < 94; ++i)
	{
		cout << "=";
	}
	cout << endl;
}

/**
 * Function Description: Displays the data stored in vector animals, types and subTypes in a tabular form to user
 * Params: None
 * Returns: None
*/
void General::DisplayAnimalData()
{

	unsigned int i; // Loop through vectors

	this->MakeDisplayTable(); // Creates the top and bottom border, and title header for table

	// Loops through the vectors and prints out each table element properly
	for (i = 0; i < animals.size(); ++i)
	{
		cout << "|" << Spaces(to_string(animals.at(i)->GetTrackNumber()), 16) << "|";

		cout << Spaces(animals.at(i)->GetName(), 16) << "|";

		cout << Spaces(types.at(i), 16) << "|";

		cout << Spaces(subTypes.at(i), 16) << "|";

		// Output if type is mammal
		if (types.at(i) == "Mammal")
		{
			cout << Spaces("0", 16) << "|";

			cout << Spaces(to_string(animals.at(i)->GetNurse()), 7) << "|" << endl;
		}
		// Output if its the other type
		else
		{

			cout << Spaces(to_string(animals.at(i)->GetNumEggs()), 16) << "|";
			cout << Spaces("0", 7) << "|" << endl;
		}

		// Add a row separator
		for (int j = 0; j < 94; ++j)
		{
			cout << "-";
		}
		cout << endl;
	}
}

/**
 * Function Description: Asks user to input data on Animal to add into vectors and validates the inputed data, if data is invalid sends user back to main menu
 * Params: None
 * Returns: None
*/
void General::AddAnimal()
{
	int trackerNum;	 // holds the tracker number input
	string name;	 // holds the name input
	string type;	 // holds the type input
	string subType;	 // holds the sub-type input
	int numEggs;	 // holds the number of eggs input
	int nurse;		 // holds the nurse input
	char save = '?'; // Holds value for when user asked to save animal or cancel

	try
	{

		// Inputing tracker number and validating
		cout << "Track#: ";
		cin >> trackerNum;

		// Checks that input is not a string
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');

			throw runtime_error("Track# entered is invalid.");
		}

		// Checks that tracker numbers length is not too long
		LengthCheck(to_string(trackerNum), 6);


		// Checks that tracker number is not already in use
		for (auto p : animals)
		{
			if ((p->GetTrackNumber()) == trackerNum)
			{
				throw runtime_error("Track# already in use.");
			}
		}
		cout << endl;

		// Inputing name and validating
		cout << "Name of the animal: ";
		cin >> name;

		// Handles situation if value is invalid and checks validity
		LengthCheck(name, 15);

		cout << endl;

		// Inputing type and validating
		cout << "Type of animal: ";
		cin >> type;

		// Handles situation if value is invalid and checks validity
		LengthCheck(type, 15);

		// Checks that the type entered is Mammal or Oviparous
		if (type != "Mammal" && type != "Oviparous")
		{
			throw runtime_error("Entered type is invalid.");
		}

		cout << endl;

		// Inputing sub type and validating
		cout << "Sub-type of the animal: ";
		cin >> subType;

		// Handles situation if value is invalid and checks validity
		LengthCheck(subType, 15);

		// Checks that based on type inputed the subtype matches and is valid
		if (type == "Mammal")
		{
			if (subType != "Bat" && subType != "Whale" && subType != "SeaLion")
			{
				throw runtime_error("Re-check input. Either type and sub-type do not match, or sub-type is invalid.");
			}
		}
		else
		{
			if (subType != "Goose" && subType != "Pelican" && subType != "Crocodile")
			{
				throw runtime_error("Re-check input. Either type and sub-type do not match, or sub-type is invalid.");
			}
		}

		cout << endl;

		// Inputing number of eggs and validating
		cout << "Number of Eggs? " << endl;
		cin >> numEggs;

		//Checks that input is not a string
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');

			throw runtime_error("Number of eggs entered is invalid");
		}

		// Checks that if type is mammal then number of eggs is 0
		if (type == "Mammal" && numEggs != 0)
		{
			throw runtime_error("Mammals don't lay eggs");
		}

		cout << endl;

		// inputing nurse value, validating value
		cout << "Nurse? (Enter 1 or 0)" << endl;
		cin >> nurse;

		//Checks that input is not a string
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');

			throw runtime_error("Nurse value entered is invalid.");
		}

		// Checks that if type is oviparous then nurse is 0
		if (type == "Oviparous" && nurse != 0)
		{
			throw runtime_error("Oviparous are not nursed.");
		}

		// Checks that value of nurse is either 1 or 0
		if (nurse != 1 && nurse != 0)
		{
			throw runtime_error("Nurse is must be 1 or 0");
		}

		cout << endl;

		// Asks user for confirmation of save
		cout << "Would you like to save the animal or cancel? (Enter Y for save)" << endl;
		cin >> save;

		// Based on whether user wants to save or not does proper action
		if (save == 'Y' || save == 'y')
		{
			CreateObjectForVector(trackerNum, name, type, subType, numEggs, nurse);
			cout << "Animal successfully added." << endl;
		}
		else
		{
			// Outputs that process to add has been cancelled for clearance
			cout << "Add process cancelled. Animal not added to list." << endl;
		}
	}
	catch (runtime_error &expt)
	{
		cout << expt.what() << endl;
		cout << "Going back to main menu.." << endl; // FIXME: REMOVE IF NEED TO
	}
}

/**
 * Function Description: Removes an animal's data from the three vectors based on track# given 
 * Params: None
 * Returns: None
*/
void General::RemoveAnimal()
{
	vector<string>::iterator itSub;		  // Iterator used to erase from subTypes
	vector<string>::iterator itType;	  // Iterator used to erase from Types
	vector<Animal *>::iterator itAnimals; // Iterator used to erase from animals
	int trackerSearch;					  // The tracker to search for
	int trackerIndex = -1;				  // Tracks the index
	char userSure = '?';				  // To confirm that user wants to delete
	unsigned int i;						  // For vector looping

	try
	{
		// Asks for track# to remove
		cout << "Enter the Track# of the animal you want to remove. " << endl;
		cin >> trackerSearch;

		// Tackles problem when cin.fail() is true
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');

			throw runtime_error("Entered track number is not valid.");
		}

		// Checks if tracker lenght less than 6
		LengthCheck(to_string(trackerSearch),6);

		// Checks if there is such a tracker.
		for (i = 0; i < animals.size(); ++i)
		{
			if (trackerSearch == animals.at(i)->GetTrackNumber())
			{
				trackerIndex = i;
				break; // Breaks out of loop if the track number is found
			}
		}

		// If track number not found does throws error
		if (trackerIndex == -1){
			throw runtime_error("Track# not found, returning to main menu.");
		}

		// Asks user for confirmation to delete
		cout << "Are you sure you want to delete the data of animal with track number " << animals.at(trackerIndex)->GetTrackNumber() << "? (Enter Y for removal)" << endl;
		cin >> userSure;

		// If user says to removal
		if (userSure == 'Y' || userSure == 'y')
		{
			// Assings its, it, and ita the proper places to erase
			itSub = subTypes.begin() + trackerIndex;
			itType = types.begin() + trackerIndex;
			itAnimals = animals.begin() + trackerIndex;

			delete animals.at(trackerIndex); // deletes the pointer located at this pos first

			// Then does the erases
			animals.erase(itAnimals);
			types.erase(itType);
			subTypes.erase(itSub);

			cout << "Animal successfully deleted." << endl;
		}
		else
		{
			cout << "Cancelled request for removal. Animal was not removed from list." << endl;
		}
	}
	catch (runtime_error &e)
	{
		cout << e.what() << endl;
		cout << "Returning to main menu.." << endl;
	}
}

/**
 * Function Description: Clears the text file then saves new data of three vectors to the text file 
 * Params: None 
 * Returns: None
*/
void General::SavaDataToFile()
{
	ofstream outFs; // Declares the output file stream
	unsigned int i; // For looping through vector

	try
	{
		// Open file
		outFs.open("zoodata.txt"); // Clears the content and opens file.

		// If there is problem with opening file
		if (!outFs.is_open())
		{
			throw runtime_error("File not found.");
		}

		// Loops through each vector element
		for (i = 0; i < animals.size(); ++i)
		{
			string strToFile = ""; // Reset the full string that will be outputed to file

			// Adds proper padding for each data element of animal as required by file and concats to full string
			strToFile += paddingLeft(to_string(animals.at(i)->GetTrackNumber()), 7, "0") + " ";

			strToFile += paddingRight(animals.at(i)->GetName(), 16, " ") + " ";

			strToFile += paddingRight(types.at(i), 16, " ") + " ";

			strToFile += paddingRight(subTypes.at(i), 16, " ") + " ";

			if (types.at(i) == "Mammal") // Acts based on whether the type is Mammal or Oviparous
			{
				strToFile = strToFile + "0 " + to_string(animals.at(i)->GetNurse());
			}
			else
			{
				strToFile = strToFile + to_string(animals.at(i)->GetNumEggs()) + " 0";
			}

			if (i != (animals.size() - 1))
			{
				/**
				 * Adds an \n character at the end of the string only if it is not the last string to add
				 *  If \n is added at the end of the string and it is the last character, then eof picks it up as a line 
				 */
				strToFile += "\n";
			}

			outFs << strToFile; // Outputs the string to file
		}

		outFs.close(); // Closes the file and outputs succes message
		cout << "Save successfully completed" << endl;
	}
	catch (runtime_error &expt)
	{
		cout << expt.what() << endl;
		cout << "Returning to main menu.." << endl;
	}
}
