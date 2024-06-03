/*
 * Happy.c
 *
 *  Created on: 17-Aug-2023
 *      Author: Prasanna Kumar

*/

#include<stdio.h>
#include<math.h>
int main()
{
 int rem,num,sum=0;
 printf("Enter number\n");
 fflush(stdout);
 scanf("%d",&num);
  while(sum!=1 && sum!=4)
  {
   sum=0;
   while(num>0)
  {
    rem=num%10;
    sum+=(rem*rem);
    num=num/10;
  }
  num=sum;
  }

  if(sum==1)
 printf("Happy Number\n");
 else
 printf("UnHappy Number\n");
}


