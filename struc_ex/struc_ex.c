/*
 * struc_ex.c
 *
 *  Created on: 03-Oct-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>
#include<string.h>

typedef union
{
	char name[20];			//Members of structure
	float mark;
	float per;
}example;			//Name of the structure

int main()
{
	example a;	//variable

	strcpy(a.name,"Karthik");
	a.mark = 65;
	a.per = 65.3;
	printf("\nThe value of struct members x is %s",a.name);
	fflush(stdout);
	printf("\nThe value of struct members y is %f",a.mark);
	fflush(stdout);
	printf("\nThe value of struct members z is %f",a.per);
	fflush(stdout);


}




