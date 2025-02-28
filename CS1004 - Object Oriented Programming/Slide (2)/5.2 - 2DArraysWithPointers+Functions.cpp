#include<iostream>
using namespace std;

//Function needs to know rows and cols in order to process the matrix
void DisplayMatrix(int** myMatrix, const int& rows, const int& cols)
{
	cout<<"\n\n\nDisplaying Matrix:\n\n";
	for(int i=0; i<rows; i++)
	{
		for(int j=0 ; j<cols ; j++)
		{
			cout<<myMatrix[i][j]<<"\t\t";		//Subscript Notation
			//Uncomment following line and check what it does
			//cout << *(*(myMatrix+i)+j) << "\t\t";		//Offset Notation
		}
		cout<<endl;
	}	
}

int** InputMatrix(int& rows, int& cols)
{
	cout << "Enter total number of rows:\t";
	cin >> rows;

	cout << "Enter total number of columns:\t";
	cin >> cols;

	//Dynamically create matrix
	int** matrix = new int*[rows];	//matrix stores the address of first integer pointer of this array(of integer pointers).
	for (int i = 0; i<rows; i++)
		matrix[i] = new int[cols];	//Each integer pointer saves the address of first integer of this array (of integers).

	//Initializing matrix
	int k = 0;
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			matrix[i][j] = k;
			k++;
		}
	}

	return matrix;
}

void main()
{
	int** matrix = 0;	//matrix is a pointer to integer pointer. It can save address of integer pointer only.
	int rows, cols;

	matrix = InputMatrix(rows, cols);

	DisplayMatrix(matrix, rows, cols);

	*(*(matrix+2) + 1) = 999;

	DisplayMatrix(matrix, rows, cols);

	//Deallocate matrix space
	for(int i = 0 ; i<rows ; i++)
		delete[] matrix[i];	//Delete all integer arrays which are being pointed by int pointers
	delete[] matrix;	//Delete array of int pointers which is being pointed by int**

}