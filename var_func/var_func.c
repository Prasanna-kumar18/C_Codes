/*
 * var_func.c
 *
 *  Created on: 30-Sep-2022
 *      Author: Prasanna Kumar
 */

#include<stdio.h>
#include<stdarg.h>

int addition(int N, ...)
{
	int loop, result=0;

	va_list va;
	va_start(va, N);

	for(loop=0; loop<N; loop++)
	{
		result += va_arg(va, int);		//result = result + va_arg(va,int)
	}

	return result;

}


int main()
{
	printf("\nThe addition result is %d", addition(2,10,60));
	printf("\nThe addition result is %d", addition(3,20,56,87));
	printf("\nThe addition result is %d", addition(5,20,30,40,50,60));
}



