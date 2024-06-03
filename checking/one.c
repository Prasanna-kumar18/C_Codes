#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node* next;
}node;

node *createLinkedlist(int n)

{
int i = 0;
node *head;   // Used to store address of first node and it will return at the end of this function
node *temp;   // for temporary storing the node
node *p;     // for iterating the list
for (i=0; i<=n; i++)
{
temp = (node*)malloc(sizeof(node));
printf("Enter the element %d : ", i+1);
//fflush(stdout);
scanf("%d",&(temp->data));
temp->next = NULL;

if(head == NULL)         // If list is empty then make temp as first node
{
head = temp;
}
else
{
p = head;           // If list has already an elements
while(p->next != NULL)
p = p->next;
p->next = temp;
}
}
return head;
}

void displayList(node* head)

{
node* p = head;
while(p != NULL)
printf("%d ",p->data);
p = p->next;

}

int main()
{
int n = 0;
node* head = 0;
printf("Enter no. of nodes: ");
//fflush(stdout);
scanf("%d",&n);
head = createLinkedlist(n);
displayList(head);
return 0;

}
