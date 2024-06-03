/*
 * inline_func.c
 *
 *  Created on: 07-Oct-2022
 *      Author: Prasanna Kumar
 */

#include<stdio.h>

static inline int adittion(int a, int b)
{
	return a+b;
}

int main()
{
	printf("The addition of two numbers is %d", adittion(10,6));
}
