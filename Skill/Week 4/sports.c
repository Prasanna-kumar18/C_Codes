#include <stdio.h>

struct TIME         //Creating the structure name TIME with three variables
    {
        int Hours;
        int Minutes;
        int Seconds;
        
    };

void difftime(struct TIME student1, struct TIME student2, struct TIME *diff);   //Initializing the function  name difftime

int main()
    {
        struct TIME std1, std2, diff;
        
        printf("\nEnter the Start Time ");
        printf("\nEnter the Hours, Minutes and Seconds ");
        scanf("%d %d %d", &std1.Hours, &std1.Minutes, &std1.Seconds);

        printf("\nEnter the Stop Time ");
        printf("\nEnter the Hours, Minutes and Seconds ");
        scanf("%d %d %d", &std2.Hours, &std2.Minutes, &std2.Seconds);

        difftime(std1, std2, &diff);        //Calling the function with three arguments

        printf("\nThe DIfference between times in HH:MM:SS is %2d:%d:%d", diff.Hours, diff.Minutes, diff.Seconds);

        return 0;
    } 

void difftime(struct TIME student1,struct TIME student2, struct TIME *diff)     //Called function
    {
        while (student1.Seconds > student2.Seconds)     //Checking if the student 2 time is greater than student 1
            {
                //if end time is greater, then reducing one minute and add 60 seconds
                --student2.Minutes;
                student2.Seconds += 60;
            }
            diff->Seconds = student2.Seconds - student1.Seconds;

        while (student1.Minutes > student2.Minutes)
            {
                 //if end time is greater, then reducing one hour and add 60 minutes
                --student2.Hours;
                student2.Minutes += 60;
            }
            diff->Minutes = student2.Minutes - student1.Minutes;
            diff->Hours = student2.Hours - student1.Hours;
    }