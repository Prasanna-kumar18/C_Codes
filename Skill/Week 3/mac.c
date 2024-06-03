#include<stdio.h>

#define SUM(a,b)    ((a)+(b))           //Defining the macro as SUM with two arguments a and b
#define BIG(x,y)    ((x>y)?(x):(y))     //Defining the macro as BIG with arguments x and y, if x is greater than y then x returns else y
#define ABS(n)      ((n<0)?(-n):(n))    //Defining the macro as ABS with argument n, if n is greater than 0 it returns -n or n value
#define CONV(c)     ((c)-32)            //Defining the macro as CONV, since upper case is 32 values lesser than lower case retrning 32 lesser value.



void main()
    {
        char ch;
        float num, num1, num2;
        printf("\nEnter the Lower case character :");                   //Getting two values from user
        scanf("%c",&ch);
        printf("\nThe uppercase character is: %c  \n ", CONV(ch));      //getting the Defined macro CONV value
        printf("\nEnter Two numbers : ");                               //Getting two numbers from user
        scanf("%f%f",&num1, &num2);                                     //Stored it in num1 & num2 variables.
        printf("\nThe Sum of Two numbers %f and %f is : %f \n",num1, num2, SUM(num1,num2));     //Resulting the SUM macro value
        printf("\nThe Biggest number between %f and %f is : %f\n",num1, num2, BIG(num1,num2));  //Resulting BIG macro value
        printf("\nEnter any number ");
        scanf("%f",&num);
        printf("\nThe absolute number is %f \n",ABS(num));              //Returning ABS macro value.
                
    }
