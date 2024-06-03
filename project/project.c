/*
 * project.c
 *
 *  Created on: 28-Jun-2022
 *      Author: Prasanna Kumar
 */

/*
 * project.c
 *
 *  Created on: 28-Jun-2022
 *      Author: Abhinav Kumar
 */

#include"project.h"

void addNodehead(int data, struct node **head)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// adding a node after the tail

void addNodetail(int data, struct node **head)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    struct node *temp = head;
    while(temp->next != NULL){
      temp = temp->next;
    }
    temp->next = newNode;

}
void shortlist(struct node *head)
{
	struct node *current = head, *index = NULL;
	int temp;

	if(head == NULL)
	{
	     return;
    }
	else
	{
		 while(current != NULL)
		 {
			//Node index will point to node next to current
			index = current->next;
			while(index != NULL)
			{
				//If current node's data is greater than index's node data, swap the data between them
				if(current->data > index->data)
				{
					temp = current->data;
					current->data = index->data;
					index->data = temp;
				}
				index = index->next;
			}
			current = current->next;
		}
	}
}



 // to display the elements of list
void printList(struct node *n)
{
    while (n != NULL)
    {
        printf(" %d ", n->data);
        n = n->next;
    }
}

void unionoflist(struct node *first, struct node *second)
{
	struct node *index = NULL;
    int a[100];
    int i = 0;
	printf("\nthe first list is:");
	printList(first);

	printf("\nthe second list is:");
    printList(second);

    if((first == NULL)||(second == NULL))
    {
    	return;
    }
    else
    {
    	while(second != NULL)
    	{
    		if(first->data == second->data)
    		{
    			a[i] = first->data;
    			i = i+1;
    		}
    	}
    }

}




