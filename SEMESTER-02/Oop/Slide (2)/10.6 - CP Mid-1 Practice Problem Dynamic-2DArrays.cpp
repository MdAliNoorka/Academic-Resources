#include<iostream>
using namespace std;

void print_twodim(int ** arr, int row, int col);
/*int main(){

	int row = 5, col = 5;

	int ** arr = new int*[row];
	for (int i = 0; i < row; i++)
		arr[i] = new int[col];

	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			arr[i][j] = rand() % 50;
		}
	}
	print_twodim(arr, row, col);

	cout << "arr \t" << arr << "\t *arr \t" << *arr << "\t **arr \t" << **arr <<endl;
	cout << "*arr+1 \t" << *arr+1 << "\t *(arr+1) \t" << *(arr+1) << "\t arr[1] \t" << arr[1] <<endl;
	cout << "*(*(arr+1)) \t" << *(*(arr + 1)) << "\t *arr[1] \t" << *arr[1] << "\t arr[1][0] \t" << arr[1][0] << endl;
	cout << "*(arr[3] + 3) \t" << *(arr[3] + 3) << " (*(arr+ 3))[3] \t" << (*(arr + 3))[3] << endl;
	cout << "*(arr[3] + 4) \t" << *(arr[3] + 4) << " (*(arr+ 4))[3] \t" << (*(arr + 4))[3] << endl;
	cout << "*(*(arr + 4)+2)\t" << *(*(arr + 4) + 2) << " (**(arr+ 4))+2 \t" << (**(arr + 4)) + 2 << endl;
	cout << "arr[4][2]\t" << arr[4][2] << " arr[4][0] + 2 \t" << arr[4][0] + 2 << endl;
	system("PAUSE");
	return 0;
}
*/
void print_twodim(int ** arr, int row, int col)
{
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			cout << "\t" << arr[i][j] << "\t";
		}
		cout << endl << endl;
	}
}