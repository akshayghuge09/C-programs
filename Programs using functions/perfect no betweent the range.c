//perfect no betweent the range
#include<stdio.h>
void perfect(int);
void main()
{
	int n;
	printf("enter the number");
	scanf_s("%d", &n);
	perfect(n);
}
void perfect(int n)
{
	int num, i, count;


	for (num = 1; num <= n; num++)
	{
		count = 0;
		for (i = 1; i < num; i++)
		{
			if (num % i == 0)
			{
				count = count + i;
			}
			//printf("%d\n", count);
		}
		if (count == num)
		{
			printf("\n%d ", num);
		}
	}
}
