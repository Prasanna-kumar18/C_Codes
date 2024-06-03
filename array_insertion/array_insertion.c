/*
 * array_insertion.c
 *
 *  Created on: 14-Oct-2022
 *      Author: Prasanna Kumar
 */


//Array Insertion

#include<stdio.h>

int main()
{
	int elements[20], pos, i, n, value;
	printf("Enter the number of elements in array");
	//fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&elements[i]);
	}
	printf("\nEnter the position where the new element to be added");
	//fflush(stdout);
	scanf("%d",&pos);
	printf("\nEnter the new value to be added");
	//fflush(stdout);
	scanf("%d",&value);
	for(i=n-1;i>=pos-1;i--)
		{
			elements[i+1] = elements[i];
		}
	elements[pos-1] = value;
	printf("The elements of array after insertion is :");
	//fflush(stdout);
	for(i=0;i<=n;i++)
	{
		printf("\n%d",elements[i]);
	}
}

