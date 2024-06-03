/*
 * arr_elem.c
 *
 *  Created on: 29-Sep-2022
 *      Author: Prasanna Kumar
 */

#include<stdio.h>	//preprocessor

int main()
{
	int c[] ={4,6,7,3,2,6,9,8,7,2,3,0,2,5,6,2,5,3,8,2,6,8,9,3,2,5,3,2,5,6,8,6,2,6,9,3,4,7,2,8,7,8,2,9,1,8,1,8,2,8,2,3,0,1,5,7,5,9};
	int i;

	for(i=0; i<(sizeof(c)/sizeof(c[0])); i++)
	{
		printf("\nThe elements are %d",c[i]);
	}


}
