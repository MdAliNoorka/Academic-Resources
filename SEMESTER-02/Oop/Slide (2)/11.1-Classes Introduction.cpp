#include<iostream>
using namespace std;

class Rectangle		
{                   //Class scope starts here

 private:			//This is access specifier. All members which are private are not accessible beyond class scope (outside world)
					//By default, access is private.
	int lenght;		//Data Member
	int width;		//Data Member
	
};					//Class scope ends here.

void main()
{
	int a = 99;
	cout<< a <<endl;

	Rectangle r1;

	//UNCOMMENT THIS LINE FOR PRINTING

	//cout << r1;				//cout does not know how to display user defined data type Rectangle.
	// How can I print r1?
	
}