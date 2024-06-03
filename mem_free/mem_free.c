/*
 * mem_free.c
 *
 *  Created on: 11-Oct-2022
 *      Author: Prasanna Kumar
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;

	while(ptr != NULL)
	{
		ptr=malloc(10000 * sizeof(int));
		printf("The address of allocated memory is %p",ptr);
	}
	return 0;
}


