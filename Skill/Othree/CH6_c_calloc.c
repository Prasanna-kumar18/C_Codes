#include<stdio.h>
#include <stdlib.h>

int main()
{
int *array_ptr;
int i,j, n = 5;


array_ptr = (int *) calloc(n, sizeof(int));
if(array_ptr == NULL)
printf("Memory not allocated");
else{
printf("Enter the array elements: \n");
//fflush(stdout);
for(i=0;i<n;i++)
{
fflush(stdout);
scanf("%d",(array_ptr+i));
//printf("value of i is %d \n",i);
//i = i+1;
}

n = 10;
array_ptr = (int *) realloc(array_ptr, n*sizeof(int));
printf("\nEnter the array elements again: ");
//fflush(stdout);
for(i=5;i<n;i++)
{
fflush(stdout);
scanf("%d",(array_ptr +i));
}
printf("\n array elements are: \n");
for(i=0;i<n;i++)
{
printf("%d ",*(array_ptr +i));
}}
free(array_ptr);
return 0;
}
