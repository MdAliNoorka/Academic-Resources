#include<iostream>
using namespace std;

class Rectangle
{
private:
	int lenght;
	int width;
public:
	Rectangle();		//This is default constructor (without any parameters). Note the name and return type of constructor
	void Print();
};

// Properties of Constructor:
// 1- Name of constructor is same as class
// 2- No return type
// 3- Implicit Call Only
// 4- Access is always public

//If you do not write Default Constructor, compiler will provide its own default Constructor, that does nothing. i.e. no initialization of data members.
//Here is the definition of the Default Constructor
Rectangle::Rectangle()	//Scope resoultion operator ties this function with class scope.
{
	cout << "\n\n\nDefault Constructor Called\n\n\n";
	cout << "Values before Initialization:\n";

	cout << lenght << "X" << width << endl<<endl<<endl;

	cout << "Address of Lenght:\t" << &lenght << endl;
	cout << "Address of Width:\t" << &width << endl;
	cout << "this:\t" << this<<endl;
		
	//Above printing is just for experiment. Purpose of constructor is ONLY initialization

	lenght = width = 0;
}

void Rectangle::Print()//Scope Resolution Operator binds this function with class scope. Print function is in class scope.
{
	//This function displays the state (information) of an object
	cout<<lenght << " X " << width<<endl;
	cout<<this->lenght << " X " << this->width<<endl;
	cout<<(*this).lenght << " X " << (*this).width<<endl;

	//Uncomment following line to see what it is working
	//cout << "this = \t" << this<<endl;
	//cout << "Size of this = \t" << sizeof(this)<<endl;
	//cout << "Size of a Rectangle = \t" << sizeof(*this)<<endl;
}

void main()
{
	cout << "Execution started in main()\n\n\n";
	int i = 99;
	Rectangle r1;
	cout << "Address of r1:\t" << &r1 << endl;
	r1.Print();
	cout<<"sizeof(r1):\t"<<sizeof(r1)<<endl;

}