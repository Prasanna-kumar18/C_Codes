#include<stdio.h>
int main()
{
int n=0XA1CC,a[16],i=15;
while(n)
{
a[i]=(n&1);
--i;
n=n>>1;
}
for(int j=0;j<16;j++)
printf("%d",a[j]);
}