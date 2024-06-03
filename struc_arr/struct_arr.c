/*
 * struct_arr.c
 *
 *  Created on: 06-Oct-2022
 *      Author: Prasanna Kumar
 */

#include<stdio.h>

typedef struct
{
	int x;			//Members of structure
	float y;
	char z;
}marks;

int main()
{
	marks a[2];		//Array of structure

	a[0].x = 10;
	a[0].y = 3.568;
	a[1].z = 'g';

	printf("The value of first array of x is %d",a[0].x);
	printf("\nThe value of first array of y is %f",a[0].y);
	printf("\nThe value of second array is %c",a[1].z);
}
