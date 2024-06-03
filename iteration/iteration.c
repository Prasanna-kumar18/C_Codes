/*
 * iteration.c
 *
 *  Created on: 23-Sep-2022
 *      Author: Prasanna Kumar
 */
#include<stdio.h>


int main()
{
	int i=0;

	/*for(i=0; i<5 ;i++)
	{
		for(int j=0; j<5; j++)
		{
		printf("\n i= %d j= %d",i,j);
		}

	}*/

	do
	{
		printf("\n i= %d" ,i);
		++i;
	}while(i<5);
}


