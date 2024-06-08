//find prime no from array element
#include<stdio.h>
void main()
{
	int a[5];
	int* p;
	p = a;
	int i, j, count;
	printf("enter array element");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 5; i++)
	{
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