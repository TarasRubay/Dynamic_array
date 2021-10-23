#include "Header.h"
/////////////////////////////////////////////////////////////
int** creat_arr(int *row, int *col) {
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
void ind_arr(int**arr,int* row, int* col) {
	int max = 5, min = -5;
	cout << "\nenter min num in range: ";
	cin >> min;
	cout << "enter max num in range: ";
	do
	{
		cin >> max;
		if (max <= min)cout << "max too small";
	} while (max<=min);
	
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			*(*(arr + i) + j) = rand()% (max-min+1)+min;

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
	cout <<"\nPrint array"<< endl;
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{

			cout << setw(4)<< *(*(arr + i) + j);
		}
		cout << endl;
	}
}
/////////////////////////////////////////////////////////////
void add_row_last_arr(int **&arr, int* row, int* col) {
	int** pparr = new int* [*row+1];
	for (int i = 0; i < (*row+1); i++)
	{
		if (i < (*row)) {
			pparr[i] = arr[i];
		}
		else {
			pparr[i] = new int[*col];
			for (int j = 0; j < *col; j++) {
				*(*(pparr + i)+j) = i + 1;
			}
		}

	}
	*row += 1;
	delete[] arr;
	arr = pparr;
	pparr = NULL;
	cout << "\nadd new row after last row array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(500);
	}
}
/////////////////////////////////////////////////////////////
void add_row_first_arr(int **&arr, int* row, int* col) {
	int** pparr = new int* [*row + 1];
	
	for (int i = 0; i < (*row + 1); i++)
	{
		if (i == 0) {
			pparr[i] = new int[*col];
			for (int j = 0; j < *col; j++) {
				*(*(pparr + i) + j) = i + 1;
			}
		}
		else {
			pparr[i] = arr[i-1];
			
		}

	}
	*row += 1;
	delete[] arr;
	arr = pparr;
	pparr = NULL;
	cout << "\nadd new row before first row array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(500);
	}
}
/////////////////////////////////////////////////////////////
void add_row_in_arr(int **&arr, int* row, int* col) {
	int a;
	do
	{
		cout << "\nenter number row if you want paste new row. min: 1;  max: "<<*row<<";\n";
		cin >> a;
	} while (a < 1 || a > *row);
	int** pparr = new int* [*row + 1];
	
	int tmp_cout = 0;
	a -= 1;
	for (int i = 0; i < (*row + 1); i++)
	{
		
		if (i == a) {
				pparr[i] = new int[*col];
				for (int j = 0; j < *col; j++) {
					*(*(pparr + i) + j) = i + 1;
				}
			tmp_cout++;
		}
		else {
			pparr[i] = arr[i - tmp_cout];
			
		}

	}
	*row += 1;
	delete[] arr;
	arr = pparr;
	pparr = NULL;
	cout << "\nadd new row in you choice in array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(500);
	}
}
/////////////////////////////////////////////////////////////
void add_more_row_in_arr(int **&arr, int* row, int* col) {
	int a,b;
	do
	{
		cout << "\nenter number row if you want paste new row. min: 1;  max: " << *row << ";\n";
		cin >> a;
	} while (a < 1 || a > * row);
	do
	{
		cout << "\nenter number row if you want paste new row. min: 1\n";
		cin >> b;
	} while (b < 0);
	int** pparr = new int* [*row + b];
	int tmp_cout = 0;
	a -= 1;
	for (int i = 0; i < (*row + b); i++)
	{
		if (i >= a && tmp_cout != b) {
				pparr[i] = new int[*col];
				for (int j = 0; j < *col; j++) {
					*(*(pparr + i) + j) = i + 1;
				}
			tmp_cout++;
		}
		else if(i<=a||i>=(b+a)){
			pparr[i] = arr[i - tmp_cout];
			}
	}
	*row += b;
	delete[] arr;
	arr = pparr;
	pparr = NULL;
	cout << "\nadd new row in you choice in array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(500);
	}
}
/////////////////////////////////////////////////////////////
void delete_row_last_arr(int **&arr, int* row, int* col) {
	int** pparr = new int* [*row -1];
	for (int i = 0; i < *row; i++)
	{
		if (i < (*row-1)) {
			pparr[i] = arr[i];
			}
		
	}
			delete[] arr[*row-1];
			arr[*row-1] = NULL;
	*row -= 1;
	delete[] arr;
	arr = pparr;
	pparr = NULL;
	cout << "\ndelete last row array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(500);
	}
}
/////////////////////////////////////////////////////////////
void delete_row_first_arr(int **&arr, int* row, int* col) {
	int** pparr = new int* [*row - 1];

	for (int i = 0; i < *row ; i++)
	{
		if (i == 0) {
			delete[] arr[i];
			arr[i] = NULL;
		}
		else {
			pparr[i-1] = arr[i];
			}

	}
	*row -= 1;
	delete[] arr;
	arr = pparr;
	pparr = NULL;
	cout << "\ndelete first row array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(500);
	}
}
/////////////////////////////////////////////////////////////
void delete_all_arr(int **&arr, int* row, int* col) {
	cout << "\nadress arr " << &arr;
	for (int i = 0; i < *row; i++)
	{
		cout << "\n\nadress arr[i] " << arr[i];
			delete[] arr[i];
			cout << "\ndelete arr[i] " << arr[i];
			*(arr + i) = NULL;
			cout << "\nNULL arr[i] " << arr[i];
	}
	cout << "\ndelete all  array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(500);
	}
	cout << "\nadress arr " << arr;
	delete[] arr;
	cout << "\ndelete arr " << arr;
	arr = NULL;
	cout << "\nnull arr " << arr;
}
/////////////////////////////////////////////////////////////
void delete_row_in_arr(int**& arr, int* row, int* col, int a) {
	int** pparr = new int* [*row-1];
	a--;
	int tmp = 0;
	for (int i = 0; i < *row; i++)
	{
		if (i == a) {
			delete[] *(arr + i);
			*(arr + i) = NULL;
			tmp++;
		}
		else {
			pparr[i - tmp] = *(arr + i);
		}
	}
	*row-=1;
	delete[] arr;
	arr = pparr;
	pparr = NULL;
	cout << "\ndelete delete row in  array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(500);
	}
}
/////////////////////////////////////////////////////////////
void delete_more_row_in_arr(int**& arr, int* row, int* col, int a, int b) {
	int** pparr = new int* [*row-b];
	a--;
	int tmp = 0;
	for (int i = 0; i < *row; i++)
	{
		if (i >= a && tmp!=b) {
			delete arr[i];
			arr[i] = NULL;
			tmp++;
		}
		else {
			pparr[i-tmp] = arr[i];
		}
	}
	*row -= b;
	delete[] arr;
	arr = pparr;
	pparr = NULL;
	cout << "\ndelete more row in  array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(500);
	}
}
/////////////////////////////////////////////////////////////
void add_new_col_last(int**& arr, int row, int* col) {
	int** pparr = new int* [row];
	for (int i = 0; i < row; i++)
	{
		pparr[i] = new int[*col+1];
		for (int j = 0; j < *col + 1; j++)
		{
			if (j < *col){
				pparr[i][j] = arr[i][j];
			}
			else {
				pparr[i][j] = j + 1;
			}
		}
		delete[] arr[i];
		arr[i] = pparr[i];
		
	}
	*col += 1;
	delete[] arr;
	arr = pparr;
	pparr = NULL;
	cout << "\nadd new col in after last col array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(500);
	}
}
/////////////////////////////////////////////////////////////
void add_new_col_in_arr(int**& arr, int row, int* col, int a) {
	int** pparr = new int* [row];
	int tmp = 0;
	a--;
	for (int i = 0; i < row; i++)
	{
		pparr[i] = new int[*col + 1];
		for (int j = 0; j < *col+1; j++)
		{
			if (j == a) {
				pparr[i][j] = j + 1;
				tmp++;
			}
			else
			{
				pparr[i][j] = arr[i][j-tmp];
			}
		}
		tmp = 0;
		delete[]arr[i];
		arr[i] = pparr[i];
	}
	*col += 1;
	delete[] arr;
	arr = pparr;
	pparr = NULL;
	cout << "\nadd new col in array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(500);
	}
}
/////////////////////////////////////////////////////////////
void add_more_cols_in_arr(int**& arr, int* row, int* col, int a, int b) {
	int** pparr = new int* [*row];
	int tmp = 0;
	a--;
	for (int i = 0; i < *row; i++)
	{
		pparr[i] = new int[*col + b];
		for (int j = 0; j < (*col+b); j++)
		{
			if (j>=a&&tmp!=b)
			{
				*(*(pparr + i) + j) = j+1;
				tmp++;
			}
			else {
				*(*(pparr + i) + j) = *(*(arr + i) + (j-tmp));
			}
		}
		delete[] * (arr + i);
		*(arr + i) = NULL;
		tmp = 0;
	}
	*col += b;
	delete[]arr;
	arr = pparr;
	pparr = NULL;
	cout << "\nadd more new col in array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(500);
	}
}
/////////////////////////////////////////////////////////////
void delete_col_last(int**& arr, int row, int* col) {
	int** pparr = new int* [row];
	for (int i = 0; i < row; i++)
	{
		pparr[i] = new int[*col - 1];
		for (int j = 0; j < *col; j++)
		{
			if (j == (*col - 1)) {
				arr[i][j] = NULL;
			}
			else {
				pparr[i][j] = arr[i][j];
			}
		}
		delete[] arr[i];
		arr[i] = pparr[i];
	}
	*col -= 1;
	delete[] arr;
	arr = pparr;
	pparr = NULL;
	cout << "\ndelete last col in array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(500);
	}
}
/////////////////////////////////////////////////////////////
void delete_col_first(int**& arr, int row, int* col) {
	int** pparr = new int* [row];
	for (int i = 0; i < row; i++)
	{
		pparr[i] = new int[*col - 1];
		for (int j = 0; j < *col; j++)
		{
			if (j > 0) pparr[i][j-1] = arr[i][j];
			
		}
		delete[] arr[i];
		arr[i] = pparr[i];
	}
	*col -= 1;
	delete[] arr;
	arr = pparr;
	pparr = NULL;
	cout << "\ndelete first col in array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(500);
	}
}
/////////////////////////////////////////////////////////////
void delete_col_in_arr(int**& arr, int row, int* col, int a) {
	int** pparr = new int* [row];
	a--;
	int tmp = 0;
	for (int i = 0; i < row; i++)
	{
		pparr[i] = new int[*col - 1];
		for (int j = 0; j < *col; j++)
		{
			if (j == a) {
				arr[i][j] = NULL;
				tmp++;
			}
			else {
				pparr[i][j-tmp] = arr[i][j];
			}
		}
		tmp = 0;
			delete[] arr[i];
			arr[i] = pparr[i];
	}
	*col -= 1;
	delete[] arr;
	arr = pparr;
	pparr = NULL;
	cout << "\ndelete col in array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(200);
	}
}
/////////////////////////////////////////////////////////////
void delete_more_col_in_arr(int**& arr, int* row, int* col, int a, int b) {
	int** pparr = new int* [*row];
	a--;
	int tmp = 0;
	for (int i = 0; i < *row; i++)
	{
		pparr[i] = new int[*col - b];
		for (int j = 0; j < *col; j++)
		{
			if (j >= a && tmp != b) { /////////////////////////////rewiew logic
				arr[i][j] = NULL;
				tmp++;
			}
			else {
				pparr[i][j - tmp] = arr[i][j];
			}
		}
		tmp = 0;
		delete[]arr[i];
		arr[i] = pparr[i];
	}
	*col -= b;
	delete[] arr;
	arr = pparr;
	pparr = NULL;
	cout << "\ndelete more col in array";
	for (int i = 0; i < 3; i++) {
		cout << ".";
		Sleep(200);
	}
}
/////////////////////////////////////////////////////////////
void max_element_row_arr(int** arr, int row, int col) {
	int tmp;
	for (int i = 0; i < row; i++)
	{
		tmp = arr[i][0];
		for (int j = 0; j < col; j++)
		{
			if (tmp < *(*(arr + i) + j))tmp = *(*(arr + i) + j);
			cout << setw(4) << *(*(arr + i) + j);
		}
		cout << "\tmax: " << tmp<<endl;
	}
}
/////////////////////////////////////////////////////////////
void min_element_row_arr(int** arr, int row, int col) {
	int tmp;
	for (int i = 0; i < row; i++)
	{
		tmp = arr[i][0];
		for (int j = 0; j < col; j++)
		{
			if (tmp > *(*(arr + i) + j))tmp = *(*(arr + i) + j);
			cout << setw(4) << *(*(arr + i) + j);
		}
		cout << "\tmin: " << tmp << endl;
	}
}
/////////////////////////////////////////////////////////////
void max_element_all_arr(int** arr, int row, int col) {
	int tmp = arr[0][0];;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (tmp < * (*(arr + i) + j))tmp = *(*(arr + i) + j);
			cout << setw(4) << *(*(arr + i) + j);
		}
		cout <<endl;
	}
	cout << "\tmax in all arr: " << tmp << endl;
}
/////////////////////////////////////////////////////////////
void min_element_all_arr(int** arr, int row, int col) {
	int tmp = arr[0][0];;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (tmp > *(*(arr + i) + j))tmp = *(*(arr + i) + j);
			cout << setw(4) << *(*(arr + i) + j);
		}
		cout << endl;
	}
	cout << "\tmin in all arr: " << tmp << endl;
}
/////////////////////////////////////////////////////////////
void sort_row_in_arr(int**& arr, int row, int* col, int a) {
	int* parr = new int [*col];
	a--;
	int tmp;
	for(int i=0;i< *col;i++)
	        parr[i] = arr[a][i];

	for (int i = 0; i < row; i++) {
		tmp = parr[i];
		for (int j = i; j < *col; j++)
		{
			if (tmp < parr[j]) {
				tmp = parr[j];
				parr[j] = parr[i];
				parr[i] = tmp;
			}
		}
	}
	delete[]arr[a];
	arr[a] = parr;
	parr = NULL;
}
/////////////////////////////////////////////////////////////
void sort_down_row_in_arr(int**& arr, int row, int* col, int a) {
	int* parr = new int[*col];
	a--;
	int tmp;
	for (int i = 0; i < *col; i++)
		parr[i] = arr[a][i];

	for (int i = 0; i < row; i++) {
		tmp = parr[i];
		for (int j = i; j < *col; j++)
		{
			if (tmp > parr[j]) {
				tmp = parr[j];
				parr[j] = parr[i];
				parr[i] = tmp;
			}
		}
	}
	delete[]arr[a];
	arr[a] = parr;
	parr = NULL;
}
/////////////////////////////////////////////////////////////
void sort_all_row_in_arr(int**& arr, int row, int* col) {
	int**pparr = new int*[row];
	int tmp;
	for (int i = 0; i < row; i++) {
		pparr[i] = new int[*col];
		for (int j = 0; j < *col; j++)
		{
		pparr[i][j] = arr[i][j];
		}
		delete[]arr[i];
		arr[i] = NULL;
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < *col; j++)
		{
		tmp = pparr[i][j];
			for (int k = j; k < *col; k++)
			{
			if (tmp < pparr[i][k]) {
				tmp = pparr[i][k];
				pparr[i][k] = pparr[i][j];
				pparr[i][j] = tmp;
			}
			}
		}
	}
	delete[]arr;
	arr = pparr;
	pparr = NULL;
}
/////////////////////////////////////////////////////////////
void sort_all_down_row_in_arr(int**& arr, int row, int* col) {
	int** pparr = new int* [row];
	int tmp;
	for (int i = 0; i < row; i++) {
		pparr[i] = new int[*col];
		for (int j = 0; j < *col; j++)
		{
			pparr[i][j] = arr[i][j];
		}
		delete[]arr[i];
		arr[i] = NULL;
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < *col; j++)
		{
		tmp = pparr[i][j];
			for (int k = j; k < *col; k++)
			{
				if (tmp > pparr[i][k]) {
					tmp = pparr[i][k];
					pparr[i][k] = pparr[i][j];
					pparr[i][j] = tmp;
				}
			}
		}
	}
	delete[]arr;
	arr = pparr;
	pparr = NULL;
}
/////////////////////////////////////////////////////////////
void deploy_row_in_arr(int**& arr, int row, int col) {
	int** pparr = new int* [row];
	int tmp;
	for (int i = 0; i < row; i++) {
		pparr[i] = new int[col];
		for (int j = 0; j < col; j++)
		{
			pparr[i][j] = arr[i][j];
		}
		delete[]arr[i];
		arr[i] = NULL;
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0,k=col-1; j <= col/2,k>=col/2; j++,k--)
		{
					tmp = pparr[i][k];
					pparr[i][k] = pparr[i][j];
					pparr[i][j] = tmp;	
		}
	}
	delete[]arr;
	arr = pparr;
	pparr = NULL;
}
void deploy_col_in_arr(int**& arr, int row, int col) {
	int** pparr = new int* [row];
	int tmp;
	for (int i = 0; i < row; i++) {
		pparr[i] = new int[col];
		for (int j = 0; j < col; j++)
		{
			pparr[i][j] = arr[i][j];
		}
		delete[]arr[i];
		arr[i] = NULL;
	}

	for (int i = 0; i < col; i++) {
		for (int j = 0, k = row - 1; j <= row / 2, k >= row / 2; j++, k--)
		{
			tmp = pparr[k][i];
			pparr[k][i] = pparr[j][i];
			pparr[j][i] = tmp;
		}
	}
	delete[]arr;
	arr = pparr;
	pparr = NULL;
}
/////////////////////////////////////////////////////////////
void transporation_arr(int**& arr, int *row, int *col) {
	int** pparr = new int* [*col];
	
	for (int i = 0; i < *col; i++)
	{
		pparr[i] = new int[*row];
	}
	
	for (int i = 0; i < *row; i++) {
	
		for (int j = 0; j < *col; j++)
		{
			pparr[j][i] = arr[i][j];
		}
		delete[]arr[i];
		arr[i] = NULL;
	}

	int tmp = *col;
	*col = *row;
	*row = tmp;
	delete[]arr;
	arr = pparr;
	pparr = NULL;
}
/////////////////////////////////////////////////////////////
void shift_right_arr(int**& arr, int* row, int* col, int a) {
	int** pparr = new int* [*row];
	int tmp;
	for (int i = 0; i < *row; i++)
	{
		pparr[i] = new int[*col];
		for (int j = 0; j < *col; j++)
		{
			pparr[i][j] = arr[i][j];
		}
		delete[]arr[i];
		arr[i] = NULL;
	}
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < a; j++)
		{
			for (int k = *col-1; k > 0; k--)
			{
				tmp = pparr[i][k];
				pparr[i][k] = pparr[i][k-1];
				pparr[i][k - 1] = tmp;
			}	
		}
	}
	delete[]arr;
	arr = pparr;
	pparr = NULL;
}
/////////////////////////////////////////////////////////////
void shift_left_arr(int**& arr, int* row, int* col, int a) {
	int** pparr = new int* [*row];
	int tmp;
	for (int i = 0; i < *row; i++)
	{
		pparr[i] = new int[*col];
		for (int j = 0; j < *col; j++)
		{
			pparr[i][j] = arr[i][j];
		}
		delete[]arr[i];
		arr[i] = NULL;
	}
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < a; j++)
		{
			for (int k = 0; k < *col - 1; k++)
			{
				tmp = pparr[i][k];
				pparr[i][k] = pparr[i][k + 1];
				pparr[i][k + 1] = tmp;
			}
		}
	}
	delete[]arr;
	arr = pparr;
	pparr = NULL;
}
/////////////////////////////////////////////////////////////
void shift_up_arr(int**& arr, int* row, int* col, int a) {
	int** pparr = new int* [*row];
	int tmp;
	for (int i = 0; i < *row; i++)
	{
		pparr[i] = new int[*col];
		for (int j = 0; j < *col; j++)
		{
			pparr[i][j] = arr[i][j];
		}
		delete[]arr[i];
		arr[i] = NULL;
	}
	for (int i = 0; i < *col; i++)
	{
		for (int j = 0; j < a; j++)
		{
			for (int k = 0; k < *row - 1; k++)
			{
				tmp = pparr[k][i];
				pparr[k][i] = pparr[k + 1][i];
				pparr[k + 1][i] = tmp;
			}
		}
	}
	delete[]arr;
	arr = pparr;
	pparr = NULL;
}
/////////////////////////////////////////////////////////////
void shift_down_arr(int**& arr, int* row, int* col, int a) {
	int** pparr = new int* [*row];
	int tmp;
	for (int i = 0; i < *row; i++)
	{
		pparr[i] = new int[*col];
		for (int j = 0; j < *col; j++)
		{
			pparr[i][j] = arr[i][j];
		}
		delete[]arr[i];
		arr[i] = NULL;
	}
	for (int i = 0; i < *col; i++)
	{
		for (int j = 0; j < a; j++)
		{
			for (int k = *row - 1; k > 0; k--)
			{
				tmp = pparr[k][i];
				pparr[k][i] = pparr[k - 1][i];
				pparr[k - 1][i] = tmp;
			}
		}
	}
	delete[]arr;
	arr = pparr;
	pparr = NULL;
}
/////////////////////////////////////////////////////////////
