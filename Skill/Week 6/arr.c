/*
6 C) Write c program to allocate dynamic memory to array of 5 elements using 
calloc and scan array elements from console and then change size of an array 
using realloc and scan elements from console and display all elements of an 
array on console as shown below: */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,n,*ptr,m;

	printf("\nEnter the number of elements:");
	fflush(stdout);
	scanf("%d",&n);
	ptr = (int*)calloc(n,sizeof(int));              //Allocating the multiple blocks of memory usng calloc

	printf("Enter the values of array:\n");
	fflush(stdout);
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr + i);
	}

	printf("The values of array after calloc() are:\n");        //Displying the value after the calloc()
	fflush(stdout);
	for(i=0;i<n;i++)
	{
		printf("%d \n",*(ptr+i));
	}

	printf("Enter number of values you wish to add more:");  
	fflush(stdout);
	scanf("%d",&m);


	ptr = realloc(ptr,((n+m)*sizeof(int)));                 //Reallocating the memory to add more number of data.
	printf("Enter the values to be added:\n");
	fflush(stdout);
	for(i=n;i<n+m;i++)
	{
		scanf("%d",ptr + i);
	}

	printf("The values of array after relloc() are:\n");        //Printing the datas after reallocating using realloc()
	fflush(stdout);
	for(i=0;i<n+m;i++)
	{
		printf("%d \n",*(ptr+i));
	}
		free(ptr);
	return 0;
}

