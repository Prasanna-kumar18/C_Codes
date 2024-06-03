#include <stdio.h>
int summ(int num1, int num2);
int subb(int num1, int num2);
int multi(int num1, int num2);
int divi(int num1, int num2);

int main()
{ 
int x,y, choice,result;
int (*ope[4])(int, int);
ope[0] = summ;
ope[1] = subb;
ope[2] = multi;
ope[3] = divi;

printf("Enter two integer numbers: ");
scanf("%d%d", &x, &y);
printf("Enter 0 to sum, 1 to subtract, 2 to multiply, or 3 to divide: ");
scanf("%d", &choice);
result = ope[choice](x, y);
printf("%d", result);
return 0;}

int summ(int x , int y)
{
return(x+y);
}

int subb(int x , int y)
{
return(x-y);
}

int multi(int x , int y)
{
return(x*y);
}

int divi(int x , int y)
{
if(y!=0)
return(x/y);
else
return 0;
}