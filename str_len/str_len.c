/*
 * str_len.c
 *
 *  Created on: 03-Oct-2022
 *      Author: Prasanna Kumar
*/
//string length

#include<stdio.h>
#include<string.h>

int main()
{
	char name[15] = "Akash Deep";
	int length, size;

	length = strlen(name);

	size = sizeof(name);


	printf("The number of characters in variable is %d",length);
	printf("\nThe size of characters in variable is %d",size);

}


//String Copy
#include<stdio.h>
#include<string.h>

int main()
{
	char source[15] = "Akash Deep";
	char destination[15];

	strcpy(destination,source);

	puts(source);
	puts(destination);
}


//string concatination

#include<stdio.h>
#include<string.h>

int main()
{
	char first_name[15] = "Arun";
	char second_name[15] = "kumar";

	strncat(first_name, second_name,3);

	printf("The full name is %s", first_name);


}


//String compare

#include<stdio.h>
#include<string.h>

int main()
{
	char name1[15] = "Arun";
	char name2[10] = "AruN";
	int a;

	a = strncmp(name1, name2,3);

	if(a==0)
	{
		printf("The names are same");
	}
	else
		printf("The names are not equal");
}



//String Reverse
#include<stdio.h>
#include<string.h>

int main()
{
	char name[15] = "Arun";

	printf("The Original name is %s", name);

	strrev(name);

	printf("\nThe reversed name is %s", name);
}


// String Search

#include<stdio.h>
#include<string.h>

int main()
{
	char name[15] = "Arun";
	char search[10];
	int found;

	printf("Enter the name to be search");
	fflush(stdout);
	gets(search);

	found = strstr(name, search);

	if(found)
		printf("The searched string is found");
	else
		printf("The searched string is not found");
}
