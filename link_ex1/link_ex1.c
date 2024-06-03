/*
 * link_ex1.c
 *
 *  Created on: 17-Oct-2022
 *      Author: Prasanna Kumar
 */

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int values;
	struct node *next;		//Self referential pointer structure
};

int main()
{
	int count=0;
	//Creating the nodes
	struct node *head;
	struct node *first;
	struct node *second;
	struct node *third;
	struct node *fourth;

	//Allocating a memory for nodes
	first = malloc(sizeof(struct node));
	second = malloc(sizeof(struct node));
	third = malloc(sizeof(struct node));
	fourth = malloc(sizeof(struct node));

	//Giving values to the nodes
	first->values = 10;
	second->values = 15;
	third->values = 30;
	fourth->values=40;

	//Linking the nodes
	first->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = first;


	head = first;
	//print the values
	while(count<8)
	{
		printf("\n%d",head->values);
		head = head->next;
		count++;

	}

}
