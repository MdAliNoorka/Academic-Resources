//What is wrong with code segment below?
#include<iostream>
using namespace std;

void main()
{	
	char* firstName =0;
	char* lastName = 0;

	cout << "Enter First Name:\t";
	cin >> firstName;	//Null Reference Exception

	cout << "Enter Last Name:\t";
	cin >> lastName;	//Null Reference Exception

	cout << "User Entered Name:\t" << firstName << " " << lastName << endl << endl;
}