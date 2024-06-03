/*
 * array_update.c
 *
 *  Created on: 14-Oct-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>

int main()
{
	int elements[20], pos, i, n, value;
	printf("Enter the number of elements in array");
	fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&elements[i]);
	}
	printf("\nEnter the position where the new element to be updated");
	fflush(stdout);
	scanf("%d",&pos);
	printf("\nEnter the new value to be updated");
	fflush(stdout);
	scanf("%d",&value);

	elements[pos-1] = value;

	printf("The elements of array after insertion is :");
	fflush(stdout);
	for(i=0;i<n;i++)
	{
		printf("\n%d",elements[i]);
	}

}
