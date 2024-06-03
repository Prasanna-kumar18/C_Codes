/*
 * mem_realloc.c
 *
 *  Created on: 11-Oct-2022
 *      Author: Prasanna Kumar
 */



#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int *ptr;

	ptr = (int *)calloc(20,sizeof(int));			//Allocating a 10 bytes of memory to the character.

	strcpy(ptr, "Embedded live session");

	printf("Address of the ptr before realloc is %d",ptr);


	strcat(ptr, " class");

	ptr = (int *)realloc(ptr,100);

	printf("\nAddress of the ptr after realloc is %d",ptr);

}

