#include "Header.h"
void main() {
	int row = 0, col = 0;
	int a,b;
	cout << "Creation two dementional array\nEnter row: ";
	do
	{
		cin >> row;
		if(row < 0)cout << "enter positive number";
	} while (row<0);
	cout << "Enter col: ";
	do
	{
		cin >> col;
		if (col < 0)cout << "enter positive number";
	} while (col < 0);
	int **arr = creat_arr(&row,&col);
	ind_arr(arr,&row, &col);
	print_arr(arr, &row, &col);
	add_row_last_arr(arr, &row, &col);
	print_arr(arr, &row, &col);
	add_row_first_arr(arr, &row, &col);
	print_arr(arr, &row, &col);
	add_row_in_arr(arr, &row, &col);
	print_arr(arr, &row, &col);
	add_more_row_in_arr(arr, &row, &col);
	print_arr(arr, &row, &col);
	delete_row_last_arr(arr, &row, &col);
	print_arr(arr, &row, &col);
	delete_row_first_arr(arr, &row, &col);
	print_arr(arr, &row, &col);
	cout << "\nadress arr main " << &arr;
	delete_all_arr(arr, &row, &col);
	cout << "\nadress arr after funct delete in Main "<<arr;

	cout << "\nCreation two dementional array\nEnter row: ";
	do
	{
		cin >> row;
		if (row < 0)cout << "enter positive number";
	} while (row < 0);
	cout << "Enter col: ";
	do
	{
		cin >> col;
		if (col < 0)cout << "enter positive number";
	} while (col < 0);
	/// <summary>
	arr = creat_arr(&row, &col);
	/// </summary>
	ind_arr(arr, &row, &col);
	print_arr(arr, &row, &col);
	cout << "enter num row do you want delete min - 1; max - "<<row<<endl;
	do
	{
		cin >> a;
	} while (a<1&&a>row);
	delete_row_in_arr(arr, &row, &col,a);
	print_arr(arr, &row, &col);
	do
	{
		cout << "enter position row if you want start delete min 1; max "<<row<<" ";
		cin >> a;
	} while (a<1 && a>row);
	do
	{
		cout << "enter size row if you want delete min 1; max " << row-a+1 << " ";
		cin >> b;
	} while (b<1 && b>(row-a+1));
	delete_more_row_in_arr(arr, &row, &col, a,b);
	print_arr(arr, &row, &col);
	add_new_col_last(arr, row, &col);
	print_arr(arr, &row, &col);
	cout << "enter num col do you want paste new col min - 1; max - " << col << endl;
	do
	{
		cin >> a;
	} while (a<1 && a>col);

	add_new_col_in_arr(arr, row, &col,a);
	print_arr(arr, &row, &col);

	do
	{
		cout << "enter position col if you want start paste new cols. min 1; max " << col << " ";
		cin >> a;
	} while (a<1 && a>col);
	do
	{
		cout << "enter size cols if you want paste. min 1; ";
		cin >> b;
	} while (b<1);
	add_more_cols_in_arr(arr, &row, &col, a, b);
	print_arr(arr, &row, &col);
	delete_col_last(arr, row, &col);
	print_arr(arr, &row, &col);
	delete_col_first(arr, row, &col);
	print_arr(arr, &row, &col);
	cout << "enter num col do you want delete col; min - 1; max - " << col << endl;
	do
	{
		cin >> a;
	} while (a<1 && a>col);
	delete_col_in_arr(arr, row, &col, a);
	print_arr(arr, &row, &col);
	do
	{
		cout << "enter position col if you want start delete min 1; max " << col << " ";
		cin >> a;
	} while (a<1 && a>col);
	do
	{
		cout << "enter size col if you want delete min 1; max " << col - a+1 << " ";
		cin >> b;
	} while (b<1 && b>(col - a+1));
	delete_more_col_in_arr(arr, &row, &col, a, b);//  rewiev logic!!!!!!!!!!
	print_arr(arr, &row, &col);
	cout << "\nmax element in row\n";
	max_element_row_arr(arr, row, col);
	cout << "\nmin element in row\n";
	min_element_row_arr(arr, row, col);
	cout << "\nmax element in all array\n";
	max_element_all_arr(arr, row, col);
	cout << "\nmin element in all array\n";
	min_element_all_arr(arr, row, col);
	cout << "enter num row do you want sort up; min - 1; max - " << row << endl;
	do
	{
		cin >> a;
	} while (a<1 && a>row);
	sort_row_in_arr(arr, row, &col, a);
	print_arr(arr, &row, &col);
	cout << "enter num row do you want sort down; min - 1; max - " << row << endl;
	do
	{
		cin >> a;
	} while (a<1 && a>row);
	sort_down_row_in_arr(arr, row, &col, a);
	print_arr(arr, &row, &col);
	cout << "sort up all array"<< endl;
	sort_all_row_in_arr(arr, row, &col);
	print_arr(arr, &row, &col);
	cout << "sort down all array" << endl;
	sort_all_down_row_in_arr(arr, row, &col);
	print_arr(arr, &row, &col);
	cout << "\ndeploy all rows array";
	deploy_row_in_arr(arr, row, col);
	print_arr(arr, &row, &col);
	cout << "\ndeploy all cols array";
	deploy_col_in_arr(arr, row, col);
	print_arr(arr, &row, &col);
	cout << "\ntransporation array";
	transporation_arr(arr, &row, &col);
	print_arr(arr, &row, &col);
	cout << "enter num shift to the right; min - 1; max - " << col << endl;
	do
	{
		cin >> a;
	} while (a<1 && a>col);
	shift_right_arr(arr, &row, &col, a);
	print_arr(arr, &row, &col);
	cout << "enter num shift to the left; min - 1; max - " << col << endl;
	do
	{
		cin >> a;
	} while (a<1 && a>col);
	shift_left_arr(arr, &row, &col, a);
	print_arr(arr, &row, &col);
	cout << "enter num shift to the up; min - 1; max - " << col << endl;
	do
	{
		cin >> a;
	} while (a<1 && a>col);
	shift_up_arr(arr, &row, &col, a);
	print_arr(arr, &row, &col);
	cout << "enter num shift to the down; min - 1; max - " << col << endl;
	do
	{
		cin >> a;
	} while (a<1 && a>col);
	shift_down_arr(arr, &row, &col, a);
	print_arr(arr, &row, &col);
}