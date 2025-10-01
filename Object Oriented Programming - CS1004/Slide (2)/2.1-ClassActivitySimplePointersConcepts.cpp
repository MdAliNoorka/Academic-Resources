#include<iostream>
using namespace std;

//Draw the configuration of memory on paper then verify it in Debug mode.
void Test1()
{
	int a,b,c;				//Addresses of a, b, c are 10, 20 and 30 respectively
	int *w , *x, *y, *z;	//Addresses of w,x,y,z are 40,50,60 and 70 respectively
	a = 10;
	b = a * 5;
	w = &a;
	x = &b;
	*y = *w + *x;		
	cout<<" *w =\t"<<*w<<endl;
	cout<<" *x =\t"<<*x<<endl;
	cout<<" *y =\t"<<*y<<endl;
}

void Test2()
{
	int a,b,c;	//Addresses of a, b, c are 10, 20 and 30 respectively
	int *w , *x, *y, *z;	//Addresses of w,x,y,z are 40,50,60 and 70 respectively

	a = 10;
	b = a * 5;
	w = &a;
	x = &b;	
	c = *x + (*w * 2);
	y = &a;
	*y = c;
	cout<<" *w =\t"<<*w<<endl;
	cout<<" *x =\t"<<*x<<endl;
	cout<<" *y =\t"<<*y<<endl;
}

void Test3()
{
	int a,b,c;	//Addresses of a, b, c are 10, 20 and 30 respectively
	int *w , *x, *y, *z;	//Addresses of w,x,y,z are 40,50,60 and 70 respectively
	z = 0;
	a = 10;
	b = a * 5;
	w = &a;
	x = &b;	
	c = *w + *x;
	*z = c;		
	cout<<" *w =\t"<<*w<<endl;
	cout<<" *x =\t"<<*x<<endl;
	cout<<" *y =\t"<<*y<<endl;
}

void main()
{
	//Test1();
	//Test2();
	Test3();
}