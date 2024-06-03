/*
 * func_str.c
 *
 *  Created on: 07-Oct-2022
 *      Author: Prasanna Kumar
*/



#include<stdio.h>

void display(char []);			//Function declaration as string argument

int main()
{
	char str[]="Embedded";

	display(str);				//Function calling with string argument
}

void display(char a[])
{
	printf("The passed string is %s",a);
}





#include<stdio.h>

char display();			//Function declaration as

int main()
{
	char str[10];

	str[10] = display();				//Function calling with string argument
	printf("The returned string is %s",str);
}

char display()
{
	char ch[10];
	printf("Enter the string to be returned");
	//fflush(stdout);
	scanf("%s",ch);
	return (ch);
}
