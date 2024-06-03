/*
 * bit_fields.c
 *
 *  Created on: 06-Oct-2022
 *      Author: Prasanna Kumar
 */

#include<stdio.h>

struct bitfields
{
	unsigned char a1:1,
				  a2:2,
				  a3:3,
				  a4:2;
};

int main()
{
	struct bitfields x;

	x.a1 = 6;		//0,1
	x.a2 = 3;		//0,1,2,3
	x.a3 = 5;		//0-7
	x.a4 = 2;

	printf("the values are %d %d %d %d",x.a1,x.a2,x.a3,x.a4);
}
