#include<iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>
using namespace std;
int** creat_arr(int* row, int* col) {
	int** arr = new int* [*row];
	for (int i = 0; i < *row; i++)*(arr + i) = new int[*col];
	cout << "\ncreating array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(500);
	}
	return arr;
}
/////////////////////////////////////////////////////////////
void ind_arr(int** arr, int* row, int* col) {
	int max = 5, min = -5;
	cout << "\nenter min num in range: ";
	cin >> min;
	cout << "enter max num in range: ";
	do
	{
		cin >> max;
		if (max <= min)cout << "max too small";
	} while (max <= min);

	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			*(*(arr + i) + j) = rand() % (max - min) - max;

		}
	}
	cout << "\nindetefication array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(500);
	}
}
/////////////////////////////////////////////////////////////
void print_arr(int** arr, int* row, int* col) {
	cout << "\nPrint array" << endl;
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{

			cout << setw(4) << *(*(arr + i) + j);
		}
		cout << endl;
	}
}

void add_row_last_arr(int **&arr, int* row, int* col) {
	cout << "\naddr arr in func" << arr;
	int** pparr = new int* [*row + 1];
	for (int i = 0; i < (*row + 1); i++)
	{
		if (i < (*row)) {
			pparr[i] = arr[i];
			cout << "\naddr **arr     " << arr[i];
			delete[] arr[i];
			arr[i] = NULL;
			cout << "\naddr **arr del " << arr[i];
		}
		else {
			pparr[i] = new int[*col];
			for (int j = 0; j < *col; j++) {
				*(*(pparr + i) + j) = i + 1;
			}
		}

	}
	*row += 1;
	cout << "\naddr arr in func       " << arr;
	delete[] arr;
	cout << "\naddr arr in func del   " << arr;
	arr = pparr;
	
	cout << "\naddr arr in func pparr " << pparr;
	delete[] pparr;
	pparr = NULL;
	cout << "\naddr pparr in func del " << pparr;
	cout << "\nadd new row after last row array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(500);
	}


}

void main() {
	int row = 5, col = 5;
	int** arr = creat_arr(&row, &col);
	ind_arr(arr, &row, &col);
	print_arr(arr, &row, &col);
	cout << "addr arr in main " << arr;
	add_row_last_arr(arr, &row, &col);
	cout << "\naddr arr in main after func " << arr;
}