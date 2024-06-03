/*
 * file_open.c
 *
 *  Created on: 07-Oct-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *f;

	f = fopen("C:\\Challenge\\one.txt","w");

	if(f==NULL)
		printf("The file is not available");
	else
	{
		fprintf(f,"%s\n"," embedded system");
		fputc('H',f);
		fputs("\nThis is string from puts",f);
	}

	fclose(f);
}
