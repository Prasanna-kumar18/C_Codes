/*
 * arr_arr.c
 *
 *  Created on: 30-Sep-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>

int main()
{
	int arr1[] = {1,5,7,9};			//Array declaration
	int arr2[] = {3,1,8};
	int arr3[] = {9,8,2,4};

	int *arr_arr[3]; 		//Array pointer, Pointer variable

	arr_arr[0] = arr1;				//Assigning the value of one array to another array
	arr_arr[1] = arr2;
	arr_arr[2] = arr3;


	printf("\n\nContent of arr_arr[0] is %d ",*(arr_arr[0]+2));
	printf("\nContent of arr_arr[1] is %d ",*(arr_arr[1]));
	printf("\nContent of arr_arr[2] is %d ",*(++arr_arr[2]));


}

