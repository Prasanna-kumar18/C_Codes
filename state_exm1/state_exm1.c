/*
 * state_exm1.c
 *
 *  Created on: 18-Oct-2022
 *      Author: Prasanna Kumar
 */

#include<stdio.h>

static volatile int clock;
static volatile int out;

void initial_state()
{
	clock =0;
	out = 0;
	printf("\nState machine is initialized & the program is in state A and the output is %d",out);
	fflush(stdout);
}

void state_B()
{
	out = 1;
	printf("\nThe program is in state B & the value of output is %d",out);
	fflush(stdout);
}

void state_A()
{
	out = 0;
	printf("\nThe program is in state A & the value of output is %d",out);
	fflush(stdout);
}

void state_C()
{
	out = 2;
	printf("\nThe program is in state C & the value of output is %d",out);
	fflush(stdout);
}


int main()
{
	initial_state();

	while(1)
	{
		switch(clock)
		{
		case 2:
			state_B();
			break;

		case 5:
			state_C();
			break;

		case 9:
			state_A();
			break;

		}
		clock++;
	}
}
