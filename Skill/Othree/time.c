#include<stdio.h>
struct time
{
int hours; int minutes; int seconds;
};

int main()
{
// Creating structure variables
struct time t1, t2, diff;
int Ta, Tb, Max, Min;

// Reading first time period
printf("Enter hours, minutes and seconds of time1: ");
fflush(stdout);
scanf("%d%d%d", &t1.hours,&t1.minutes, &t1.seconds);

// Reading second time period
printf("Enter hours, minutes and seconds of stop time2: ");
fflush(stdout);
scanf("%d%d%d", &t2.hours,&t2.minutes, &t2.seconds);

Ta = (t1.hours*3600)+(t1.minutes*60)+(t1.seconds);
Tb = (t2.hours*3600)+(t2.minutes*60)+(t2.seconds);

if(Ta>Tb) Max=Ta,Min=Tb;
else Max=Tb,Min=Ta;

diff.hours = (Max-Min)/3600;
diff.minutes = ((Max-Min) % 3600)/60;
diff.seconds = ((Max-Min) % 3600)-60;

printf("Difference = %d : %d : %d", diff.hours, diff.minutes, diff.seconds);
return 0;
}