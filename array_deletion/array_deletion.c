/*
 * array_Deletion.c
 *
 *  Created on: 14-Oct-2022
 *      Author: Prasanna Kumar
 */


//Array Deletion

#include<stdio.h>

int main()
{
	int elements[20], pos, i, n;
	printf("Enter the number of elements in array");
	fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&elements[i]);
	}
	printf("\nEnter the position where the element to be Deleted");
	fflush(stdout);
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++)
		{
			elements[i] = elements[i+1];
		}
	printf("The elements of array after Deletion is :");
	fflush(stdout);
	for(i=0;i<n-1;i++)
	{
		printf("\n%d",elements[i]);
	}
}


