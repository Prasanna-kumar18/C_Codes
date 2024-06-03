 /*



#include<stdio.h>
int main()
{
   int a, b, c;
   char *p = 0;
   int *q = 0;
   int *r = 0;
   a = (int)(p + 1);
   b = (int)(q + 1);
   c = (int)(r + 1);
   printf("%d %d  %d",a, b, c);
   return 0;
}



#include<stdio.h>
void func(char i, char *b,...);

int main()
{
	func(2,"bb","aa");
}

void func(char a, char *b,...)
{
	int j;
	char *ptr=b;
	j=0;
	while(j<a)
	{
		printf("%s", ptr);
		++j;
		++ptr;
	}
}


#include<stdio.h>
int main()
{
	float a[10][10];
	float *p, *q;
	float *e, *f;
	p = &a[5][8];
	q = &a[10][9];
	e = p-q+a;		//Expression 1
	f = a+p-q;		//Expression 2
}


#include<stdio.h>
int main(){
	int a = 36;
	int *ptr;
	ptr = &a;
	printf("%u %u", *&ptr , &*ptr);
	return 0;
}


#include<stdio.h>
int main()
{
 int i = 5,*ptr;
 ptr= &i;
 void *vptr;
 vptr = &ptr;
 printf("\nValue of iptr = %d ", ?);
 return 0;
}



#include<stdio.h>
unsigned long int (*function())[5]
	{
		static unsigned long int arr[5] = {2, 3, 5, 7, 11};
		printf("%d", *arr);
		return &arr;
	}
int main()
	{
		unsigned long int (*ptr)[5];
		ptr = function();
		printf("%d", *(*ptr + 4));
		return 0;
	}



#include<stdio.h>
#include<string.h>
int main()
{
	char a = 30, b = 5;
	char *p = &a, *q = &b;
	printf("%d", p - q);
	return 0;
}



#include <stdio.h>
int main()
{
int a = 320;
char *ptr;
ptr =(char *)&a;
printf("%d",*ptr);
return 0;
}


#include<stdio.h>
int main(){
	int a = 25, b;
	int *ptr, *ptr1;
	ptr = &a;
	ptr1 = &b;
	b = 36;
	printf("%d %d",*ptr, *ptr1);
	return 0;
}


#include<stdio.h>
void add(int *, int *);

void add(int *x, int *y)
{
	int z=0;
	*x--;
	z = *x + *y;
	printf("%d",z);
}

int main()
{
	int a = 6, b = 8;
	add(&a,&b);
}


#include<stdio.h>

int main()
{
	int a[5] = {1,2,3,4,5};

	for(int i=0;i<5;i++)
	{
		printf("%d\n",*a);
		*a = *a+1;
		//*a++;
	}

}


#include <stdio.h>
int main ()
{
    int a[] = {2, 1, 6, 9, 5};
    int i, j, m;
    i = ++a[1];
    j = a[1]++;
    m = a[i++];
    printf("%d, %d, %d, %d", i, j, m,a[1]);
    return 0;
}




#include<stdio.h>

int main()
{
	int *ptr;
	int a=10,b=5;

	printf("%d\n",&a);
	printf("%d\n",&b);

	ptr = &a;

	--ptr;

	printf("%d",*ptr);
}


#include <stdio.h>
int main( void )
{
    //Declare 1D array
    int aiData [3]= {1,3,4};
    printf("%u\n\n",*aiData); // 1
    printf("%u\n\n",*(aiData+1)); // a[1] ' address, 0
    printf("%u\n\n",*aiData+1);
    return 0;
}


#include <stdio.h>
int main( void )
{
    //Declare 2D array
    int aiData [3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    printf("%d\n\n",**aiData);		// 1
    printf("%d\n\n",**aiData+1);	// 2
    printf("%d\n\n",*(*(&aiData+1)));	// 2
    printf("%d\n\n",*(*aiData+1)+1);// 3
    return 0;
}


#include <stdio.h>
int main( void )
{
    //Declare 2D array
    int aiData [3][3]= {1};
    printf("%u\n\n",*aiData);
    printf("%u\n\n",*aiData+1);
    return 0;
}


#include <stdio.h>
int main( void )
{
	int *ptr;
	int *q;
	int a=2,b, c=5;

	printf("%d\n",&a);

	ptr = &a;
	printf("%d\n",ptr);

	ptr++; // ptr = ptr+2 4000 -> 4008

	b = ptr+a;

	printf("%d", b);

}

#include <stdio.h>
int main()
{
    int data = 0;
    int arr[] = {11, 12, 13, 14, 15, 16, 17,18,19};
    data = (arr + 3)[-1];
    printf("%d\n", data);
    return 0;
}


#include <stdio.h>

char* myName()
	{
		char *name = "Skill";
		return name;
	}

int main(void)
	{
		printf("%s", myName());
	}


#include <stdio.h>

struct st
{
	int a;
	int b;
};

void func(struct st *);

int main()
{
	struct st ab = {65, 989};
	struct st *pq = &ab;
	func(pq);
}

void func(struct st *p)
{
	char *pt;
	p->a = 768;
	p->b = 100;
	pt = (char*)p;
	printf("%d", *++pt);
}



#include <stdio.h>
int main()
	{
		int i=5;
		printf("%d",i=++i==6);
	}

#include <stdio.h>
int main()
	{
		char p[ ]="%d\n";
		p[1] = 'c';
		printf(p,65);
	}



#include <stdio.h>
int main()
	{
		int x=5, y=-6;
		printf("%d",(x&&y));
		return 0;
	}




#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    for (int i = 0; i<10; i++)
    {
        //num = rand() % 100;
        printf("%d\n",(rand()%100));
    }
}



# include <stdio.h>
void second_largest(int arr[], int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    	printf("%d",arr[1]);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[4];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
   second_largest(a,n);

}



#include <stdio.h>
void getBinary(int);
int main()
{
int num=0;
printf("Enter an integer number :"); //fflush(stdout);
scanf("%d", &num);
printf("\nBinary value of %d is =", num); //fflush(stdout);
getBinary(num);
return 0;
}
void getBinary(int n)
{
int loop; for (loop=15; loop>=0; loop--) {
if( (1 << loop) & n)
	printf("1");
else
printf("0");
}
}




// c program to demonstrate
// example of strupr() function.

#include<stdio.h>
#include <string.h>

int main()
{
char str[] = "CompuTer ScienCe PoRTAl fOr geeKS";

printf("Given string is: %s\n", str);

printf("\nstring after converting to the uppercase is: %s", strupr(str));
return 0;
}


#include<stdio.h>

int main()
{
	int arr[5], i=0;

	while(i<5)
	{
		arr[i] = ++i;
		printf("%d",arr[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
*/

#include <stdio.h>



int main()
{
	int a=5;
	return 0;
}
