/*
 * arr_func_ptr.c
 *
 *  Created on: 30-Sep-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>

int sum(int num1, int num2);		//Function Declaration
int sub(int num1, int num2);
int divis(int num1, int num2);
int mul(int num1, int num2);

int main()
{
	int a, b, choice, result;

	int (*operation[4])(int, int);		//Function pointer Array

		operation[0] = sum;
		operation[1] = sub;
		operation[2] = divis;
		operation[3] = mul;

	printf("\nEnter the two numbers");
	//fflush(stdout);
	scanf("%d%d",&a,&b);
	printf("\nEnter your choice \n0-Addition\n1-Subtraction\n2-Division\n3-Multiplication");
	//fflush(stdout);
	scanf("%d",&choice);

	result = operation[choice](a,b);		//Function Calling

	printf("\nThe result is %d", result);
	//fflush(stdout);
}

int sum(int x, int y)
{
	return(x+y);
}

int sub(int x, int y)
{
	return(x-y);
}

int divis(int x, int y)
{
	return(x/y);
}

int mul(int x, int y)
{
	return(x*y);
}
