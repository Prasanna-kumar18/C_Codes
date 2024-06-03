/*
 * Creating_a_node_list.c
 *
 *  Created on: Jun 14, 2022
 *      Author: Admin
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct{int value; struct node *next;}node;
node *stnode;

void createnodelist(int n);
void displaynodelist();

int main()
{
	int n;
	printf("\n Enter the number of nodes of the linked list: ");
	fflush(stdout);
	scanf(" %d",&n);
	createnodelist(n);
	printf("\n The data in the linked list is: ");
	displaynodelist();
	return(0);
}

void createnodelist(int n)
{
	node *fnnode, *temp;
	int num, i;
	stnode = (node *)malloc(sizeof(node));
	if(stnode == NULL)
	{
		printf("\n The memory could not be allocated");
	}
	else
	{
		printf("\n Enter data for node 1: ");
		fflush(stdout);
		scanf(" %d",&num);
		stnode->value = num;
		stnode->next = NULL;
		temp = stnode;
	}

	//Creating 'n' nodes and adding them to the linked list

	for(i=2;i<=n;i++)
	{
		fnnode = (node *)malloc(sizeof(node));
		if(fnnode == NULL)
		{
			printf("\n The memory could not be allocated");
		}
		else
		{
			printf("\n Enter data for node %d: ",i);
			fflush(stdout);
			scanf(" %d",&num);
			fnnode->value = num;
			fnnode->next = NULL;
			temp->next = fnnode;
			temp = temp->next;
			printf("\n Address of temp: %d",temp->next);
		}

	}
}

void displaynodelist()
{
	node *temp;
	if(stnode == NULL)
	{
		printf("\n The list is empty");
	}
	else
	{
		temp = stnode;
		while(temp != NULL)
		{
			printf("\n Data: %d, Next Address: %d, Address of stnode: %d",temp->value, temp->next, stnode->next);  //Prints the data of the current node
			temp = temp->next;  //Advances the position of the current node
		}
	}
}
