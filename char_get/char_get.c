/*
 * char_get.c
 *
 *  Created on: 03-Oct-2022
 *      Author: Prasanna Kumar
 */



#include<stdio.h>
#include<string.h>

int main()
{
	char name[20], place[10];
	//int age;

	puts("Enter the name and place");
	fflush(stdout);
	//scanf("%s%s",name,place);
	gets(name);

	printf("The entered name is %s", name);
	printf("\nThe place is %s",place);

}
