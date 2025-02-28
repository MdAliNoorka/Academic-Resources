#include<iostream>
using namespace std;

class Rectangle
{
private:
	int lenght;
	int width;

public:	
	Rectangle(int, int);
	void Print();
	
};

Rectangle::Rectangle(int l = 0, int w = 0)//Default Arguments
{
	cout << "\n\n\nConstructor Called with parameters " << l << " and " << w << "\n\n\n";
	lenght = l;
	width = w;
}


void Rectangle::Print()
{
	cout << lenght << " X " <<width<<endl;
}

void main()
{

	Rectangle r1;
	cout << "Rectangle 1:\n";
	r1.Print();

	Rectangle r2(5, 10);
	cout << "Rectangle 2:\n";
	r2.Print();
}