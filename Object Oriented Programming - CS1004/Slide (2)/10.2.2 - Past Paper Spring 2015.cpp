#include<iostream>
#include<string>
using namespace std;

//Part b
void main()
{
	char * n = "Ali";
	char * m = new char[20];
	int i = 0;
	for (; n[i] != '\0'; i++)
		m[i] = n[i];
	m[i] = '\0';
	char * temp = n; n = m; m = temp;
	cout<<m<<endl;
	cout<<n<<endl;
	delete[] m;
	m = nullptr;
}

//Part c
//void main()
//{
//	int * n = new int[10];
//	*n = 0;
//	for (int i = 0; i<10; i++) {
//		*(n + i) = *(n);
//	}
//	delete n;
//	n = nullptr;
//}

//Part d
//void alloc(int *a, int size) {
//	a = new int[size];
//}
//int main(){
//	int * arr;
//	alloc(arr, 10);
//	arr[0] = 10;
//	delete[]arr;
//	arr = nullptr;
//}

//Part e
//int * cube(int * a) {
//	int s = *a**a**a;
//	return &s;
//}
//int main(){
//	int i = 10;
//	int j = *cube(&i);
//	cout << j << endl;
//}

//Part f
//void main()
//{
//	int meaning = 42;
//	int *life = &meaning;
//	int **universe = &life;
//	int ***everything = &universe;
//	cout << ***everything << endl;
//	delete life;
//	life = nullptr;
//	universe = nullptr;
//	everything = nullptr;
//}