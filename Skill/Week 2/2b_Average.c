#include<stdio.h>

int main()
    {
        int i; 
        float sum=0, cost[10] = {35.00, 40.50, 25.00, 32.25, 68.15, 47.00, 26.65, 29.00, 53.45, 62.50};

        for (i=0; i<10 ; i++)
            {
                sum += cost[i];     //Iterating the loop to count all values in an array.
            }

        printf("\nThe Average value of Personal Computers is %.2f\n", sum/10);  //%.2f is a floating representation which is limited to 2 decimal points.

        //Loop to find the Maximum Number
        float Max_Value=cost[0];
        for(i=0; i<10; i++)
            {
                if(cost[i] > Max_Value)
                    {
                        Max_Value = cost[i];
                    }
            }

        //Loop to find the Minimum Number
        float Min_Value=cost[0];
        for(i=0; i<10; i++)
            {
                if(cost[i] < Min_Value)
                    {
                        Min_Value = cost[i];
                    }
            }

        printf("\nThe range of Personal Computer cost is from %.2f to %.2f\n\n ", Min_Value, Max_Value);

    }