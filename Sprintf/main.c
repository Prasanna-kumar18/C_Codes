/*
 * main.c
 *
 *  Created on: Apr 18, 2024
 *      Author: Prasana
 */


#include <stdio.h>	//Preprocessor Section

/* Main Function */
int main()
{

	char *s = "My name is PK";
	char a[50];
	int x = 10, y = 20;

	printf(s);	//Equivalent to printf("My name is PK");
	printf("\n%s",s);	//Safe

	sprintf(a,"\nx = %d, y = %d\n",x,y);
	printf("%s",a);
}
