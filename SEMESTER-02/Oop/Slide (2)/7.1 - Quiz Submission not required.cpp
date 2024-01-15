#include<iostream>
using namespace std;

void main()
{
	int*** myArray = new int**[3];

	for(int i = 0 ; i < 3 ; i++)
	{
		myArray[i] = new int*[2];
		for(int j = 0; j < 2 ; j++)
		{
			myArray[i][j] = new int[2];
		}
	}

	int value = 1;
	for(int i = 0 ; i < 3 ; i++)
	{
		for(int j = 0 ; j < 2 ; j++)
		{
			for(int k = 0; k < 2 ; k++)
			{
				myArray[i][j][k] = value;
				value++;
			}
		}
	}

	cout<<(myArray+1)<<endl;
	cout<<(myArray+2)<<endl<<endl<<endl;

	cout<<*(myArray+1)<<endl;
	cout<<*(myArray+2)<<endl<<endl<<endl;

	cout<<**(myArray+1)<<endl;
	cout<<**(myArray+2)<<endl<<endl<<endl;

	cout<<***(myArray+1)<<endl;
	cout<<***(myArray+2)<<endl<<endl<<endl;
}