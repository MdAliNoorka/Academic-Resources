#include<iostream>
#include<string>
using namespace std;

void Fun1(int x, int& y)
{
	int z = 999;

	cout<<"\n\nEntered Fun1().\n";
	cout<<"x =\t"<<x<<"\ty =\t"<<y<<endl;

	x = 111;
	y = 222;

	cout<<"\n\nLeaving Fun1().\n";
	cout<<"x =\t"<<x<<"\ty =\t"<<y<<endl;

	cout<<"\n\n&x =\t"<<&x<<"\t&y=\t"<<&y<<endl;
}

void TestParameters()
{
	int a = 10;
	int b = 20;

	cout<<"Before calling Fun1().\n";
	cout<<"a =\t"<<a<<"\tb =\t"<<b<<endl;
	
	Fun1(a,b);

	cout<<"\n\nAfter Fun1().\n";
	cout<<"a =\t"<<a<<"\tb =\t"<<b<<endl;

	cout<<"\n\n&a =\t"<<&a<<"\t&b =\t"<<&b<<endl;
}
//int& ReturnSomething()
int ReturnSomething()
{
	int a = 10;
	return a;
}


void TestReturnValue()
{	
	int b = 0;
	b = ReturnSomething();

	cout<<"b = "<<b<<endl;
}

void main()
{
	//TestParameters();
	TestReturnValue();
}