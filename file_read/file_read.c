/*
 * file_read.c
 *
 *  Created on: 07-Oct-2022
 *      Author: Prasanna Kumar
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *f;
	char ch[100];

	f = fopen("C:\\Challenge\\one.txt","r");

	if(f==NULL)
		printf("The file is not available");

	else
	{
		fgets(ch,100,f);
		printf("%s",ch);
	}

	fclose(f);

}
