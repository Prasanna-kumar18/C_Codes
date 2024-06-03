/* 7b) The task of inserting a value into the current location in a sorted linked list involves two operations. 

Finding the node before which the new node has to be inserted. We call this node ‘Key node’.
Creating a new node with the value to be inserted and inserting the new node by manipulating pointers appropriately

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node         //creating the structure
    {
        int values;
        struct node *next;
    };

void PrintList(struct node *p)              //function for printing the list of nodes.
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

        //Assigning the memory for list nodes
        first = malloc(sizeof(struct node));
        second = malloc(sizeof(struct node));
        third = malloc(sizeof(struct node));

        first->values = 1;
        second->values = 2;
        third->values = 3;

        //Linking the list to next values.
        first->next = second;
        second->next = third;
        third->next = NULL;

        head = first;
        printf("\n");
        PrintList(head);            //Calling the function to print all nodes.

        printf("Do you wish to add an element to the list (Y/N):");
	    fflush(stdout);
	    scanf("%s",&ch);

	if(ch =='Y' | ch =='y')         //Condition check to add new node if Y or y press it enters the loop.
		{
			struct node *fourth;
			fourth =  malloc(sizeof(struct node));

			fourth->values = 4;

			fourth->next = head;
			head->next = first;
			first->next = second;
			second->next = third;
            third->next = NULL;

            struct node *temp1 = fourth;            //Creating the another list for the new node.
            printf("\nValues after adding new node at top: \n");
			//printing the values including new nodes.
            while(temp1!=NULL)
			{
				printf("%d\n",temp1->values);
				fflush(stdout);
				temp1 = temp1->next;
			}
		}
	else if(ch == 'N' | ch =='n')
	{
		printf("\nProgram Ends\n");
		fflush(stdout);
	}
	return 0;
        
    }