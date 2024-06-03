/*
 * condition.c
 *
 *  Created on: 23-Sep-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>

int main()
{
	int a,b,c;

	printf("Enter the value for a b and c");
	fflush(stdout);
	scanf("%d%d%d",&a,&b,&c);

	if(a>b) //20>15
	{
		if(a>c) //25>20
		{
			printf("A is greater");
		}
		else
		{
			printf("c is greater");
		}
	}
	else if(b>c) //30>50
	{
		printf("B is Greater");
	}
	else
	{
		printf("C is greater");
	}
}

