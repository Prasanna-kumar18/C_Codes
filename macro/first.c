#include<stdio.h>

void sum(int);
//void percent(int);

int main()
    {
        int mark[3];
        printf("Enter three marks\n");
        for(int i=0; i<3; i++)
            {
                scanf("%d",&mark[i]);
                sum(mark[i]);
            }


    }

void sum (int a)
    {
        a+=a;
    }
