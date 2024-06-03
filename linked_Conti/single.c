/*
 * single.c
 *
 *  Created on: 16-Nov-2023
 *      Author: Prasanna Kumar
 */

#include <stdio.h>
#include <stdlib.h>


struct node
{
	int value;
	struct node *next;
	struct node *prev;
};

int main()
{
	//Creating Node
	struct node *one;
	struct node *two;
	struct node *three;
	struct node *Head;

	//Allocating the size to node
	one = malloc(sizeof(struct node));
	two = malloc(sizeof(struct node));
	three = malloc(sizeof(struct node));

	//Assigning value to node

	one->value = 10;
	two->value = 20;
	three-> value = 30;

	//Link all the nodes
	one->next = two;
	two->next = three;
	three->next = one;

	three->prev = two;


	//Printing the values of nodes

	head = one;
	for(int i=0;i<3;i++)
	{
	printf("%d\n",head->value);
	head = head->next;
	}


}
