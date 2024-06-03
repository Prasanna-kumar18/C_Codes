/*
 * num_conv.c
 *
 *  Created on: 10-Oct-2022
 *      Author: Prasanna Kumar
 */

#include<stdio.h>
#include<stdlib.h>			//Library for number conversion

int main()
{
	char str1[10] = "12345";
	char str2[20] = "1951615151";
	char str3[100] = "141151.151";

	int a = atol(str1);		//ASCII into a long integer value.
	printf("The number of str1 is %d",a);

	int b = atol(str2);
	printf("\nThe number of str1 is %d",b);

	printf("\nThe random value generated is %d",rand());
	printf("\nThe random value generated is %d",rand());
	printf("\nThe random value generated is %d",rand());

}


