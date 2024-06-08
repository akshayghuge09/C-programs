#include<stdio.h>
void main()
{
	int num, i, n, count = 0;
	printf("enter the range");
	scanf_s("%d", &n);
	for (num = 1; num < n; num++)
	{
		count = 0;
		for (i = 2; i <= num/2; i++)
		{
			if (num % i == 0)
			{
				count = 1;
				break;
				
			}
		}
		if (count == 0)
		{
			printf(" %d\n",num);
		}
		
	}
}