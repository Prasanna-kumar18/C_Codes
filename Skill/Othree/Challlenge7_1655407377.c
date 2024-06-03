/*
 * Challlenge7a.c
 *
 *  Created on: 15-Jun-2022
 *      Author: TARUN M
 */

/****** Includes ******/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/****** GLobal Declaration ******/
// Structure node of the linked list
typedef struct node {
    int num;
    struct node * next;
} listnode;

/****** Function to swap numbers ******/
void swapElements( listnode *a , listnode *b )   {
	int temp = a->num;
    a->num   = b->num;
    b->num   = temp;
} /* end of swapElements */

/****** Function perform Bubble Sort ******/
void bubbleSort( listnode * start ) {

	/****** Local Variables ******/
	int swapped;
	listnode *p1;
    listnode *p2 = NULL;

    /****** Checking if memory is allocated ******/
    if ( start != NULL )   {
    	/****** Iterate through out the linked list ******/
    	do {
			swapped = 0;
			p1 = start;

			/****** Local Variables ******/
			while (p1->next != p2)   {
				if (p1->num > p1->next->num)   {
					swapElements(p1, p1->next);
					swapped = 1;
				}
				p1 = p1->next;
			}
			p2 = p1;
		} while (swapped);
    }
    else {}
} /* end of bubbleSort */

/****** Function to insert an element to the beginning of the linked list ******/
void insertElement( listnode ** start_ll, int data)   {
	/****** Creating a node using the global struct element ******/
	listnode * p3 = ( listnode * ) malloc( sizeof( listnode ));

	/****** Check if memory has been allocated ******/
    if ( p3 != NULL )   {
    	p3->num   = data;
		p3->next  = *start_ll;
		*start_ll = p3;
    }
    else   {
    	printf("\nMemory not allocated !\n");
    }
} /* end of insertElement */

/****** Function to print nodes in a given linked list ******/
void displayList( listnode * start ) {

	/****** Local variables ******/
	int count = 0;
	listnode *ll = start;

	/****** Print the elements of the linked list ******/
    printf("\n Elements of the linked list are :- \n");

    /****** Iterate through the linked list & count the nodes ******/
    while ( ll != NULL )   {
        printf("\t%d\t=>", ll->num );
        count++;
        ll = ll->next;
    }

    printf("\tNULL\n");
    printf("\nNumber of nodes in the list = %d\n", count );
} /* end of displayList */


/****** Function to enter the elements of the linked list ******/
listnode * listElements()   {

	/****** Local variables ******/
	int choice = 1, element;
	listnode *ll_h = 0;

	/****** Looping as long as the user wants ******/
    while ( choice )   {

    	printf("\nEnter an element...\n");
		scanf("%d", &element );

		insertElement( &ll_h , element );

        fflush(stdin);
        printf("\nDo you want to continue - Enter 1 for YES & 0 for NO...");
        scanf("%d", &choice);
    }

    return ( ll_h );
} /* end of listElements */

/****** Function to delete the first occurence of a value ******/
void deleteNode( listnode ** linked_list, int uwV)   {

	/****** Local struct Variables ******/
	listnode *temp = *linked_list, *prev_node;

	/****** Search for the key through the linked list ******/
    while (( temp != NULL ) && ( temp->num != uwV )) {
    	prev_node = temp;
        temp = temp->next;
    }

    /****** If key is present in linked list ******/
    if ( temp != NULL ) {

    	/****** Unlink this node from linked list ******/
    	prev_node->next = temp->next;

    	/****** Free the memory ******/
    	free(temp);
    }
    else {}
} /* end of deleteNode */

/****** Main Function ******/
int main() {

	/****** Local Variables ******/
	listnode *linked_list = 0;
	int unwanted_val = 51;

	/****** Entering the contents of the list ******/
	linked_list = listElements( linked_list );

	/****** Printing the list ******/
	displayList( linked_list );

	/****** Delete a value from the linked list ******/
	deleteNode( &linked_list , unwanted_val );

	/****** Sorting the linked list using Bubble Sort ******/
	bubbleSort( linked_list );

	/****** Printing the list ******/
	displayList( linked_list );

	/* formal main return */
	return 0;
} /* end of Main */
