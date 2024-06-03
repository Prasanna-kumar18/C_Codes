#include<stdio.h>

void func(int a, int b, int c, float *avg, int *per);       //Declaring the function name as func.

int main()
    {
        int m1, m2, m3, per;
        float avg;
        printf("\nEnter the mark 1 of student: ");
        scanf("%d", &m1);
        printf("\nEnter the mark 2 of student: ");
        scanf("%d", &m2);
        printf("\nEnter the mark 3 of student: ");
        scanf("%d", &m3);

        func(m1, m2, m3, &avg, &per);               // Calling the function with the given values and the address of avg and per.

        printf("\nThe average of 3 marks is: %.2f",avg);        //returned value from the Function Func
        printf("\nThe Percentage of 3 marks is: %.2f %%\n",per);     //returned value from the Function Func

    }


//Function Definition
void func(int a, int b, int c, float *avg, int *per)        //Called function with the same attributes from calling function.
    {
        *avg = (a+b+c)/3;           //Calculating the avg
        *per = (((a+b+c)/300)*(100));       //Calculating the precentage
        
    } 

  