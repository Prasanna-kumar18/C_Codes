/*
 * array_search.c
 *
 *  Created on: 14-Oct-2022
 *      Author: Prasanna Kumar
 */

#include<stdio.h>

int main()
{
	int elements[20],i, n, value,flag=0;
	printf("Enter the number of elements in array");
	fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&elements[i]);
	}
	printf("\nEnter the number to be searched");
	fflush(stdout);
	scanf("%d",&value);

	for(i=0;i<n;i++)
	{
		if(elements[i] == value)
			flag=1;
	}
	if(flag)
		printf("The value is found");
	else
		printf("The value is not found");
}
