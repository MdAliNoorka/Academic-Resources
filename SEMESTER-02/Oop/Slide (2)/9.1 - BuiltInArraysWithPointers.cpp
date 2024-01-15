#include<iostream>
using namespace std;

void PrintArray(int* arr, int& size)
{
	int* endPtr = arr + size;
	cout << "\n\n\nDisplay Elements:\n";
	for (int* temp = arr; temp < endPtr ; temp++)
	{
		cout << *temp << endl;
	}
}

void main()
{
	int size = 5;
	int array[5] = {1,2,3,4,5};
	int* bPtr = array;

	cout<<"bArray:\t"<<array<<endl;
	cout << "&bArray:\t" << &array << endl;
	cout<<"&bArray[0]:\t"<<&array[0]<<endl;
	cout<<"bPtr:\t"<<bPtr<<endl;

	PrintArray(array, size);
	cout <<"Move bPtr:\t"<< *bPtr++ << endl;
	cout <<"Move bPtr:\t"<< (*bPtr)++ << endl;
	cout <<"Move bPtr:\t"<< ++(*bPtr) << endl;
	cout <<"Move bPtr:\t"<< *++bPtr << endl;
	cout <<"Move bPtr:\t"<< *(++bPtr) << endl;
	cout <<"Move bPtr:\t"<< *(bPtr++) << endl;
	cout << "*(array+2):\t" << *(array+1) << endl;
	
	//cout << "Move array:\t" << *(array++) << endl;			//What is wrong here?
	//What is the difference between following expressions?
	//array = array+1
	//array++
	//array+1
}