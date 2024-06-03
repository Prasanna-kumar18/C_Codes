/*
 * main.c
 *
 *  Created on: 28-Jun-2022
 *      Author: Prasanna Kumar
 */

/*
 * main.c
 *
 *  Created on: 28-Jun-2022
 *      Author: Abhinav Kumar
 */

#include"project.h"



//adding a node before the head

struct node *head1 = NULL;
struct node *head2 = NULL;

int main()
{
    //adding  nodes as a head to list head1  i.e. new node will have the address of head1
	addNodehead(4,&head1);
	addNodehead(3,&head1);
	addNodehead(2,&head1);
	addNodehead(1,&head1);

	printf("\nthe first list is:");
	//fflush(stdout);
	printList(head1);
	//fflush(stdout);

	//adding  nodes as a tail to list head1  i.e. tail will have the address of new node
	addNodetail(5,&head1);
	addNodetail(6,&head1);
	addNodetail(7,&head1);
	addNodetail(8,&head1);

	printf("\nthe first modified list is:");
	fflush(stdout);
    printList(head1);
    fflush(stdout);


    //adding  nodes as a head to list head2  i.e. new node will have the address of head2
    addNodehead(12,&head2);
	addNodehead(18,&head2);
	addNodehead(10,&head2);
	addNodehead(24,&head2);

	//display the results
	printf("\nthe second list is:");
	fflush(stdout);
	printList(head2);
	fflush(stdout);

	//adding  nodes as a tail to list head2  i.e. tail will have the address of new node
	addNodetail(16,&head2);
	addNodetail(1,&head2);
	addNodetail(7,&head2);
	addNodetail(9,&head2);

	//display the added nodes
	printf("\nthe second modified list is:");
	fflush(stdout);
	printList(head2);
	fflush(stdout);

	//shortlisting in acending order
	shortlist(head2);

	//display the result
	printf("\nthe shorted second modified list is:");
	fflush(stdout);
	printList(head2);

	//adding a node without disturbing the order
	addNodetail(100,&head2);
	//display the result
	printf("\nthe shorted second modified list is:");
	fflush(stdout);
    printList(head2);

    //unionoflist(head1,head2);
    return 0;
}



