/*
 * file_rdwr.c
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

	f = fopen("C:\\Challenge\\one.txt","w");

	if(f==NULL)
		printf("File not available");
	else
	{
		fprintf(f,"%s","This content is written by c");
	}

	fclose(f);

	f = fopen("C:\\Challenge\\one.txt","r");
	if(f==NULL)
			printf("File not available");
	else
	{
		fgets(ch,100,f);
		printf("%s",ch);
	}

	fclose(f);


}

