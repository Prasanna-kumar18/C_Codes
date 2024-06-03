/*
 * data_type.c
 *
 *  Created on: 21-Sep-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>
#include<stdint.h>

int main()
{
	int16_t a=10;		// %d
	typedef float fraction;

	fraction b = 6.5;

	char c= 's';	// %c
	double d=110;	//%ld

	printf("The value of a is %d bytes",sizeof(a));
	printf("\nThe value of b is %d bytes",sizeof(b));
	printf("\nThe value of c is %d bytes",sizeof(c));
	printf("\nThe value of d is %d bytes",sizeof(d));
}

