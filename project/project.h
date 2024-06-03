/*
 * project.h
 *
 *  Created on: 28-Jun-2022
 *      Author: Prasanna Kumar
 */

/*
 * project.h
 *
 *  Created on: 28-Jun-2022
 *      Author: Abhinav Kumar
 */

#ifndef PROJECT_H_
#define PROJECT_H_

#include <stdio.h>
#include<stdlib.h>

//singly linked list
struct node {
    int data;
    struct node *next;
};

//head of two singly linked list


void addNodehead(int data, struct node **head);
void addNodetail(int data, struct node **head);
void shortlist(struct node *head);
void printList(struct node *n);
void unionoflist(struct node *first, struct node *second);

#endif /* PROJECT_H_ */
