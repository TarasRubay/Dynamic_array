#include<iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void main() {
	int row, col;
	cout << "enter row: ";
	cin >> row;
	cout << "enter col: ";
	cin >> col;
	int** arr = new int* [row];
	for (int i = 0; i < row; i++)
	{
		*(arr + i) = new int[col];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			*(*(arr + i) + j) = rand() % 2 - 1;
		}
	}
	/*for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << setw(4)<< *(*(arr + i) + j);
		}
		cout << endl;
	}*/
	int* ar_z = new int[row];
	for (int i = 0; i < row; i++)
	{
		int tmp = 0;
		for (int j = 0; j < col; j++)
		{
			if (*(*(arr + i) + j) != 0)tmp++;
		}
		*(ar_z + i) = tmp;
	}
	
		
	int* ptmp;
	for (int i = 0; i < row; i++)
	{
		if (*(ar_z + i) != 0)ptmp = new int[*(ar_z + i)];
		else ptmp = new int[col];
		int tmp = 0;
		for (int j = 0; j < col; j++)
		{
			if (*(*(arr + i) + j) != 0) {
				*(ptmp + tmp) = *(*(arr + i) + j);
				tmp++;
			}
		}
		delete[] * (arr + i);
		*(arr + i) = ptmp;
		ptmp = NULL;

	}
	/*for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < *(ar_z+i); j++)
		{
			cout << setw(4) << *(*(arr + i) + j);
		}
		cout << endl;
	}*/
	delete[] ar_z;
	ar_z = NULL;
	for (int i = 0; i < row; i++)
			delete[] *(arr + i); 
	delete arr;
	arr = NULL;
}
