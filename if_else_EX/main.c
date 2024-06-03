/*
 * main.c
 *
 *  Created on: May 4, 2024
 *      Author: Prasana
 */


#include <stdio.h>

int main()
{
	int val = 0;

	printf("Enter the number: ");
	fflush(stdout);
	scanf("%d",&val);

	if(val > 0)
	{
		printf("Positive Number\n");
	}
	else if(val < 0)
	{
		printf("Negative Number\n");
	}
}
