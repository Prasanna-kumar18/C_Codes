/*
 * mem_call.c
 *
 *  Created on: 11-Oct-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;
	int sum=0;

	ptr = calloc(5, sizeof(int));

	if(ptr == NULL)
	{
		printf("The memory is not allocated");
	}
	else
	{

		for(int i=0; i<10;i++)
		{
			*(ptr+i) = i;
			sum += *(ptr+i);
		}

		printf("\nThe sum of n numbers is %d",sum);
	}

	free(ptr);
}

