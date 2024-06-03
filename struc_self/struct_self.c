/*
 * struct_self.c
 *
 *  Created on: 06-Oct-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>

struct class
{
	int a;
	float b;
	struct class *var;		//Self-referential structure
};

int main()
{
	struct class x, y;

	x.a = 10;
	y.b = 20.56;

	x.var = &y;

	x.var->a = 45;

	printf("the value of y for a is %d",y.a);
}
