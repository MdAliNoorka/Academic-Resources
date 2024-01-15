#include<iostream>
using namespace std;

void SwapByValue(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout<<"\n\n\nCheck values inside SwapByValue:"<<endl;
	cout<<"\n\n\na=\t"<<a<<endl;
	cout<<"b=\t"<<b<<endl;	

	cout<<"\n\n\nCheck Address of Variables inside SwapByValue:"<<endl;
	cout<<"Address of a:\t"<<&a<<endl;
	cout<<"Address of b:\t"<<&b<<endl;	
}
void SwapByReference(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

	cout<<"\n\n\nCheck Address of Variables inside SwapByReference:"<<endl;
	cout<<"Address of a:\t"<<&a<<endl;
	cout<<"Address of b:\t"<<&b<<endl;	
}

void main()
{
	int x = 5;
	int y = 10;

	cout<<"Original Values:"<<endl;
	cout<<"\n\n\nx = "<<x<<endl;
	cout<<"y = "<<y<<endl;

	cout<<"\n\n\nCheck Addresses of variables in main():"<<endl;
	cout<<"\n\n\nAddress of x\t"<<&x<<endl;
	cout<<"Address of y\t"<<&y<<endl;

	SwapByValue(x, y);
	
	cout<<"\n\n\nValues in Main() after SwapByValue:"<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;

	SwapByReference(x, y);

	cout<<"\n\n\nValues in Main() after SwapByReference:"<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
}