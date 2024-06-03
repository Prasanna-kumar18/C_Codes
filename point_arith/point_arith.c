/*
 * point_arith.c
 *
 *  Created on: 27-Sep-2022
 *      Author: Prasanna Kumar
 */



#include<stdio.h>


int main()
{
	char i,j;
	char *ptr;		//pointer variable

	ptr = &i;
	printf("The add of i is %p",ptr);			//6422296
	scanf("%d",&j);

	ptr++;		//Post increment

	printf("\nThe add of i+1 is %p",ptr);			//6422300

}
