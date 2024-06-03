/*
 * Single_Link.c
 *
 *  Created on: 24-Aug-2023
 *      Author: Prasanna Kumar
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *First;
	struct node *Second;
	struct node *Third;
	struct node *Fourth;

	First = malloc(sizeof(struct node));
	Second = malloc(sizeof(struct node));
	Third = malloc(sizeof(struct node));
	Fourth = malloc(sizeof(struct node));

	First->data = 10;
	Second->data = 20;
	Third->data = 30;
	Fourth->data = 40;

	First->next = Second;
	Second->next = Third;
	Third->next = Fourth;
	Fourth->next = NULL;

	for(;First!=NULL;First=First->next)
	{
		printf("%d\n",First->data);
		//First = First->next;	//Allocating next address
	}

}


