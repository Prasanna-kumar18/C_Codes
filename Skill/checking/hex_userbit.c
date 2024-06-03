#include<stdio.h>
int main()
{
int a=0XB2,i=0,j=0;
printf("Enter the bit number to be reset\n");
scanf("%d",&j);
a &= ~(1u<<(j-1));
printf("%d\n",a);
}