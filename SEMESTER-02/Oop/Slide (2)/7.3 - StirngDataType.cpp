#include<iostream>
#include<string>
using namespace std;

void main()
{
	string fullname;
	string address;
	string phoneNumber;

	cout<<"Enter Full Name:\t";
	getline(cin, fullname);

	cout<<"Enter Address:\t";
	getline(cin, address);

	cout<<"Enter Telephone Number:\t";
	//cin>>phoneNumber;
	getline(cin, phoneNumber);

	cout<<"\n\n\nContact Information:\n";
	cout<<fullname<<endl;
	cout<<address<<endl;
	cout<<phoneNumber<<endl<<endl;

}