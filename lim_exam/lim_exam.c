/*
 * lim_exam.c
 *
 *  Created on: 10-Oct-2022
 *      Author: Prasanna Kumar
 */

#include<stdio.h>
#include<limits.h>				//Returns the min & max value of data type

int main()
{
	printf("\nThe Min value of signed character is %d", SCHAR_MIN);
	printf("\nThe Max value of signed character is %d", SCHAR_MAX);

	printf("\nThe Max value of unsigned character is %d", UCHAR_MAX);

	printf("\n\nThe Min value of signed int is %d", INT_MIN);
	printf("\nThe Max value of signed int is %d", INT_MAX);

	printf("\nThe Max value of Unsigned int is %u", UINT_MAX);

	printf("\n\nThe Min value of signed Short int is %d", SHRT_MIN);
	printf("\nThe Max value of signed Short int is %d", SHRT_MAX);

	printf("\nThe Max value of Unsigned Short int is %u", USHRT_MAX);
}


