/* 7c) Create a linked list of 3 nodes or items. Also prints their values and node count.

Write a comprehensive program that uses 6 functions to create, query, add and delete nodes of linked lists.

*/


#include<stdio.h>

struct list
{
    int number;
    struct list *next;
};

typedef struct list node;
node *head=NULL, *last=NULL;

//Function declaration.
void create_list();
void print_list();
void insert_item(int value);
void delete_item(int value);
void search_item(int value);

int main()
{
    int key, value, ch;

begin:
    printf("\n1. Create List\n2. Print List\n3. Insert List\n4. Delete List\n5. Search List\n0. Exit\nEnter your choice: ");
    scanf("%d",&ch);

    switch (ch)
        {
            case 1:
                    printf("\nCreate Linked List\n");
                    create_list();
                    print_list();
                    goto begin;
            case 2:
                    print_list();
                    goto begin;
            case 3:
                    printf("\nInsert new item at last\n");
                    scanf("%d", &value);
                    insert_item(value);
                    print_list();
                    goto begin;
            case 4:
                    printf("\nEnter a value, which you want to delete from list\n");
                    scanf("%d", &value);
                    delete_item(value);
                    print_list();
                    goto begin;
            case 5:
                    printf("\nEnter an item to search it from List\n");
                    scanf("%d", &value);
                    search_item(value);
                    goto begin;
    
            case 0:
                    break;
            default:
                    printf("\nEnter the correct Choice");
                    goto begin;
        }
    
    return 0;
}

void create_list()
{
    int val;

    while(1)
    {
        printf("Input a number. (Enter -1 to exit)\n");

        scanf("%d", &val);

        if(val==-1)
            break;

        insert_item(val);       //Calling the function.
    }

}

void insert_item(int value)
{
    node *temp_node;
    temp_node = (node *)malloc(sizeof(node));       //Assigning the memory of node.

    temp_node->number=value;
    temp_node->next=NULL;

    //If head is NULL the its first element.
    if(head==NULL)
    {
        head=temp_node;
        last=temp_node;
    }
    else    //If not add the new element next to it.
    {
        last->next=temp_node;
        last=temp_node;
    }

}

void delete_item(int value)
{
    node *myNode = head, *previous=NULL;
    int flag = 0;

    while(myNode!=NULL)
    {
        if(myNode->number==value)       //Checking the entered  value is in node.
        {
            if(previous==NULL)
                head = myNode->next;
            else
                previous->next = myNode->next;

            printf("%d is deleted from list\n", value);

            flag = 1;
            free(myNode); //need to free up the memory to prevent memory leak
            break;
        }

        previous = myNode;
        myNode = myNode->next;
    }

    if(flag==0)
        printf("Value not found!\n");
}

void search_item(int value)
{
    node *searchNode = head;
    int flag = 0;

    while(searchNode!=NULL)
    {
        if(searchNode->number==value)
        {
            printf("%d is present in this list. Memory address is %d\n", value, searchNode);
            flag = 1;
            break;
        }
        else
            searchNode = searchNode->next;
    }

    if(flag==0)
        printf("Item not found\n");

}

void print_list()
{
    printf("\nFull linked list is\n");

    node *myList;
    myList = head;

    while(myList!=NULL)
    {
        printf("%d ", myList->number);

        myList = myList->next;
    }
    puts("");
}