#include<stdio.h>
void gear_down();
void check_before_takeoff();
void raising_gear();
void gear_up();
void check_before_landing();
void lowering_gear();
typedef enum state{               //Gear
	gr_down,
	gr_chk_takeoff,
	gr_raising,
	gr_up,
	gr_lowering,
	gr_chk_landing
}state_type;
    state_type current_state;
typedef enum {          //Limit switch
	open,
	close
}Switch;
typedef enum {       //Lever
	down,
	raising,
	up,
	lowering
}pilot_lever;
typedef enum{
	working,
	malfunctioning
}hydraulic_mechanism;
typedef struct{
	char* current_state_indication;
	char* LED_indication;
	char* direction_valve;
	char* hydraulic_pump_status;
	char* gas_pressurized_spring_status[2];
}state_table;
static void (*state_table1[])(void)={gear_down,check_before_takeoff,raising_gear,gear_up,check_before_landing,lowering_gear};

state_table state_machine[6]={{"gear_down","green","down","enabled",0,0},
                              {"checking_before_takeoff","green","down","enabled",0,0},
                              {"raising_gear","red","up","enabled",{"enabled","disabled"}},
                              {"gear_up","off","Null","disabled",0,0},
                              {"checking_before_landing","red","down","enabled",0,0},
                              {"lowering_gear","green","down","enabled","enabled","disabled"}};
pilot_lever lever;
Switch ls;
Switch ss;
hydraulic_mechanism hydraulic;
int main()
{
	current_state=gr_down;
while(1)
{
	//state_table[current_state];
}
}

void gear_down()
{
	current_state=gr_down;
	printf("Enter the pilots lever position and squat switch position");
	fflush(stdout);
	scanf("%d %d",&lever,&ss);
	if((lever==raising)&&(ss==open))
	{
		current_state=gr_chk_takeoff;
		printf("current_state:%s", state_machine[current_state].current_state_indication);
		printf("LED indication:%s",state_machine[current_state].LED_indication);
	}
	else
	{
		gear_down();
	}
}
void checking_before_takeoff()
{
	current_state = gr_chk_takeoff;
	fflush(stdout);
	printf("\n Enter the Pilot's Lever Position, Squat Switch position and hydraulic mechanism status ");
	scanf("%d %d %d",&lever,&ss,&hydraulic);//reads the address//
	printf("\n Wait for 2 seconds");
    if((lever == lowering)||(ss ==close))
	{
    	printf(" Current State: %s", state_machine[current_state].current_state_indication);
    	printf("Light Status:%s", state_machine [current_state].LED_indication);
    	printf("Direction Value Status:%s",state_machine[current_state].direction_valve);
	}
	else if ((lever == up)&&(ss == open)&&((hydraulic_mechanism) == working))
	{
    //chk_bfr_tkf= up(2),s_switch=(0) and working=(0)//
       current_state =gr_raising;
       printf(" Current State: %s", state_machine[current_state].current_state_indication);
	   printf("Light Status:%s", state_machine [current_state].LED_indication);
       printf("Direction Value Status:%s",state_machine[current_state].direction_valve);
    }
    else if ((lever == up)&&(ss ==open)&&(hydraulic_mechanism == malfunctioning))
    {
    //chk_bfr_tkf=up(2),s_switch=(0) and working=(1)//
       printf("Light Status:%s" ,state_machine[current_state].LED_indication);
       printf("Direction Value Status:%s", state_machine[current_state].direction_valve);
       printf("Gas Pressurized Spring System Status:%sn",state_machine[current_state].gas_pressurized_spring_status[hydraulic_mechanism]);
    }
}
void raising_gear()
{
	current_state = gr_raising;
	fflush(stdout);
	printf("\n Enter the Pilot's Lever Position, Limit Switch position ");
	scanf("%d %d",&lever,&ls);//reads the address//
	printf("\n Wait for 2 seconds");
    if((lever == up)&&(ls== close))
	{
    	current_state=gr_up;
        printf(" Current State: %s", state_machine[current_state].current_state_indication);
    	printf("Light Status:%s", state_machine [current_state].LED_indication);
        printf("Direction Value Status:%s",state_machine[current_state].direction_valve);
	}
	else if ((lever == lowering)&&(ls == open))
	{
    //chk_bfr_tkf= up(2),squat_switch=(0) and working=(0)//
    current_state = gr_raising;
    printf(" Current State: %s", state_machine[current_state].current_state_indication);
	printf("Light Status:%s", state_machine [current_state].LED_indication);
    printf("Direction Value Status:%s",state_machine[current_state].direction_valve);
    }
    else
    {
    	raising_gear();
    }
}
void gear_up()
{
	current_state=gr_up;
	printf("\n Enter the Pilot's Lever Position");
	scanf("%d",&lever);//reads the address//
	fflush(stdout);
	scanf("%d",&lever);
	if(lever == lowering)
	{
		printf(" Current State: %s", state_machine[current_state].current_state_indication);
		printf("Light Status:%s", state_machine [current_state].LED_indication);
		printf("Direction Value Status:%s",state_machine[current_state].direction_valve);

	}
	else
	{
		gear_up();
	}
}
void checking_before_landing()
{
	current_state = gr_chk_landing;
	fflush(stdout);
	printf("\n Enter the Pilot's Lever Position, status of hydraulic mechanism ");
	scanf("%d %d",&lever,&hydraulic_mechanism);//reads the address//
	printf("\n Wait for 2 seconds");
    if ((lever == down)&&(hydraulic_mechanism == working))
	{
    //chk_bfr_tkf= up(2),squat_switch=(0) and working=(0)//
       current_state = gr_lowering;
       printf(" Current State: %s", state_machine[current_state].current_state_indication);
	   printf("Light Status:%s", state_machine [current_state].LED_indication);
       printf("Direction Value Status:%s",state_machine[current_state].direction_valve);
    }
    else if((lever == down)&&(hydraulic_mechanism == malfunctioning))
    {      //chk_bfr_tkf=up(2),squat_switch=(0) and working=(1)//
    	    printf("Light Status:%s" ,state_machine[current_state].LED_indication);
    	    printf("Direction Value Status:%s", state_machine[current_state].direction_valve);
    	    printf("Gas Pressurized Spring System Status:%sn",state_machine[current_state].gas_pressurized_spring_status[hydraulic_mechanism]);
    }
    else if ((lever == up|| raising|| lowering))
    {
    	checking_before_landing();
    }
}
void lowering_gear()
{
	current_state = gr_lowering;
	fflush(stdout);
	printf("\n Enter the Pilot's Lever Position, Limit Switch position ");
	scanf("%d %d",&lever,&ls);//reads the address//
	printf("\n Wait for 2 seconds");
    if((lever == raising)&&(ls == close))
	{
    	current_state=gr_chk_takeoff;
        printf(" Current State: %s", state_machine[current_state].current_state_indication);
    	printf("Light Status:%s", state_machine [current_state].LED_indication);
        printf("Direction Value Status:%s",state_machine[current_state].direction_valve);
	}
	else if ((lever == down)&&(ls == open))
	{
    //chk_bfr_tkf= up(2),squat_switch=(0) and working=(0)//
    current_state = gr_down;
    printf(" Current State: %s", state_machine[current_state].current_state_indication);
	printf("Light Status:%s", state_machine [current_state].LED_indication);
    printf("Direction Value Status:%s",state_machine[current_state].direction_valve);
    }
    else
    {
    	lowering_gear();
    }
}