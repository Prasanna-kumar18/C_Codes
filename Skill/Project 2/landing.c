#include<stdio.h>
void gear_down();
void checking_before_takeoff();
void raising_gear();
void gear_up();
void checking_before_landing();
void lowering_gear();

typedef enum {                      //Gear state
gr_down,
gr_chk_takeoff,
gr_raising,
gr_up,
gr_chk_landing,
gr_lowering
}state_type;
state_type current_state;
typedef enum {                    //Limit switch
open,
close
}Switch;
typedef enum {                    //Lever
down,
raising,
up,
falling
}pilot_lever;
typedef enum {                   //hydraulic_mechanism
working,
malfunctioning
}hydraulic_mechanism;
typedef struct{                    //state table
char* current_state_indication;
char* LED_indication;
char* direction_valve;
char* hydraulic_pump_status;
char* gas_pressurized_spring_status[2];
}state_table;

state_table state_machine[6]={{"gear_down","green","down","enabled",{0,0}},
{"checking_before_takeoff","green","down","enabled",{0,0}},
{"raising_gear","red","up","enabled",{"enabled","disabled"}},
{"gear_up","off","Null","disabled",{0,0}},
{"checking_before_landing","red","down","enabled",{0,0}},
{"lowering_gear","green","down","enabled",{"enabled","disabled"}}};
         //Initializing the values for the state_machine

void (*table[])()={gear_down,checking_before_takeoff,raising_gear,gear_up,checking_before_landing,lowering_gear};
                     //initializing table function to call different functions
pilot_lever lever;
Switch ls;
Switch ss;                            // Declaring variables for the enumerated type
hydraulic_mechanism hydraulic;

int main()                           //main function
{ 
current_state=gr_down;
while(1)
{
table[current_state]();        //calling the table function
}
}

void gear_down()                //gear down function
{
current_state=gr_down;
printf("Enter the pilots lever position and squat switch position:");
fflush(stdout);
scanf("%d %d",&lever,&ss);
if((lever==raising)&&(ss==open))         //raising(1) open(0)
{
current_state=gr_chk_takeoff;
printf("current_state:%s", state_machine[current_state].current_state_indication);
printf("nLED indication:%s",state_machine[current_state].LED_indication);
}
else
{
gear_down();
}
}
void checking_before_takeoff()             //checking_before_takeoff function
{
current_state=gr_chk_takeoff;
printf("nEnter the Pilot's Lever Position, Squat Switch position and hydraulic mechanism status:");
fflush(stdout);
scanf("%d %d %d",&lever,&ss,&hydraulic);
printf("n Delay for 3 seconds");
if((lever == falling)||(ss ==close))        //lowering(3) close(1) hydraulic!=(0 or 1)
{
current_state =gr_down;
printf("nCurrent State: %s", state_machine[current_state].current_state_indication);
printf("nLight Status:%s", state_machine [current_state].LED_indication);
printf("nDirection Value Status:%s",state_machine[current_state].direction_valve);
}
else if ((lever == up)&&(ss == open)&&(hydraulic== working))             //up(2) open(0) working(0)
{
current_state =gr_raising;
printf("nCurrent State: %s", state_machine[current_state].current_state_indication);
printf("nLight Status:%s", state_machine [current_state].LED_indication);
printf("nDirection Value Status:%s",state_machine[current_state].direction_valve);
}
else if ((lever == up)&&(ss ==open)&&(hydraulic == malfunctioning))    //up(2) open(0) malfunctioning(1)
{
current_state =gr_raising;
printf("nLight Status:%s" ,state_machine[current_state].LED_indication);
printf("nDirection Value Status:%s", state_machine[current_state].direction_valve);
printf("nGas Pressurized Spring System Status:%sn",state_machine[current_state].gas_pressurized_spring_status[hydraulic]);
}
}
void raising_gear()                        //raising_gear function
{
current_state = gr_raising;
printf("nEnter the Pilot's Lever Position, Limit Switch position:");
fflush(stdout);
scanf("%d %d",&lever,&ls);
if((lever == up)&&(ls== close))    // up(2) close(1)
{
current_state=gr_up;
printf(" nCurrent State: %s", state_machine[current_state].current_state_indication);
printf("nLight Status:%s", state_machine [current_state].LED_indication);
printf("nDirection Value Status:%s",state_machine[current_state].direction_valve);
}
else if ((lever == falling)&&(ls == open))           //lowering(3) open(0)
{
current_state = gr_chk_landing;
printf(" nCurrent State: %s", state_machine[current_state].current_state_indication);
printf("nLight Status:%s", state_machine [current_state].LED_indication);
printf("nDirection Value Status:%s",state_machine[current_state].direction_valve);
}
else
{
raising_gear();
}
}
void gear_up() //gear_up function
{
current_state=gr_up;
printf("nEnter the Pilot's Lever Position:");
fflush(stdout);
scanf("%d",&lever);
if(lever == falling) //lowering(3)
{
current_state = gr_chk_landing;
printf(" nCurrent State: %s", state_machine[current_state].current_state_indication);
printf("nLight Status:%s", state_machine [current_state].LED_indication);
printf("nDirection Value Status:%s",state_machine[current_state].direction_valve);
}
else
{
gear_up();
}
}
void checking_before_landing()                            //checking_before_landing function
{
current_state = gr_chk_landing;
printf("nEnter the Pilot's Lever Position, status of hydraulic mechanism:");
fflush(stdout);
scanf("%d %d",&lever,&hydraulic);
if ((lever == down)&&(hydraulic == working))       //down(0) working(0)
{
current_state = gr_lowering;
printf("n Current State: %s", state_machine[current_state].current_state_indication);
printf("nLight Status:%s", state_machine [current_state].LED_indication);
printf("nDirection Value Status:%s",state_machine[current_state].direction_valve);
}
else if((lever == down)&&(hydraulic == malfunctioning))      // down(1) malfunctioning(1)
{
current_state = gr_lowering;
printf("nLight Status:%s" ,state_machine[current_state].LED_indication);
printf("nDirection Value Status:%s", state_machine[current_state].direction_valve);
printf("nGas Pressurized Spring System Status:%sn",state_machine[current_state].gas_pressurized_spring_status[hydraulic]);
}
else if ((lever == up|| raising|| falling))                           //up(2) raising(1) lowering(3)
{
checking_before_landing();
}
}
void lowering_gear() //lowering_gear function
{
current_state = gr_lowering;
printf("nEnter the Pilot's Lever Position, Limit Switch position:");
fflush(stdout);
scanf("%d %d",&lever,&ls);
if((lever == raising)&&(ls == close))
{
current_state=gr_chk_takeoff;
printf(" nCurrent State: %s", state_machine[current_state].current_state_indication);
printf("nLight Status:%s", state_machine [current_state].LED_indication);
printf("nDirection Value Status:%s",state_machine[current_state].direction_valve);
}
else if ((lever == down)&&(ls == open))                        // down(0) open(0)
{
current_state = gr_down;
printf(" nCurrent State: %s", state_machine[current_state].current_state_indication);
printf("nLight Status:%s", state_machine [current_state].LED_indication);
printf("nDirection Value Status:%sn",state_machine[current_state].direction_valve);
}
else
{
lowering_gear();
}
}