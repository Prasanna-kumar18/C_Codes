/*
 * struct_pad.c
 *
 *  Created on: 06-Oct-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>

struct padding
{
	char a;		//1

	char b;		//1
	int c;		//4

}__attribute__((packed));

int main()
{
	struct padding x;

	printf("The size of the struct is %d",sizeof(x));
}
