#include<iostream>
using namespace std;

void main()
{
	//Draw Memory Configuration
	const int size = 5;

	cout<<"Enter size of array:\t";
	//cin>>size;

	int myArray[size];	//syntax error: size must be a constant. Make it constant to run program successfully.

	cout<<"\n\nElements in Array Before and After Initialization:\n";
	for(int i=0 ; i<5 ; i++)
	{
		cout<<myArray[i];		//This is called Subscript notation
		myArray[i] = i+1;
		cout<<"\t"<<*(myArray+i)<<endl;	//This is called offset notation to access myArray[i]
	}

	cout<<"\n\n&Size = "<<&size<<endl;
	cout<<"Addrsses of Array Cells:\n";
	for(int i=0 ; i<5 ; i++)
		cout<<&myArray[i]<<endl;
}