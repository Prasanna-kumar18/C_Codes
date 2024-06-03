#include<stdio.h>

//Defining the macro with the predefined value.
#define SOAP_COST 45           
#define ONION_COST 15
#define TOMATO_COST 50
#define DRINKS_COST 60

void main()
    {
        int id,quantity=0;
        float amount=0;
        //printf("\n\nWELCOME TO RAMA DEPARTMENTAL STORE\n*******************************\n List Of Items \n\n 1. Soap \n 2. Onion \n 3. Tomato \n 4. Drinks \n 5. Exit\n");
        printf("%d",SOAP_COST);
    start:
        printf("\nEnter the Product Number: ");
        scanf("%d",&id);
        switch (id)                     //USing switch case to check the input.
        {
        case 1:
                printf("\nEnter the Quantity: ");
                scanf("%d",&quantity);
                amount = (amount) + (SOAP_COST * quantity);             //Calculating the total amount with quantity and defined macro value.
                goto start;
                
        case 2:
                printf("\nEnter the No of Kgs: ");
                scanf("%d",&quantity);
                amount = (amount) + (ONION_COST * quantity);            //Calculating the total amount with quantity and defined macro value.
                goto start;

        case 3:
                printf("\nEnter the No of Kgs: ");
                scanf("%d",&quantity);
                amount = (amount) + (TOMATO_COST * quantity);           //Calculating the total amount with quantity and defined macro value.
                goto start;

        case 4:
                printf("\nEnter the Quantity: ");
                scanf("%d",&quantity);
                amount = (amount) + (DRINKS_COST * quantity);           //Calculating the total amount with quantity and defined macro value.
                goto start;

        case 5:
                printf("\n\n***************************\nThe Total Cost is Rs. %.2f\n***************************\n", amount);
                break;
        
        default:
                printf("\n**Enter the Valid Product ID\n");             //If any given value is not given then this case will print.
                goto start;
        }
    }