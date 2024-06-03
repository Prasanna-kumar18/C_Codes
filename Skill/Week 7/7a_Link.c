/*
7a) Write a program to create a linear linked list interactively handprint out the 
list and total number of items in the list.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node         //creating the strcture named node
    {
        int values;
        struct node *next;
    };

void PrintList(struct node *p)          //function for printing the list of nodes.
    {
        int count = 0;
        while (p!= NULL)
            {
                printf("%d\n", p->values);
                p = p->next;
                count++;
            }
        printf("\nCount: %d\n",count);
    }

int main()
    {
        char ch;
        //Creating the list and assigning it to NULL.
        struct node *head;
        struct node *first = NULL;
        struct node *second = NULL;
        struct node *third = NULL;
        struct node *fourth = NULL;
        struct node *five = NULL;
        
        //Assigning the memory for list nodes
        first = malloc(sizeof(struct node));
        second = malloc(sizeof(struct node));
        third = malloc(sizeof(struct node));
        fourth= malloc(sizeof(struct node));
        five= malloc(sizeof(struct node));

        first->values = 1;
        second->values = 9;
        third->values = 6;
        fourth->values = 12;
        five->values = 10;

        //Linking the list to next values.
        first->next = second;
        second->next = fourth;
        //third->next = fourth;
        fourth->next = five;
        five->next = NULL;

        head = first;
        printf("\n");
        PrintList(head);        //calling the function to print.
       
    }