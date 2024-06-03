/*
 * enumerated.c
 *
 *  Created on: 22-Sep-2022
 *      Author: Prasanna Kumar
 */

#include<stdio.h>	//preprocessor

int main()
{
	enum switch_state		//user def data type
		{
			off,low,medium,high	//members of enum 0,1,2,3
		};
	typedef enum switch_state liv;

	enum switch_state light, fan;		//variables

	liv laptop, mobile;

	light = off;

	fan = medium;

	laptop = high;

	mobile = low;


	printf("The value of light is %d",light);
	printf("\nThe value of fan is %d",fan);
	printf("\nThe value of laptop is %d",laptop);
	printf("\nThe value of mobile is %d",mobile);
}


