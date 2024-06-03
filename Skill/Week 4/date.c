#include<stdio.h>

struct DATE     //Creating the structure name DATE with three variables
    {
        int Day;
        int Month;
        int year;
    };

int main()
    {
        struct DATE d1,d2;

        //Getting the individual value for day, month and year.
        printf("\nEnter the date 1:");
        printf("\nDAY: ");
        scanf("%d", &d1.Day);
        printf("\nMonth: ");
        scanf("%d", &d1.Month);
        printf("\nYear: ");
        scanf("%d", &d1.year);

        printf("\nEnter the date 2:");
        printf("\nDAY: ");
        scanf("%d", &d2.Day);
        printf("\nMonth: ");
        scanf("%d", &d2.Month);
        printf("\nYear: ");
        scanf("%d", &d2.year);

        //Compare day, month and year
        if((d1.Day == d2.Day)&&(d1.Month == d2.Month)&&(d1.year == d2.year))
            {
                printf("\nBoth the dates are same\n");
            }
        else
            {
                printf("\nThe given dates are different\n");
            }
        return 0;
    }