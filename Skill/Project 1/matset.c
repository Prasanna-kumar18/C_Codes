#include<stdio.h>

struct list
{
    int number1, number2, number3;
    struct list *next;
};

typedef struct list node;
node *head1=NULL, *last1=NULL, *head2=NULL, *last2=NULL, *head3=NULL, *last3=NULL;

//Function declaration.
void create_list1();
void print_list1();
void insert_item1(int value);
void create_list2();
void print_list2();
void insert_item2(int value);
void intersection();
void insert_new();
void print_list3();

int main()
{
    int key, value, ch, tmp;

begin:
    printf("\n1. List 1\n2. List 2\n3. Check Union and Intersection\nEnter your choice: ");
    scanf("%d",&ch);

    switch (ch)
        {
            case 1:
                    printf("\nList 1:\n");
                    create_list1();
                    print_list1();
                    goto begin;

            case 2:
                    printf("\nList 2:\n");
                    create_list2();
                    print_list2();
                    goto begin;
            case 3:
                    break;
            
            default:
                    break;
        }

//Intersection
//------------------------------------------------- 
    struct list *inter1 = head1;
    struct list *inter2 = head2;

    printf("\n\n Intersection: List\n");
    while(inter1!=NULL)
        {
            while(inter2!=NULL)
                {
                    if(inter1->number1 == inter2->number2)
                        {
                            printf("%d",inter2->number2);
                        }
                    inter2 = inter2->next;
                }
            inter1 = inter1->next;
            inter2 = head2;
        }

//Union
//--------------------------------------------------------------
    struct list *union1 = head1;
    struct list *union2 = head2;
    printf("\n\n Union List: \n");
    while(union1!=NULL && union2!=NULL)
        {
            if(union1->number1 != union2->number2)      //checking List 1 and List 2 elements are not equal.
                {
                    tmp = union2->number2;
                    printf("%d ",tmp);
                    insert_new(tmp);                //If both List are not equal then creat new list as union and add that node
                }
                    
            union2 = union2->next;
            union1 = union1->next;

        }
 
//Comparison
//---------------------------------------------------------
    node *myList3;
    node *mylist4;
    myList3 = head3;
    mylist4 = head1;
    int flag = 0;

    while(mylist4 != NULL)
    {
        while(myList3 != NULL )
            {
                if(mylist4->number1 != myList3->number3)            //Comparing the first List with Newly created Union List
                    {
                        flag = 1;
                        
                    }
                else if(mylist4->number1 == myList3->number3)
                    {
                        flag = 0;
                        break;
                    }
                myList3 = myList3->next;
            }

        if(flag == 1)
            printf("%d ", mylist4->number1);
        
        mylist4 = mylist4->next;
        myList3 = head3;
    }
}

//Funtion for inserting new elements as union node.
//-------------------------------------------------
void insert_new(int value)
    {
    
    node *temp_node2;
    temp_node2 = (node *)malloc(sizeof(node));       //Assigning the memory of node.

    temp_node2->number3=value;
    temp_node2->next=NULL;

    //If head is NULL the its first element.
    if(head3==NULL)
    {
        head3=temp_node2;
        last3=temp_node2;
    }
    else    //If not add the new element next to it.
    {
        last3->next=temp_node2;
        last3=temp_node2;
    }
    }

//Linked List functions for List 1
//---------------------------------
void create_list1()
{
    int val;

    while(1)
    {
        printf("Input a number. (Enter -1 to exit)\n");

        scanf("%d", &val);

        if(val==-1)
            break;

        insert_item1(val);       //Calling the function.
    }

}

void insert_item1(int value)
{
    node *temp_node1;
    temp_node1 = (node *)malloc(sizeof(node));       //Assigning the memory of node.

    temp_node1->number1=value;
    temp_node1->next=NULL;

    //If head is NULL the its first element.
    if(head1==NULL)
    {
        head1=temp_node1;
        last1=temp_node1;
    }
    else    //If not add the new element next to it.
    {
        last1->next=temp_node1;
        last1=temp_node1;
    }

}

void print_list1()
{
    printf("\nFull linked list is\n");

    node *myList;
    myList = head1;

    while(myList!=NULL)
    {
        printf("%d ", myList->number1);

        myList = myList->next;
    }
    puts("");
}

//Link list functions for List 2
//------------------------------

void create_list2()
{
    int val;

    while(1)
    {
        printf("Input a number. (Enter -1 to exit)\n");

        scanf("%d", &val);

        if(val==-1)
            break;

        insert_item2(val);       //Calling the function.
    }

}

void insert_item2(int value)
{
    node *temp_node;
    temp_node = (node *)malloc(sizeof(node));       //Assigning the memory of node.

    temp_node->number2=value;
    temp_node->next=NULL;

    //If head is NULL the its first element.
    if(head2==NULL)
    {
        head2=temp_node;
        last2=temp_node;
    }
    else    //If not add the new element next to it.
    {
        last2->next=temp_node;
        last2=temp_node;
    }

}

void print_list2()
{
    printf("\nFull linked list is\n");

    node *myList2;
    myList2 = head2;

    while(myList2!=NULL)
    {
        printf("%d ", myList2->number2);

        myList2 = myList2->next;
    }
    puts("");
}