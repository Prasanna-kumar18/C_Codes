/*
 * stack_exam.c
 *
 *  Created on: 14-Oct-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>		//Header File
#include<stdlib.h>

#define MAX 5			//Macros

int top=-1, stack[MAX];

void push();
void pop();
void display();

int main()
{
	int choice;
	while(1)				//Infinite loop
	{
		printf("Enter your choice");
		printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
		fflush(stdout);
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
		default:
			printf("\nEnter the correct choice");
		}

	}

}

void push()			//Function Declaration for push
{
	int val;
	if(top==MAX-1)
	{
		printf("The stack is full");
	}
	else
	{
		printf("Enter the element to be added");
		fflush(stdout);
		scanf("%d",&val);
		top = top+1;		//Number os element is incremented by 1
		stack[top] = val;
	}
}

void pop()		//Function declaration for pop
{
	if(top==-1)
	{
		printf("\nThe stack is Empty");
	}
	else
	{
		printf("\nThe deleted element is %d",stack[top]);
		top = top-1;			//Delete the top value
	}
}

void display()
{
	int i;
	if(top==-1)
	{
		printf("The stack is Empty");
	}
	else
	{
		printf("\nThe elements in stack are");
		fflush(stdout);
		for(i=top;i>=0;i--)
		{
			printf("\n%d",stack[i]);
		}
	}
}
