/*
 * point_deref.c
 *
 *  Created on: 13-Oct-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>

int main()
{
   int a = 7, b ;
   int *p; // Un-initialized Pointer
   p = &a; // Stores address of a in ptr
   printf("The value of p is %d",p);
   b = *p; // Put Value at ptr in b
   printf("\nThe value of b is %d",b);
}

