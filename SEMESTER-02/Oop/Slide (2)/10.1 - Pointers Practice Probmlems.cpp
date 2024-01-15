#include<iostream>
using namespace std;

//-------------------------------------------------------------------------------------------------------
//Practice Problem 1
//-------------------------------------------------------------------------------------------------------
//void InterchageRows(int*& row1, int*& row2)
//{
//	int* temp = row1;
//	row1 = row2;
//	row2 = temp;
//}
//
//void main()
//{
//	int** matrix = new int*[3];
//	for (int i = 0; i < 3; i++)
//		matrix[i] = new int[3];
//	
//	int value = 1;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			matrix[i][j] = value++;
//		}
//	}
//	int* r1 = matrix[1];
//	int* r2 = matrix[2];
//	
//	//What is difference between these two lines?
//	//InterchageRows(r1,r2);
//	//InterchageRows(matrix[1], matrix[2]);
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << matrix[i][j]<<"\t";
//		}
//		cout << endl;
//	}
//}
//-------------------------------------------------------------------------------------------------------
//Practice Problem 2
//-------------------------------------------------------------------------------------------------------

void StringCopy(char* dest, char* src)
{
	int i = 0;
	for (; src[i]!='\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
}
char* GetToken(int i)
{
	char* token = new char[10];
	if (i == 0)
		StringCopy(token, "This");
	if (i == 1)
		StringCopy(token, "is");
	if (i == 2)
		StringCopy(token, "sample");
	if (i == 3)
		StringCopy(token, "string");
	return token;
}

void main()
{
	char** tokens = new char*[4];
	for (int i = 0; i < 4; i++)
	{
		//Test 1
		/*char* tok = GetToken(i);
		char* copyToken = new char[10];
		copyToken = tok;
		tokens[i] = copyToken;*/

		//Test 2
		tokens[i] = GetToken(i);
	}

	for (int i = 0; i < 4; i++)
		cout << tokens[i] << endl;

	for (int i = 0; i < 4; i++)
	{
		delete[] tokens[i];
	}
	delete[] tokens;
}