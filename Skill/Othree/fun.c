#include<stdio.h>
int B = 10; //declaring global variable
void display()
{
	int A = 2; // declaring local variable
	printf("Display Function\n");
	printf("A = %d\n",A);
	printf("B = %d\n",B);
	B = B+5;
}
int main (void)
{
	int C = 7; // declaring local variable
	B = B+2;
	display();
	printf("\nMain Function\n");
	printf("C = %d\n",C);
	printf("B = %d\n",B);
	return 0;
}