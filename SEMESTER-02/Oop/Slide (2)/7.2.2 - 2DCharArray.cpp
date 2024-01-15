#include<iostream>
using namespace std;

void main()
{
	char* abc = new char[5];
	
	cout << "Enter five characters:\n";
	for (int i = 0; i < 5; i++)
		cin >> abc[i];

	cout << "\n\n\nUser Entered following characters:\n";
	for (int i = 0; i < 5; i++)
		cout << abc[i]<<endl;

	delete[] abc;

	char** puzzle = new char*[5];
	for (int i = 0; i < 5; i++)
		puzzle[i] = new char[5];

	cout << "\n\n\nCheck what is saved in puzzle:\n\n";
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << puzzle[i][j] << "\t";
		}
		cout << endl;
	}

	int ascii = int('a');
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			puzzle[i][j] = ascii;
			ascii++;
		}		
	}

	cout << "\n\n\nCheck what is in puzzle now:\n\n";

	for (int i = 0; i < 5; i++)
	{
		cout << "\t";
		for (int j = 0; j < 5; j++)
		{
			cout << puzzle[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
		delete[] puzzle[i];
	delete[] puzzle;
	
}