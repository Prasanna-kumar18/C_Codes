/*#include <stdio.h>

int main()
{
	int x = 10, *p;

	p = &x;

	printf("The value of x is %d",x);
	printf("\nThe value of x is %d",&x);
	printf("\nThe value of x is %d",*p);
	fflush(stdout);
}
*/

#include <stdio.h>

int main()
{
	int a,b;
	a = &b;
	printf("%d",a);
	printf("\n%d",&b);
}
