/*
 * make_cmd.c
 *
 *  Created on: 12-Oct-2022
 *      Author: Prasanna Kumar
 */

#include<stdio.h>	//preprocessor

int main()
{
	int a[3][3] = {{1,6,5},{2,8,7},{3,4,9}};

	int i,j,sum=0;

	for(i=0; i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum+=a[i][j];		//sum = sum + a[i][j]

			printf("\nRow %d Column %d: %d",i,j,a[i][j]);
		}
	}

	printf("\nThe sum of all elements is %d",sum);

}


