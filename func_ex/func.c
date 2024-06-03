/*
 * func.c
 *
 *  Created on: 26-Sep-2022
 *      Author: Prasanna Kumar
 */


//return with argument


#include<stdio.h>	//preprocessor

int a,b,c;		//Global variable

int main()
{
	int square(int);			//datatype function name()   - Function Declaration
			//Local variable
	printf("Enter any number");
	fflush(stdout);
	scanf("%d", &a);

	b = square(&a);

	printf("The square value of a is %d", b);
}

int square(int *c)
{
	int y;
	a=c;
	y = c*c;
	return(y);

}
