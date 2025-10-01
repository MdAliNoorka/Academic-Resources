#include<iostream>
using namespace std;

int* GetArray()
{
	int size = 10;
	int* aPtr = new int[size];
	cout<<"\n\n\nInitialize and Print Array:\n";
	for(int i = 0 ; i < size ; i++)
	{
		aPtr[i] = i+1;
		cout<<aPtr[i]<<endl;
	}
	delete[] aPtr;
	return aPtr;
}
void main()
{
	int* myArray = GetArray();		//What went wrong in this function. Fix this issue.
	cout << "I am back in main()" << endl;
	cout<<"\n\n\nmyArray[0]:\t"<<myArray[0]<<endl;	
}