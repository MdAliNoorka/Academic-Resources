#include<iostream>
using namespace std;

void main()
{
	//Draw the memory configuration
	int size = 2;

	cout<<"Enter size of array:\t";
	cin>>size;

	int* myArrayPtr = new int[size];	//Allocate memory on heap. Save base address (address of index zero) in myArrayPtr
	
	cout << "&size:\t" << &size << endl;
	cout << "&myArrayPtr:\t" << &myArrayPtr << endl;
	cout << "myArrayPtr:\t" << myArrayPtr << endl;
	
	cout << "\n\nAddresses of Array Cells:\n\n";

	for (int i = 0; i<size; i++)		//Scalable... What is scalability?
	{
		cout << "Address of index " << i << ":\t" << &myArrayPtr[i] << endl;
	}


	cout<<"\n\nValues in Array before and after initialization:\n\n";

	for(int i=0 ; i<size ; i++)
	{
		cout<<myArrayPtr[i];
		myArrayPtr[i] = i+1;
		cout<<"\t"<<myArrayPtr[i]<<endl;
	}

	for (int i = 0; i<size; i++)
	{
		cout << "Enter value "<<i<<":\t";
		cin >> myArrayPtr[i];		
	}

	cout << "\n\n\nValues entered by user:\n";
	for (int i = 0; i<size; i++)
	{
		cout << "myArrayPtr[" << i << "]:\t" << myArrayPtr[i]<<endl;
	}

	//Memory Leakage???
	delete[] myArrayPtr;		//Deallocate Memory. Returns the space back to the system's available memory pool 
	myArrayPtr = 0;				//If myArrayPtr's is not going to be popped at the moment, make it Null Pointer. Why? 

	cout << "\n\nArray has been deallocated.....\n\n";
	cout << "&size:\t" << &size << endl;
	cout << "&myArrayPtr:\t" << &myArrayPtr << endl;
	cout << "myArrayPtr:\t" << myArrayPtr << endl;

	//What if we read/write the array again?
	for (int i = 0; i<size; i++)
	{
		cout << "Enter value "<<i<<":\t";
		cin >> myArrayPtr[i];		
	}
	for (int i = 0; i<size; i++)
	{
		cout << "User Entered value "<<i<<":\t";
		cout << myArrayPtr[i]<<endl;		
	}
	//Illegal Memory Access due to Dangling Pointer. Solution?
}