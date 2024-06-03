#include<stdio.h>
struct student
{
	unsigned int a:3;
	unsigned int b:4;
};
union c
{
	struct student stu;
};
int main()
{
	union c ptr;


	ptr.stu.a = 7;
	ptr.stu.b = 10;

	printf("%d  %d",ptr.stu.a,ptr.stu.b);

}
