#include<stdio.h>

//Defining the macros with value.
#define BASE_SAL 1500       
#define BONUS 200
#define COMMISSION 0.02

void main()
    {
        int quantity;
        float quantity_price, gross_sal;

        printf("\nEnter the Number of unit Sold: ");
        scanf("%d", &quantity);
        printf("\nEnter the cost of each unit: ");
        scanf("%f",&quantity_price);

        gross_sal = ((BASE_SAL) + (quantity * BONUS) + (quantity_price * COMMISSION));

        printf("\nThe Gross salary of the Employee is: Rs. %.2f\n", gross_sal);       //.2f defines the floating variable with restricted to 2 values after decimal point.
    }