#include<stdio.h>
void main()
{
	int num, i, count ;
	printf("enter the no.");
	scanf_s("%d", &num);

		for (i = 2; i <= num /2; i++)
		{
			if (num % i == 0)
			{
				count = 1;
				break;
			}
		}
		if (count == 0)
		{
			printf("no. is prime %d", num);
		}
		else
		{
			printf("no is not prime");
		}
	}
}