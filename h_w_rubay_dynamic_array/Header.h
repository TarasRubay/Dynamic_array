#pragma once
#include<iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>
using namespace std;
int** creat_arr(int *row,int *col);
void ind_arr(int **arr,int *row,int *col);
void print_arr(int **arr,int *row,int *col);	
void add_row_last_arr(int **&arr,int *row,int *col);
void add_row_first_arr(int **&arr,int *row,int *col);
void add_row_in_arr(int **&arr,int *row,int *col);
void add_more_row_in_arr(int **&arr,int *row,int *col);
void delete_row_last_arr(int **&arr, int* row, int* col);
void delete_row_first_arr(int **&arr, int* row, int* col);
void delete_all_arr(int **&arr, int* row, int* col);
void delete_row_in_arr(int **&arr,int *row,int *col,int a);
void delete_more_row_in_arr(int **&arr, int* row,int *col,int a,int b);
void add_new_col_last(int**&arr,int row,int*col);
void add_new_col_in_arr(int**&arr,int row,int*col,int a);
void add_more_cols_in_arr(int**& arr, int* row, int* col, int a, int b);
void delete_col_last(int**& arr, int row, int* col);
void delete_col_first(int**& arr, int row, int* col);
void delete_col_in_arr(int**& arr, int row, int* col, int a);
void delete_more_col_in_arr(int**& arr, int* row, int* col, int a, int b);
void max_element_row_arr(int**arr,int row,int col);
void min_element_row_arr(int**arr,int row,int col);
void max_element_all_arr(int**arr,int row,int col);
void min_element_all_arr(int**arr,int row,int col);
void sort_row_in_arr(int**& arr, int row, int* col, int a);
void sort_down_row_in_arr(int**& arr, int row, int* col, int a);
void sort_all_row_in_arr(int**& arr, int row, int* col);
void sort_all_down_row_in_arr(int**& arr, int row, int* col);
void deploy_row_in_arr(int**& arr, int row, int col);
void deploy_col_in_arr(int**& arr, int row, int col);
void transporation_arr(int**& arr, int* row, int* col);
void shift_right_arr(int**&arr,int *row,int *col,int a);
void shift_left_arr(int**&arr,int *row,int *col,int a);
void shift_up_arr(int**&arr,int *row,int *col,int a);
void shift_down_arr(int**&arr,int *row,int *col,int a);