#include<iostream>
using namespace std;

//Test 1: Comment Function 2,3 and related functionality then test main
//Test 2: Comment Function 1,3 and related functionality and then test main
//Test 3: Comment Function 1,2 and related functionality and then test main

//void Function1(const int *xPtr)
//{
//	//xptr is a pointer to constant integer
//	int y = 20;
//	cout<<"*xPtr :\t"<<*xPtr<<endl;
//
//	xPtr = &y;
//	cout<<"*xPtr :\t"<<*xPtr<<endl;
//	
//	y = 200;
//	cout<<y<<endl;
//	*xPtr = 100;
//}

void Function2(int * const ptr)
{
	//ptr is a constant pointer to integer
	cout<<"\n\nInside Function2()\n\n";
	int y = 90;
	cout<<"*ptr :\t"<<*ptr<<endl;

	*ptr = 100;
	cout<<"*ptr :\t"<<*ptr<<endl;
	cout<<"y :\t"<<y<<endl;

	ptr = &y;	
}

void Function3(const int * const ptr)
{
	//ptr is a constant pointer to constant integer
	cout<<"\n\nInside Function3()\n\n";
	int y = 10;
	cout<<"*ptr :\t"<<*ptr<<endl;

	*ptr = 100;
	cout<<"*ptr :\t"<<*ptr<<endl;

	ptr = &y;	
}

void main()
{
	int y = 10;
	//Function1(&y);
	
	Function2(&y);	
	//cout<<"\n\nAfter Function2\n\n y = \t"<<y<<endl;

	//Function3(&y);

}