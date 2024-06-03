#include<stdio.h>

int main()
    {
        
        int investment, alt_invest, year=1;

        while (alt_invest > investment)         //To find attractive investment, Looping until the investment is higher than Alternative investment.
        {
            alt_invest = year*90;               //9% of 1000 per year for alternative investment.

            investment = (1000*year) - ((6000) - 2000);   //1000 per year minus the machine cost and salvage value

            year++;                                     //Increment the year

        }
        
        printf("\nThe minimum life of the machine is %d\n", year-1);      //Since we initialize the year as 1, the final output will be year-1.

    }