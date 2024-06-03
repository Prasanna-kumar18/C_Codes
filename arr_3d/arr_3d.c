/*
 * arr_3d.c
 *
 *  Created on: 29-Sep-2022
 *      Author: Prasanna Kumar
 */

/*
 * arr_2d.c
 *
 *  Created on: 29-Sep-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>	//preprocessor

int main()
{
	int a[2][2][3] = {{{1,6,5},{2,8,7}},
					  {{8,9,6},{7,8,3}}};

	int i,j,k,sum=0;

	for(i=0; i<2;i++)					//Number of matrix
	{
		for(j=0;j<3;j++)				//Number of Rows
		{
			for(k=0;k<3;k++)			//Number of Columns
			{
					sum+=a[i][j][k];	//sum = sum + a[i][j][k];

					printf("\nMatrix %d Row %d Column %d: %d",i,j,k,a[i][j][k]);

			}
		}

	}

	printf("\nThe sum of all elements is %d",sum);

}



