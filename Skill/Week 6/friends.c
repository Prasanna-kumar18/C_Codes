/*
6 A)
A gang of 3 friends went out for a party. They have ordered the food and are waiting. 
Suddenly another friend came to the same restaurant and joined these friends. 
Now they have to add some more dishes to the menu. Write a c program to add the more 
dishes to the menu and calculate the party expenses. (Use structures)

*/

#include <stdio.h>
#include <string.h>

struct menu
{
	char item[10];
	int price;
};

typedef struct menu m;

int main()
{
	int qty,i,n,q,total = 0;
	char ip[10], ch[1];

	m x[5] = {{"Idly",6},{"Dosai",20},{"Pongal",25},{"Poori",25},{"Vadai",6}};

    more:                                       //Lable to loop if neeeded to add more items.
	printf("Enter no of items:");
	scanf("%d",&n);
    printf("\n************Items:************\n 1. Idly \n 2. Dosai \n 3. Pongal \n 4. Poori \n 5. Vadai\n");

	for(i=0;i<n;++i)
	{
		printf("\nEnter item %d number ",i+1);
		scanf("%s",&ip);
        printf("\nEnter the quantity ");
        scanf("%d", &qty);

		if(strcmp(ip,x[i].item)!=0)
		{
			q = 1;
			q = qty*x[i].price;
            printf("**************************************\n");
            printf("\nITEM -- Price -- Total Amount\n");
			printf("%s -- %d -- %d \n",x[i].item,x[i].price,q);
            printf("\n**************************************\n");
			
		}
		//printf("%d\n",q);
		
		total = total + q;
		//break;
	}

	    
    //code for adding more data

    printf("\nDo you wish to add more items? (y or n)");
    scanf("%s", ch);
    if((strcmp(ch,"y")==0))
        {
            goto more;
        }
    else
        printf("**************************************\n");
        printf("\nYour total bill amount is: %d",total);
        printf("\n\n**************************************");
}
