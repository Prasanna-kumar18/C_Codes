/*
 * arr_ptr.c
 *
 *  Created on: Sep 29, 2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>	//preprocessor

int main()
{
	int c[] ={4,6,7,3,2,2,9};
	int i;
	int *ptr;

	ptr = &c;

	for(i=0; i<7; i++)
		{
			printf("\nThe before value of element %d is %d",i,*(ptr+i));
		}


	*(ptr+4) = 5;


	for(i=0; i<7; i++)
	{
		printf("\nThe After value of element %d is %d",i,c[i]);
	}

}


