/*
 * prepros.c
 *
 *  Created on: 28-Sep-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>

#define PROD(a,b) a*b

int main()
{
	//float a;
	printf("The product is %d",PROD(4,5));			//20

	printf("\nThe product is %d",PROD(3+4,5+1));	// 3+20+1

}

