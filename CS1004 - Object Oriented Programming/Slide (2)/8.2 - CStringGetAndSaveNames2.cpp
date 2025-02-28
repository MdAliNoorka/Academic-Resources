#include<iostream>
using namespace std;

int StringLenght(char* str)
{
	int stringLen = 0;
	for (char* temp = str; *temp != '\0'; temp++)
		stringLen++;

	return stringLen;
}

char* GetStringFromBuffer(char* buffer)
{
	int strLen = StringLenght(buffer);
	char* str = 0;

	if (strLen > 0)
	{	
		str = new char[strLen+1];
		char* tempDest = str;
		//str = buffer;//What is this doing???
		for (char* tempSrc = buffer; *tempSrc != '\0'; tempSrc++, tempDest++)
		{
			*tempDest = *tempSrc;
		}
		*tempDest = '\0';
	}
	return str;
}

void main()
{
	char tempBuffer[80];
	char* nameStudent1 = 0;
	char* nameStudent2 = 0;

	cout << "Enter Name of Student 1:\t";
	cin.getline(tempBuffer, 80);

	nameStudent1 = GetStringFromBuffer(tempBuffer);

	cout << "Enter Name of Student 2:\t";
	cin.getline(tempBuffer, 80);

	nameStudent2 = GetStringFromBuffer(tempBuffer);


	//Press only Enter when you are asked for fname and lname. 
	cout << "User entered following names:\n" << nameStudent1 <<endl<< nameStudent2<<endl<<endl;
	//Why did program crash? Check and fix the exception

	if (nameStudent1 != 0)
		delete[] nameStudent1;
	if (nameStudent2 != 0)
		delete[] nameStudent2;

	
}