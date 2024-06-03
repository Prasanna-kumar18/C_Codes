/*
 * arr_func.c
 *
 *  Created on: Sep 29, 2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>	//preprocessor

void display(int *);

int main()
{
	int c[] ={4,6,7,3,2,2,9};
	int i;
	for(i=0;i<7;i++)
	{
		display(&c[i]);			//Call by reference
	}
}

void display(int *x)
{
	printf("\nThe value of array is %d",*x);
}
