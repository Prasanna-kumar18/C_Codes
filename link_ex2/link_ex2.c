/*
 * link_ex2.c
 *
 *  Created on: 17-Oct-2022
 *      Author: Prasanna Kumar
 */

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *prev;
	struct node *next;
};

int main()
{
	int count=0;
	//Creating the node
	struct node *head;
	struct node *one;
	struct node *two;
	struct node *three;

	//Memory allocation

	one = malloc(sizeof(struct node));
	two = malloc(sizeof(struct node));
	three = malloc(sizeof(struct node));

	//Linking for next
	one->next = two;
	two->next = three;
	three->next = one;

	//Linking for prev
	one->prev = three;
	three->prev = two;
	two->prev = one;

	head = one;
	//Assigning the values

	printf("Enter the values of the node");
	fflush(stdout);
	while(count<3)
	{
	scanf("%d",&head->data);
	count++;
	head = head->next;
	}

	count = 0;


	//Display
	printf("\n The entered values are in next");
	while(count<3)
		{
		printf("\n%d",head->data);
		count++;
		head = head->next;
		}

	count = 0;
	printf("\n The entered values are in prev");
		while(count<3)
			{
			printf("\n%d",head->data);
			count++;
			head = head->prev;
			}
}
