#include<iostream>
using namespace std;

void main()
{
	int a[10] = {10};
	cout << "int Array a =\t" << a << endl;	//What does this line print?
	//How can we print data?
	for (int i = 0; i < 10; i++)
		cout << a[i] << endl;

	// This is a character array
	char charArray[] = { 'H', 'e', 'l', 'l', 'o' };

	cout << "char array:\t" << charArray << endl << endl;	//printing characters until it finds first '\0'
	

	// Following is a c-string i.e. a character array terminated by null character.
	// All c-strings end with '\0'.
	char myString[] = { 'H', 'e', 'l', 'l', 'o', '\0' };

	//PRINTING CSTRING
	cout << "myString:\t" << myString << endl << endl;		//Memory Configuration ????

	cout << "Lenght of myString:\t" << strlen(myString) << endl;		// strlen is built-in function. It takes a c-string and returns its lenght.

	// What is the difference between a char array and a c-string?
	// Never forget to append '\0' at the end of a c-string. And to keep space for the null character.

	// Another way to initialize c-string.
	char myString2[] = "Hello";	//Allocating space of 6 characters in memory. One extra cell to save '\0'
	cout << "\n\n\nmyString 2:\t" << myString2 << endl << endl;
	cout << "Lenght of myString 2:\t" << strlen(myString2) << endl;
	

	// Another way to initialize c-string.
	char myString3[10] = "Hello";	//Space allocated for 10 characters. Rest of the space will be initialized to default value null character.
	cout << "\n\n\nmyString 3:\t" << myString3 << endl << endl;
	cout << "Lenght of myString 3:\t" << strlen(myString3) << endl;
	// Memory allocated to myString3 is 10. but as null character ('\0') is 6th character in it so string lenght is 5.
	
	cout << "\n\n\nCheck what is in our reserved memory as myString3:\t";
	for (int i = 0; i < 10; i++)
		cout << myString3[i]<<endl;
	cout << endl;
	cout<<"End of printing.\n";
	//UPDATE CSTRING
	myString3[0] = 'a';
	myString3[1] = 'a';
	
	cout << "myString3 after modification:\t" << myString3 << endl << endl;



	
	//TAKING CSTRING INPUT FROM USER
	cout << "Enter elements in A:\t";
	//cin>>a;		//This is illegal statement for int array. We need to input elements one by one.
	cout << endl;
	

	cout << "Enter a string:\t";
	cin >> myString3;


	cout << "String Entered is:\t" << myString3 << endl;



	cout << "Traverse the characters of the array:\n";
	int i = 0;
	while (myString3[i] != '\0')		// Do we need MAXSIZE to process C-Strings???? We know where our string ends i.e. '\0'.
	{
		cout << "\t" << myString3[i] << endl;
		i++;
	}
	cout << endl;


	char sentence[80];
	cout << "Enter a sentence:\n";
	cin.ignore();
	cin.getline(sentence,80);

	cout << "\n\n\nUser entered sentence:\n";
	cout << sentence << endl << endl;

	char tokens[3][20];
	cout<<"Enter 3 Words:\n";
	for(int i=0; i<3 ; i++)
		cin>>tokens[i];

	cout<<"\n\n3 Words entered:\n";
	for(int i=0; i<3 ; i++){
		cout<<(tokens+i)<<endl;
		cout<<*(tokens+i)<<endl; //tokens[i]
		cout<<**(tokens+i)<<endl;
	}
	
}