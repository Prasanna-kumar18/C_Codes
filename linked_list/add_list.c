/*
 * add_list.c
 *
 *  Created on: 15-Jun-2023
 *      Author: Prasanna Kumar
 */

//Adding the nodes at the beg.

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

static struct node *head;
static struct node *newnode;
void print(struct node *p)
{
	while(p!=NULL)
	{
		printf("%d ",p->data);
		//fflush(stdout);
		p=p->next;
	}
}

struct node* something(struct node *headref, int n)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = n;
	newnode->next = headref;
	headref=newnode;
	return headref;
}


int main()
{
	int num, value;
	printf("\nEnter the number of nodes");
	fflush(stdout);
	scanf("%d",&num);

	for(int i=0;i<num;i++)
	{
		scanf("%d",&value);
		head = something(head,value);
	}
	//sort(head);
	print(head);
	return 0;
}
