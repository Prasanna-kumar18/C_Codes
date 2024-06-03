#include<stdio.h>

int main()
    {
        int *ptr,addr;

        addr = &ptr;

        printf("The address of pointer is %d\n", addr);
        addr++;
        printf("The address of pointer is %d\n", addr);
    }