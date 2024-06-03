#include <stdio.h>
#include <pthread.h>

static int a = 10;

void add(int b);
void sub(int b);
void mul(int b);
void divi(int b);
void modu(int b);

int main()
{
pthread_t t1,t2,t3,t4,t5;

pthread_create(&t1,NULL,add,2);
pthread_create(&t2,NULL,sub,3);
pthread_create(&t3,NULL,mul,4);
pthread_create(&t4,NULL,divi,5);
pthread_create(&t5,NULL,modu,5);

return 0;

}


void add(int b)
{
int sum;
sum = a + b;
printf("Sum = %d\n",sum);
fflush(stdout);

pthread_exit(NULL);
}

void sub(int b)
{
int sub;
sub = a - b;
printf("sub = %d\n",sub);
fflush(stdout);

pthread_exit(NULL);
}

void mul(int b)
{
int mul;
mul = a * b;
printf("Mul = %d\n",mul);
fflush(stdout);

pthread_exit(NULL);
}

void divi(int b)
{
int divi;
divi = a / b;
printf("Division = %d\n",divi);
fflush(stdout);

pthread_exit(NULL);
}

void modu(int b)
{
int mod;
mod = a % b;
printf("Modulus = %d\n",mod);
fflush(stdout);

pthread_exit(NULL);
}