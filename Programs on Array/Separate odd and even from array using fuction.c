//odd even element of array
#include<stdio.h>
void odd_even(int[], int);
void main()
{
	int a[6];
	int i;
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &a[i]);

	}
	odd_even(a, 6);
}
void odd_even(int* ptr, int x)
{
	int i;
	for (i = 0; i < x; i++)
	{
		if (ptr[i] % 2 == 0)
		{
			printf("%d is even\n", ptr[i]);

		}
		else
		{
			printf("%d is odd\n", ptr[i]);
		}
	}
}