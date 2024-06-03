/*
 * mem_mall.c
 *
 *  Created on: 11-Oct-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;

	ptr = malloc(6 * sizeof(*ptr));

	if(ptr != NULL)
	{
		*(ptr+5) = 100;
		printf("\nThe size of ptr is %d",sizeof(ptr));
		printf("The value of 5th address of pointer is %d",*(ptr+5));
	}
}


