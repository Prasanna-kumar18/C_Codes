#include<stdio.h>

int main()
{
    int a=20, *p;
    p = &a;
    printf("The P hexa decimal value is %p", &a);
    printf("\nThe X hexa decimal value is %x", &a);
    printf("\nThe pointer value is %d", *p);
    return 0;
}