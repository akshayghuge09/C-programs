// check given no. is perfect or not
#include<stdio.h>
void main()
{
	int num, i, n, count;
	printf("enter the number");
	scanf_s("%d", &n);

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