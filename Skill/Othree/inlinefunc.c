

#include <stdio.h>
static inline int mul (int a, int b) //inline function declaration
{
return (a * b);
}

int main ()
{
int p;
p = mul(5,6);
printf ("The product of the numbers = %d \n", p);
return 0;
}
