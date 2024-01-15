#include<iostream>
using namespace std;

//Function needs to know rows and cols in order to process the matrix
void DisplayMatrix(int** myMatrix, const int& ROWS, const int& COLS)
{
	cout<<"\n\n\nDisplaying Matrix:\n\n";
	for(int i=0; i<ROWS; i++)
	{
		for(int j=0 ; j<COLS ; j++)
		{
			cout<<myMatrix[i][j]<<"\t\t";			
		}
		cout<<endl;
	}	
}

void main()
{
	int** matrix = 0;	//matrix is a pointer to integer pointer. It can save address of integer pointer only.
	int rows, cols;

	cout<<"Enter total number of rows:\t";
	//cin>>rows;
	rows = 3;

	cout<<"Enter total number of columns:\t";
	//cin>>cols;
	cols = 4;


	//Dynamically create matrix
	matrix = new int*[rows];	//matrix stores the address of first integer pointer of this array(of integer pointers).
	for(int i=0; i<rows ; i++)
		matrix[i] = new int[cols];	//Each integer pointer saves the address of first integer of this array (of integers).

	//Initializing matrix
	int k=1;
	for(int i=0; i<rows; i++)
	{
		for(int j=0 ; j<cols ; j++)
		{
			matrix[i][j] = k;//*((*(matrix+i))+j)
			k++;
		}
	}	
	

	DisplayMatrix(matrix, rows, cols);

	//matrix[2][1] = 999;
	*(*(matrix+2) + 1) = 999;

	DisplayMatrix(matrix, rows, cols);

	//delete[] matrix;//delete[] x100
	
	//Deallocate matrix space
	for(int i = 0 ; i<rows ; i++)
	{
		delete[] matrix[i];	//Delete all integer arrays which are being pointed by int pointers
	//delete[] x200, delete[] x300, delete x400
	}	
	delete[] matrix;	//Delete array of int pointers which is being pointed by int**
	//delete x100
}