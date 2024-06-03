/*
 * main.c
 *
 *  Created on: Apr 18, 2024
 *      Author: Prasana
 */

#include <stdio.h>

int main()
{
	int a = 500;

	char * p = &a;

	p[0] = 1;
	p[1] = 2;

	printf("a:%d\n",a);
}
