//find prime no from array element
#include<stdio.h>
int i;
void prime(int[], int, int);
void main()
{
	int a[5];
	printf("enter array element");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	prime(a, 0, 5);
}
void prime(int*p,int count,int r)
{
for (i = 0; i < r; i++)
{
	int j;
	count = 0;
	for (j = 2; j <= p[i] / 2; j++)
	{
		if (p[i] % j == 0)
		{
			count = 1;
			break;
		}

	}if (count == 0)
	{
		printf("%d is prime\n", p[i]);
	}
}
}