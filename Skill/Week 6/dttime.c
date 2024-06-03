/*
6 E) Write a c code to print current date and time
*/

#include<stdio.h>
#include<time.h>            //Declaring time.h header file to use system date and time.

int main()
{
    time_t tm;              
    time(&tm);

    printf("\nCurrent Date and Time = %s", ctime(&tm));           //ctime displays the current system time and data value.
    
    return 0;
}

