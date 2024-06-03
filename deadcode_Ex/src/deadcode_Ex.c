
#include <stdio.h>

int main(void)
{
	int x, y;
	printf("Enter two numbers\n");
	scanf("%d%d",&x,&y);

	if(x!=y)
	{
		if(x == y)
		{
			printf("x and y are equal");
		}
		else if (x > y)
		{
			printf("x is greater than y");
		}
		else if (x < y)
		{
			printf("x is lesser than y");
		}
	}
	else
	{
		printf("X and y are equal");
	}
}
