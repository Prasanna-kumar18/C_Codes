/*
 * state_exm2.c
 *
 *  Created on: 18-Oct-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>

typedef enum states
{
	STATE_A,		//value = 0
	STATE_B,		//value = 1
	STATE_C,			//value = 2

}state_type;

static volatile int clock;
static volatile int out;

state_type current_state;



void initial_state()
{
	current_state = STATE_A;
	clock =0;
	out = 0;
	printf("\nState machine is initialized & the program is in state A and the output is %d",out);
	//fflush(stdout);
}

void state_A()
{
	out = 0;
	printf("\nThe program is in state A & the value of output is %d",out);
	//fflush(stdout);
	clock++;
	printf("\nThe clock value is %d",clock);
	if(clock==2){
		current_state = STATE_B;
	}

}

void state_B()
{
	out = 1;
	printf("\nThe program is in state B & the value of output is %d",out);
	//fflush(stdout);
	clock++;
		printf("\nThe clock value is %d",clock);
		if(clock==5){
			current_state = STATE_C;
		}
}



void state_C()
{
	out = 2;
	printf("\nThe program is in state C & the value of output is %d",out);
	//fflush(stdout);
	clock++;
		printf("\nThe clock value is %d",clock);
		if(clock==9){
			current_state = STATE_A;
			clock=0;
		}
}


static void (*state_table[])(void) = {state_A, state_B, state_C};


int main()
{
	initial_state();
	while(1)
	{
		state_table[current_state]();
		//state_table[STATE_C]();
		//state_table[2]();
		//state_c();



	}
}
