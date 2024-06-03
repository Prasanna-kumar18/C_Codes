/*
 * hello.c
 *
 *  Created on: 20-Sep-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>

int main()
{
	int charcount, var;	//initialization of variable
	int counting;

	printf("Enter the number");
	fflush(stdout);
	counting = scanf("%d%d",&charcount, &var);
	printf("\nThe entered value is %d",charcount);
	printf("\nThe scanf count is %d",counting);
	fflush(stdout);

}
