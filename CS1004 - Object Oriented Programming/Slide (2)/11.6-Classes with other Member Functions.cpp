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

	//Purpose of Constructor is initilaization only. Make Input function to take input from user
	void Input()
	{
		cout << "Input Rectangle's Lenght:\t";
		cin >> lenght; //this->lenght;
		cout << "Input Width:\t";
		cin >> width; //this->width;
	}
	int Area();	//Another Member Function

};

int Rectangle::Area()
{
	return lenght*width;
	//return this->lenght* this->width;
}

Rectangle::Rectangle(int l = 0, int w = 0)
{
	cout << "\n\n\nConstructor Called with parameters " << l << " and " << w << "\n\n\n";
	lenght = l;
	width = w;
}

void Rectangle::Print()
{
	cout << lenght << " X " << width << endl;
}

void main()
{

	Rectangle r1;
	cout << "Rectangle 1:\t";
	r1.Print();


	Rectangle r2(5, 10);
	cout << "Rectangle 2:\t";
	r2.Print();

	Rectangle r3;
	cout<<"Enter Rectangle 3:\n";
	r3.Input();
	cout << "Rectangle 3:\t";
	r3.Print();

	cout << "\n\nArea of Rectangle 1:\t" << r1.Area() << endl;
	cout << "Area of Rectangle 2:\t" << r2.Area() << endl;
	cout << "Area of Rectangle 3:\t" << r3.Area() << endl;	
}