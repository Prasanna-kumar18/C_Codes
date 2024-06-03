/*
 * power_two.c
 *
 *  Created on: 10-Jul-2023
 *      Author: Prasanna Kumar
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int num, pow,flag;
	printf("Enter the number\n");
	fflush(stdout);
	scanf("%d",&num);
	int temp =num;
	printf("Enter the power to check\n");
	fflush(stdout);
	scanf("%d",&pow);

	if(num<=0)
	{
		flag=0;
	}

	//check the power

	while(num % pow == 0)
	{
		num/=pow;	//num = num/pow
	}

	if(num==1)
	{
		flag=1;
	}

	if(flag)
	{
		printf("The %d is power of %d",temp,pow);
	}
	else
	{
		printf("The %d is not power of %d",temp,pow);
	}
}
