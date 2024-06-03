/*
6 B) Write a C program for student marks record , allocate dynamic memory using malloc and enter marks. 
Ask user to add or stop entering record . add more memory using realloc to store records and at 
last prints marks on console. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i,n,*ptr,m;
	char ch[1];

	printf("\nEnter the number of students:");
	fflush(stdout);
	scanf("%d",&n);

	ptr = (int*)malloc(n*sizeof(int));              //Allocates the memory of size n* integer size(i.e 4)

	for(i=0;i<n;i++)
	{
		printf("\nEnter the mark of student %d:",i+1);
		fflush(stdout);
		scanf("%d",ptr + i);
	}
		printf("\nDo you wish to add more marks (Y/N):");
		fflush(stdout);
		scanf("%s",&ch);
		//printf("%d",n);

		if((strcmp(ch,"Y")==0)|(strcmp(ch,"y")==0))             //comparing the string to add more date if its either Y or y then condition statement executes.
		{

		    printf("\nHow many marks do you wish to add:");
		    fflush(stdout);
		    scanf("%d",&m);


			ptr = realloc(ptr,((n+m)*sizeof(int)));             //Reallocating the memory to add more with previous allocated memory, thats why (n+m)



			for(i=n;i<n+m;i++)
					{
						printf("\nEnter the mark of student %d:",i+1);
						fflush(stdout);
						scanf("%d",ptr + i);
					}
		}
		else
		{
			exit;
		}

    //Diaplaying the entered data
	printf("\nThe marks of students are:\n");
	for(i=0;i<n+m;i++)
	{
		printf("%d \n",*(ptr+i));
	}
		free(ptr);
	return 0;
}
