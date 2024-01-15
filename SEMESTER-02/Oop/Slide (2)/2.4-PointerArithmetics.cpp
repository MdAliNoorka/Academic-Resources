#include<iostream>
using namespace std;

void main()
{
	int size;

	cout<<"Enter size of array:\t";
	cin>>size;

	int* myArrayPtr = new int[size];	//Allocate memory

	cout<<"\n\nValues in Array before and after initialization:\n\n";

	int* temp = myArrayPtr;
	
	for(int i=0 ; i<size ; i++)
	{
		cout<<*temp;
		*temp = i+1;
		cout<<"\t"<<*temp<<endl;
		temp++;		//Move the pointer to next integer
	}

	int index = 0;
	int* temp2 = myArrayPtr;

	cout<<"\n\nEnter the index which you want to read:\t";
	cin>>index;

	cout<<"\n\nValue saved at index "<<index<<" is :\t"<<*(temp2+index)<<endl;	//This is offset notation of temp2[index]

	if(myArrayPtr != 0)
		delete[] myArrayPtr;	//Deallocate Memory.
}