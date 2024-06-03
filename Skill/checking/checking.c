#include<stdio.h>

int number1,number2;			//Defining global variable
int addition();

int main()
{
printf("Enter two numbers");	//Getting two numbers from user
fflush(stdout);
scanf("%d%d",&number1,&number2);//Reading value from console
addition();						//Function calling
}

int addition()
{
int sum = 0;					//Defining Local variable
sum = number1 + number2;		//Adding of two numbers
printf("Addition of two numbers is: %d \n",sum);//Printing the sum value
fflush(stdout);
}