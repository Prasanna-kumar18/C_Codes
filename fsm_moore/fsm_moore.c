/*
 * fsm_moore.c
 *
 *  Created on: 19-Oct-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>

typedef enum
{
	Gotosouth,
	Waitforsouth,
	Gotowest,
	Waitforwest
}State_types;

typedef enum
{
	west_red_south_green = 0x1000001,
	west_red_south_yellow = 0x1000010,
	south_red_west_green = 0x001100,
	south_red_west_yellow = 0x010100
}Signal;

typedef enum
{
	No_car,
	Car_in_North,
	Car_in_East,
	Car_in_Both
}sensor_input;


typedef struct
{
	Signal output;
	int time;
	State_types traffic_signals[4];
	char* state_signal[4];

}States;


States state_machine[4] = {
							{west_red_south_green,30,{Gotosouth,Gotosouth,Waitforsouth,Waitforsouth},{"Go_to_south","Go_to_south","Wait_for_south","wait_for_south"}},
							{west_red_south_yellow,5,{Gotowest,Gotowest,Gotowest,Gotowest},{"Go_to_West","Go_to_West","Go_to_West","Go_to_West"}},
							{south_red_west_green,30,{Gotowest,Waitforwest,Gotowest,Waitforwest},{"Go_to_West","Wait_for_West","Go_to_West","Wait_for_West"}},
							{south_red_west_yellow,5,{Gotosouth,Gotosouth,Gotosouth,Gotosouth},{"Go_to_south","Go_to_south","Go_to_south","Go_to_south"}}
};

int current_state;
int east_sensor_input, north_sensor_input;
sensor_input input;

int main()
{
	current_state = Gotosouth;
	while(1)
	{
		printf("\nEnter the sensor value for East & North car Detection");
		fflush(stdout);
		scanf("%d%d",&east_sensor_input,&north_sensor_input);

		if(east_sensor_input == 0 && north_sensor_input ==0)
				{
					input =  No_car;
					printf("\nCurrent Signal is: %s",state_machine[current_state].state_signal[input]);
					current_state = state_machine[current_state].traffic_signals[input];
				}
		else if(east_sensor_input == 0 && north_sensor_input ==1)
				{
					input =  Car_in_North;
					printf("\nCurrent Signal is: %s",state_machine[current_state].state_signal[input]);
					current_state = state_machine[current_state].traffic_signals[input];
				}
		else if(east_sensor_input == 1 && north_sensor_input ==0)
				{
					input =  Car_in_East;
					printf("\nCurrent Signal is: %s",state_machine[current_state].state_signal[input]);
					current_state = state_machine[current_state].traffic_signals[input];
				}
		else if(east_sensor_input == 1 && north_sensor_input ==1)
				{
					input =  Car_in_Both;
					printf("\nCurrent Signal is: %s",state_machine[current_state].state_signal[input]);
					current_state = state_machine[current_state].traffic_signals[input];
				}
		printf("\nPlease wait for %d seconds",state_machine[current_state].time);
		printf("\nThe output value is %d",state_machine[current_state].output);
	}

}
