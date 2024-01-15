#include<iostream>
using namespace std;

void main()
{
	//--------------------------------------------------------------------------------------
	// Test 0 - Pointer Declaration without initialization i.e. junk values (Ignore the exception for this check only).
	//--------------------------------------------------------------------------------------
	//int a ;				// a is an integer
	//int* aPtr ;			// aPtr is pointer to an integer
	//	
	//cout<<"\n\n\nTesting Without Initialization...\n\n";
	//cout<<"a =\t"<<a<<endl;
	//cout<<"value in aPtr =\t"<<aPtr<<endl;
	
	//--------------------------------------------------------------------------------------
	// Test 1 - Pointer Initialization
	//--------------------------------------------------------------------------------------
	//int a = 999;			// a is an integer
	//int* aPtr = 0 ;			// aPtr is pointer to an integer
	//
	////int* bPtr = nullptr;	//bPtr is also a pointer to integer and pointing to nothing initially	
	//// aPtr is a null pointer now...Pointing to nothing...check with aPtr = nullptr; as well
	//
	//cout<<"\n\n\nTesting Initialization...\n\n";
	//cout<<"a =\t"<<a<<endl;
	//cout<<"value in aPtr =\t"<<aPtr<<endl;
	
	
	//--------------------------------------------------------------------------------------
	// Test 2 - Pointing to specific data
	//--------------------------------------------------------------------------------------
	
	//int a = 999;			// a is an integer
	//int* aPtr = 0 ;			// aPtr is pointer to an integer
	//
	//aPtr = &a;				//saving a's address in aptr. aptr is pointing to a now
	//
	////& is Address Operator... &xyz gives address of variable xyz
	//
	//cout<<"\n\n\nAfter pointing to a ...\n\n";
	//cout<<"Address of a =\t"<<&a<<endl;
	//cout<<"Address of aPtr:\t"<<&aPtr<<endl;
	//cout<<"value in aPtr =\t"<<aPtr<<endl;
	//cout<<"a =\t"<<a<<endl;
	//cout<<"*aPtr =\t"<<*aPtr<<endl;		//Dereference Operator... Gives content of cell to which aPtr is pointing
	//cout<<"Size of a:\t"<<sizeof(a)<<endl;
	//cout<<"Size of aPtr:\t"<<sizeof(aPtr)<<endl;

	
	//--------------------------------------------------------------------------------------
	// Test 3 - Change the data of a and check what happens
	//--------------------------------------------------------------------------------------
	

	//a = 10;

	//cout<<"\n\n\nAfter changing a's data ...\n\n";
	//cout<<"Address of a =\t"<<&a<<endl;
	//cout<<"Address of aPtr:\t"<<&aPtr<<endl;
	//cout<<"value in aPtr =\t"<<aPtr<<endl;
	//cout<<"a =\t"<<a<<endl;
	//cout<<"*aPtr =\t"<<*aPtr<<endl;
	
	
	//--------------------------------------------------------------------------------------
	// Test 4 - Changing data using pointer
	//--------------------------------------------------------------------------------------
	
	//*aPtr = 500;

	//cout<<"\n\n\nAfter changing a's data using aPtr ...\n\n";
	//cout<<"Address of a =\t"<<&a<<endl;
	//cout<<"Address of aPtr:\t"<<&aPtr<<endl;
	//cout<<"value in aPtr =\t"<<aPtr<<endl;
	//cout<<"a =\t"<<a<<endl;
	//cout<<"*aPtr =\t"<<*aPtr<<endl;

	
	//--------------------------------------------------------------------------------------
	// Test 5 - Take data from user and then print
	//--------------------------------------------------------------------------------------
	

	/*cout<<"\n\n\nEnter value in a:\t";
	cin>>a;

	cout<<"\n\n\nAfter data input in a ...\n\n";
	cout<<"Address of a =\t"<<&a<<endl;
	cout<<"Address of aPtr:\t"<<&aPtr<<endl;
	cout<<"value in aPtr =\t"<<aPtr<<endl;
	cout<<"a =\t"<<a<<endl;
	cout<<"*aPtr =\t"<<*aPtr<<endl;
*/
	
	//--------------------------------------------------------------------------------------
	// Test 6 - Input data using pointer
	//--------------------------------------------------------------------------------------

	//cout<<"\n\n\nEnter value in *aPtr:\t";
	//cin>>*aPtr;

	//cout<<"\n\n\nAfter data input in aPtr ...\n\n";
	//cout<<"Address of a =\t"<<&a<<endl;
	//cout<<"Address of aPtr:\t"<<&aPtr<<endl;
	//cout<<"value in aPtr =\t"<<aPtr<<endl;
	//cout<<"a =\t"<<a<<endl;
	//cout<<"*aPtr =\t"<<*aPtr<<endl;

	
	//--------------------------------------------------------------------------------------
	// Test 7 - aPtr is going to point different integer
	//--------------------------------------------------------------------------------------
	

	//int b = 100;
	//aPtr = &b;
	//cout<<"\n\n\nAfter pointing to b ...\n\n";
	//cout<<"Address of b =\t"<<&b<<endl;
	//cout<<"Address of aPtr:\t"<<&aPtr<<endl;
	//cout<<"value in aPtr =\t"<<aPtr<<endl;
	//cout<<"a =\t"<<a<<endl;
	//cout<<"b =\t"<<b<<endl;
	//cout<<"*aPtr =\t"<<*aPtr<<endl;

	
	//--------------------------------------------------------------------------------------
	// Test 8 - Two pointers pointing to same integer
	//--------------------------------------------------------------------------------------

	//int* xyzVariable = aPtr;

	//cout<<"\n\n\n xyzVariable ...\n\n";
	//cout<<"Address of b =\t"<<&b<<endl;
	//cout<<"Address of aPtr:\t"<<&aPtr<<endl;
	//cout<<"Address of xyzVariable:\t"<<&xyzVariable<<endl;
	//cout<<"value in aPtr =\t"<<aPtr<<endl;
	//cout<<"value in xyzVariable =\t"<<xyzVariable<<endl;
	//cout<<"a =\t"<<a<<endl;
	//cout<<"b =\t"<<b<<endl;
	//cout<<"*aPtr =\t"<<*aPtr<<endl;
	//cout<<"*xyzVariable =\t"<<*xyzVariable<<endl;

	
	//--------------------------------------------------------------------------------------
	// Test 9 - Dangling Pointer
	//--------------------------------------------------------------------------------------

	//int* ptr;				//What is the value of aptr here?
	//cout << *ptr << endl;	//What will be behavior of this statement? Illegal Memory Access
	//cin >> *ptr;			//What is this line doing? Illegal Memory Access

	//--------------------------------------------------------------------------------------
	// Test 10 - Null Pointer
	//--------------------------------------------------------------------------------------
	//Uncomment following piece of code and run. Why does it crash? Which line is creating problem?
	//int* ptr = 0;			//What is the value of aptr here?
	//cout << *ptr << endl;	//What will be behavior of this statement?
	//cin >> *ptr;			//What is this line doing?
	
	}