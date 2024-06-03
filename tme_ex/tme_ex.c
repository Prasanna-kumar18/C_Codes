/*
 * tme_ex.c
 *
 *  Created on: 10-Oct-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>
#include<time.h>

int main()
{
	time_t timer = time(NULL);

	printf("The current time and date is %s",ctime(&timer));

}

