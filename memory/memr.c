/*
 * memr.c
 *
 *  Created on: 26-Aug-2022
 *      Author: Prasanna Kumar



#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name;
   printf("%d", sizeof(name));
   name = (char*) calloc( 10 , sizeof(char) );
   printf("\n%d", sizeof(name));



  /*
   printf("Enter the name");
   fflush(stdout);
   scanf("%s", &name);
   printf("Name = %s\n",name);
   return 0;

   }
   */




#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i,n,*ptr,m=5;
	char ch[1];

	printf("\nEnter the number of students:");
	//fflush(stdout);
	scanf("%d",&n);

	ptr = (int*)malloc(n*sizeof(int));              //Allocates the memory of size n* integer size(i.e 4)

	printf("%d", sizeof(ptr));

			ptr = realloc(ptr,((n+m)*sizeof(int)));             //Reallocating the memory to add more with previous allocated memory, thats why (n+m)

			printf("%d", sizeof(ptr));

		free(ptr);
	return 0;
}



