#include <stdio.h> 

int main() 
{   
    int num=0;

    printf("\nEnter the number: ");       //Get the input from User
    scanf("%d", &num);

    printf("\nRoman Letter for Number %d is: ",num);        


    //1997 - m
    //997 -  mcm
    //97 - mcmxc
    //7 - mcmxv
    //2 - mcmxvii

    while(num != 0)         //Continue the iteration till the number reaches Zero.
    {

        if (num >= 1000)       //Roman Equivalent for 1000 is m
        {
           printf("m");
           num -= 1000;         // Subract the value to get the remaining number
        }

        else if (num >= 900)   //Roman Equivalent for 900 is cm
        {
           printf("cm");
           num -= 900;          // Subract the value to get the remaining number
        }        

        else if (num >= 500)   //Roman Equivalent for 500 is d
        {           
           printf("d");
           num -= 500;          // Subract the value to get the remaining number
        }   

        else if (num >= 400)   //Roman Equivalent for 400 is cd
        {
           printf("cd");
           num -= 400;          // Subract the value to get the remaining number
        }

        else if (num >= 100)   //Roman Equivalent for 100 is c
        {
           printf("c");
           num -= 100;          // Subract the value to get the remaining number             
        }

        else if (num >= 90)    //Roman Equivalent for 90 is xc
        {
           printf("xc");
           num -= 90;          // Subract the value to get the remaining number                                    
        }

        else if (num >= 50)    //Roman Equivalent for 50 is l
        {
           printf("l");
           num -= 50;          // Subract the value to get the remaining number                                                           
        }

        else if (num >= 40)    //Roman Equivalent for 40 is xl
        {
           printf("xl");           
           num -= 40;           // Subract the value to get the remaining number
        }

        else if (num >= 10)    //Roman Equivalent for 10 is x
        {
           printf("x");
           num -= 10;           // Subract the value to get the remaining number
        }

        else if (num >= 9)     //Roman Equivalent for 9 is ix
        {
           printf("ix");
           num -= 9;            // Subract the value to get the remaining number             
        }

        else if (num >= 5)     //Roman Equivalent for 5 is v
        {
           printf("v");
           num -= 5;           // Subract the value to get the remaining number                          
        }

        else if (num >= 4)     //Roman Equivalent for 4 is iv
        {
           printf("iv");
           num -= 4;           // Subract the value to get the remaining number                                                 
        }

        else if (num >= 1)     //Roman Equivalent for 1 is i
        {
           printf("i");
           num -= 1;          // Subract the value to get the remaining number                                                                         
        }

    }

    return 0;
}