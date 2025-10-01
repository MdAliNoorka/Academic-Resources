#include<iostream>
using namespace std;

class Rectangle
{
private:
	int lenght;
	int width;

public:
	Rectangle();
	Rectangle(int, int);	//This is overloaded constructor (with parameters). Note the name and return type of constructor
	void Print();	
};

//If you write overloaded constructor for your class and do not write default constructor then complier will not implicitly create default constructor.

Rectangle::Rectangle()
{
	cout << "\n\n\nDefault Constructor Called\n\n\n";
	lenght = width = 0;
	this->lenght = this->width = 0;
	(*this).lenght = (*this).width = 0;
}

Rectangle::Rectangle(int l , int w)
{
	cout << "\n\n\nOverloaded Constructor Called with parameters "<<l<<" and "<<w<<"\n\n\n";
	lenght = l;
	width = w;

	this->lenght = l; this->width = w;
	(*this).lenght = l; (*this).width = w;
}

void Rectangle::Print()
{
	cout << "\n\n\nPrinting Rectangle\n";
	cout << "this:\t" << this << endl;	
	cout<<lenght << "X" <<width<<endl;
	cout<<this->lenght << "X" <<this->width<<endl;
	cout<<(*this).lenght << "X" <<(*this).width<<endl;
}

void main()
{

	cout << "Execution started in main()\n\n\n";

	cout << "Going to create r1\n\n";
	//int a1;
	Rectangle r1; //Deafualt Const. -->>>>>>>> Rectangle(&r1 = this)
	cout << "Address of r1:\t" << &r1 << endl;
	cout << "Rectangle 1:\n";
	r1.Print();	//Print(&r1 = this)

	cout<<"#################\n";
	cout << "Going to create r2\n\n";
	//int a2 = 99;
	Rectangle r2(5, 10); //Overloaded Const. //Rectanlge(&r2 = this)
	cout << "Address of r2:\t" << &r2 << endl;
	cout << "Rectangle 2:\n";
	r2.Print(); //Print(&r2 = this)

	cout << "main() is exiting....All the objects on stack are going to be destroyed.\n\n\n";

	
}