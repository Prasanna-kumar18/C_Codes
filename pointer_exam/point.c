/*
 * point.c
 *
 *  Created on: 27-Sep-2022
 *      Author: Prasanna Kumar



#include<stdio.h>

void swap(int, int);			//Function Declaration

int main()
{
	int a =10, b=20;
	swap(a,b);			//Call by value.
	printf("\nThe value of a %d and b %d",a,b);
}

void swap(int x, int y)			//Function Definition
{
	int temp;

	temp = x;

	x = y;

	y = temp;

	printf("\nThe swapped number is %d and %d", x,y);

}

 */

//Call by Reference

#include<stdio.h>

void swap(int *, int *);			//Function Declaration

int main()
{
	int a =10, b=20;
	swap(&a,&b);			//Call by Reference.

	printf("\nThe value of a %d and b %d",a,b);

}

void swap(int *x, int *y)			//Function Definition
{
	int temp;

	temp = *x;

	*x = *y;

	*y = temp;

	printf("\nThe swapped number is %d and %d", *x,*y);

}



