/*
 * main.c
 *
 *  Created on: 12-Oct-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>
#include "add.h"
#include "sub.h"

int main()
{
	int x, y,z;

	printf("Enter the two numbers");
	fflush(stdout);
	scanf("%d%d",&x,&y);

	printf("The addition of two numbers is %d",add(x,y));
	printf("\nThe sub of two num is %d",sub(x,y));
}

