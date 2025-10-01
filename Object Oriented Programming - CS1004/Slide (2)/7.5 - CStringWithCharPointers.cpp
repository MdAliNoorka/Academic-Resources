#include<iostream>
using namespace std;

void main()
{
	char* myString = new char[50];
	char* temp = myString;	//Where is temp pointing

	cout << "myString = " << myString << endl<<endl;	//Junk Value saved in char array right now
	cout << "temp = " << temp << endl << endl;

	myString = "Test String";

	cout << "After modification:\n\nmyString = " << myString << endl << endl;

	cout << "temp = " << temp << endl << endl;	

	int i=0;
	for(i=0; i< strlen(myString); i++){
		temp[i] = myString[i];
	}
	temp[i] = '\0';

	cout << "\n\n\nAfter Deep Copy:\n\nmyString = " << myString << endl << endl;

	cout << "temp = " << temp << endl << endl;	


	/*cout<<"Overwriting mystring[2]\n";
	myString[2] = 'x';	//Updating constant literal Throws exception
	*/

	cout << "Experiment:\n";
	cout << "&myString:\t"<< &myString << endl;
	cout << "myString\t" << myString << endl;
	cout << "&myString[0]\t" << &myString[0] << endl;
	cout << "&myString[1]\t" << &myString[1] << endl;
	cout << "myString[0]\t" << myString[0] << endl;
	cout << "myString[1]\t" << myString[1] << endl;



	//myString has started pointing to string literal or string constant (a temp buffer on stack) that contains
	// "Test String" and temp is still pointing to memory allocated in heap.
	//If we want to write "Test String" in heap we will have to copy it in heap explicitly.

	cout << "Enter a String in Temp:\t";
	cin >> temp;

	cout << "After taking input from user:\n\nmyString = " << myString << endl << endl;

	cout << "temp = " << temp << endl << endl;

	//We cannot overwrite string literal/string constant.......This will throw Exception
	cout << "Enter a string in MyString that is pointing to String Literal:\t";
	cin >> myString;
	cout << "Temp :\t" << temp << endl;
	cout << "MyString :\t" << myString << endl;


}