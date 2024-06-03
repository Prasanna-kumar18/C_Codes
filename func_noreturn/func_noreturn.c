/*
 * func_noreturn.c
 *
 *  Created on: 26-Sep-2022
 *      Author: Prasanna Kumar

*/

//No return & No Argument

#include<stdio.h>


void addition(void);

void addition(void)
{
	int a,b,c;
	printf("Enter two numbers");
	fflush(stdout);
	scanf("%d%d",&a,&b);

	c = a+b;

	printf("The addition of two numbers %d",c);
}

int main()
{
	addition();
}



//No return with argument

#include<stdio.h>


void addition(int, int);		//Declaration of Function

void addition(int a, int b)
{
	int c;
	c = a+b;
	printf("The addition of two numbers %d",c);
}

int main()
{
	int a,b;
	printf("Enter two numbers");
	fflush(stdout);
	scanf("%d%d",&a,&b);
	addition(a,b);
}



//Return with no arguments

#include<stdio.h>

int addition(void);

int main()
{
	int d;
	d = addition();
	printf("Addition of two numbers %d",d);
}

int addition(void)
{
	int a,b,c;
	printf("Enter two numbers");
	fflush(stdout);
	scanf("%d%d",&a,&b);
	c= a+b;

	return(c);
}
