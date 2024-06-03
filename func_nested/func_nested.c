/*
 * func_nested.c
 *
 *  Created on: 26-Sep-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>

void square(int);
void operation();
void display(int);

int main()
{
	operation();		//Function calling(No arg & no return)
}

void square(int a)
{
	display(a*a);		//Function calling(With Arg & No return)
}

void operation()
{
	int a;
	printf("Enter the number");
	//fflush(stdout);
	scanf("%d",&a);
	square(a);			//Function Calling(With Arg & No return)
}

void display(int a)
{
	printf("The square value is %d",a);
}
