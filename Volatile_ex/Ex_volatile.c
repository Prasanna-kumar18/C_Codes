/*
 * Ex_volatile.c
 *
 *  Created on: 06-Jul-2023
 *      Author: Prasanna Kumar
 */


#include<stdio.h>

void delay(int );

int main()
{
	delay(1000);
}

void delay(int val)
{
	int t;
	for(t=0;t<val;t++);
}
