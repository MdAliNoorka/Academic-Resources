#include<iostream>
using namespace std;

void main()
{
	int* list = new int[5];
	for (int i = 0; i < 5; i++)
		list[i] = i + 1;

	cout <<endl<<endl<< list[3] << endl;

	int** myArray = new int*[4];

	for (int i = 0; i < 4; i++)
	{
		myArray[i] = new int[4];
		
	}

	int value = 1;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			myArray[i][j] = value;
			value++;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout<<myArray[i][j]<<"\t";			
		}
		cout << endl;
	}

	cout <<endl<<endl<< *(*(myArray + 2)+1) << endl;		//Prints 10

	cout << endl << endl << myArray[2][1] << endl;		//Prints 10

	cout << endl << endl << **myArray + 2 + 1 << endl;		//Prints 4
		
	cout << endl << endl << (*(myArray + 2)) [3] << endl;	//Prints 12

	cout << endl << endl << *myArray[3] << endl;		//Prints 13
														//Subscript has higher precedence

	for (int i = 0; i < 4; i++)
		delete[] myArray[i];
	delete[] myArray;
	delete[] list;
}