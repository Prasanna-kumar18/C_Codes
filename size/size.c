/*
 * size.c
 *
 *  Created on: 16-Aug-2022
 *      Author: Prasanna Kumar
 */

#include<stdio.h>
#include<stdarg.h>

int product(int N, ...)
{
	int loop, result = 1;
	va_list va;
	va_start(va,N);
	for(loop=0; loop<N; loop++)
	{
		result *= va_arg(va,int);
	}
	return result;
}


int main()
{
	printf("product of ",product(2,10,5));
	return 0;
}



/*
#include <stdio.h>
#include <stdarg.h>

int vout(int max, ...);

int main(void)
{
   vout(2, "Sat", "Sun");
   printf("\n");
   vout(3, "Mon", "Tues", "Wed");
}

int vout(int max, ...)
{
   va_list arg_ptr;
   va_list args_copy;
   int args;
   char *day;
   va_start(arg_ptr, max);
   va_copy(args_copy, arg_ptr);
   args = 0;
   while(args < max)
   {
      day = va_arg(arg_ptr, char *);
      printf("Day: %s\n", day);
      args++;
   }
   va_end(arg_ptr);

   args = 0;
   while(args < max)
   {
      day = va_arg(args_copy, char *);
      printf("Day: %s\n", day);
      args++;
   }
   va_end(args_copy);
}*/
