/*
 * jmp_exm.c
 *
 *  Created on: 10-Oct-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>
#include<setjmp.h>


jmp_buf val;

int main(int argc, char **argv)
{
	if(setjmp(val) == 0)
	{
		printf("\nThe buffer value is set");
		//fflush(stdout);
	}
	else
	{
		printf("\nThe function jumped");
		return 0;
		//fflush(stdout);
	}

	printf("\nGetting ready to jump");
	//fflush(stdout);
	longjmp(val,1);
	printf("\nThis printf will not be executed");
	//fflush(stdout);

}

