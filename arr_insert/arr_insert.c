/*
 * arr_insert.c
 *
 *  Created on: 13-Oct-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>

int main()
{
	int list[] = {1,5,6,7,3};
	int i,n=4;
	int data=10, k=2;
	int j=n;

	printf("The original elements in arrays are");
	for(i=0;i<=n;i++)
	{
		printf("\nList[%d] = %d",i,list[i]);
	}
	n=n+1;

	while(j>=k)
	{
		list[j+1] = list[j];
		j = j-1;
	}

	list[k] = data;

	printf("\n\nThe elements in arrays after insertion are");
		for(i=0;i<=n;i++)
		{
			printf("\nList[%d] = %d",i,list[i]);
		}
}

