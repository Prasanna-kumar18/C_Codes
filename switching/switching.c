/*
 * switching.c
 *
 *  Created on: 23-Sep-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>

int main()
{
	int a;


	printf("\nEnter the number from 1-5");
	fflush(stdout);
	scanf("%d",&a);

	switch(a)
	{
	case 1:
			printf("The value is 1");
			//goto start;
			//break;
	case 2:
			printf("The value is 2");
			//goto start;
			//break;
	case 3:
			printf("The value is 3");
			//goto start;
			//break;
	case 4:
			printf("The value is 4");
			//goto start;
			//break;
	case 5:
			printf("The value is 5");
			//goto start;
			//break;
	default:
			printf("Give value between 1-5");
			break;
	}

}

