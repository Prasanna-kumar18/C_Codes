/*
 * arr_ptr.c
 *
 *  Created on: 30-Sep-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>	//preprocessor

int main()
{
	int *a[5];		//Array of pointer
	int i=10, j=5, k=8, l=6, m=2;
	int q;

	a[0] = &i;
	a[1] = &j;
	a[2] = &k;
	a[3] = &l;
	a[4] = &m;

	for(q=0;q<5; q++)
	{
		printf("\nThe variable values are %d",*a[q]);
	}

}

