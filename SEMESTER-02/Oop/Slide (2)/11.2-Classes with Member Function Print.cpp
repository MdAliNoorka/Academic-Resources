//Reference Dietel&Dietel Page 382, D.S. Malik Page 683.
#include<iostream>
using namespace std;

class Rectangle
{
private:
	int lenght;
	int width;

public:	//public members (data/functions) are accessible outside class scope.
	
	//Member Function.
	void Print()
	{
		//This function displays the state (information) of an object
		cout<<lenght << " X " << width<<endl;
	}

	//Member functions defined inside class' body are impliciltly declared Inline.
	//Compiler reserves the right not to inline a function.
};


void main()
{
	int i = 99;
	Rectangle r1;

	//r1.lenght;	//Uncomment and check, private data is not accessible outside class scope.

	r1.Print();		// Dot is "member access operator" to access a data/function member of an object
	//This is printing junk state of the object
	//How can we make the state of object deterministic?

}