/*
 * exmp1.c
 *
 *  Created on: 18-Oct-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>

typedef enum				//2. Create Enum for states.
{
	STOP,	//value =0
	GO		//value =1
}state_type;


typedef struct				//3. Creating struct with variables.
{
	char* brake[2];
	char* gas[2];
	state_type engine_state[3];
	char* state_indication[2];
}state;


state state_machine[2] = {
							{{"Released","Released"},{"Released","Pressed"},{STOP,GO},{"STOP","GO"}},
							{{"Pressed","Released"},{"Released","Pressed"},{STOP,GO},{"STOP","GO"}}
};

state_type current_state;
int control_input;

int main()
{
	current_state = STOP;			//1. Declare current state
	while(1)
	{
		printf("\nEnter the control input");
		fflush(stdout);
		scanf("%d",&control_input);
		printf("\nCurrent State is: %s",state_machine[current_state].state_indication[control_input]);
		printf("\nThe status of brake is %s",state_machine[current_state].brake[control_input]);
		printf("\nThe status of Gas is %s",state_machine[current_state].gas[control_input]);

		current_state = state_machine[current_state].engine_state[control_input];
	}
}
