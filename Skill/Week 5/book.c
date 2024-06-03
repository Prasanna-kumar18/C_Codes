/* 5a) A book shop uses a personal computer to maintain the inventory of books 
that are being sold at the shop. The list includes details such as author, 
title, price, publisher, stock position, etc. whenever a customer wants a book. 
The shopkeeper inputs the title and author of the book and the system replies 
whether it is in the list or not. If it is not, an appropriate message is displayed. 
If a book is in the list, then the system displays the book details and asks for the number of copies. 
If the requested copies are available, the total cost of the books is displayed: otherwise, 
the message “Required copies are not in stock” is displayed. Write a program to accomplish this. 
And the program should use a template to define the structure of the book. Note the date of publication, 
a member of record structure, is also defined as structure.*/

#include <stdio.h>
#include <string.h>

struct BOOK
    {
        char book_name[20];
        char author_name[20];
        char publisher_name[30];
        float cost;
        int avail_copy;
    };

typedef struct BOOK list;

int main()
    {
        char book[20];
        int copy,i,flag;
        float Tot_cost;

        list x[4] = {{"Harry potter","J K Rowling","bloomsbury",550.00,30},{"war and peace"," Leo Tolstoy","Russian Messenger",875.00,20},{"mein kampf","Adolf Hitler","Franz",450.50,30},{"Percy Jackson","Rick Riordan","Disney",390.50,35}};

        printf("\nEnter the book name:");
        gets(book);

        printf("\nEnter no. of copies:");
        scanf("%d",&copy);

        for(i=0;i<4;i++)
            {
                if(strcmp(book,x[i].book_name)==0)
                    {
                        printf("\nBook Name: %s\nAuthor: %s\nPublisher: %s\nCost: %.2f\n",x[i].book_name,x[i].author_name,x[i].publisher_name,x[i].cost);
                        if(copy <= x[i].avail_copy)
                            {
                                Tot_cost = ((x[i].cost)*(copy));
                                printf("\nRequested no of copies available in stock" );
                                printf("\nTotal price for requested copies is:%.2f\n",Tot_cost);
                                break;
                            }
                        else
                            {
                                printf("\nRequested no of copies not available in stock: ");
                                break;
                            }
                    }
                else
                    flag=1;
            }
        if(flag==1)
            printf("\n Requested Book is not available in Stock");
        return 0;
    }