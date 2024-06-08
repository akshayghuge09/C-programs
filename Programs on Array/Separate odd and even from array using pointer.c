//odd even element of array
#include<stdio.h>
void main()
{
	int a[6];
	int* x;
	x = a;
	int i;
	printf("enter the array elements");
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &a[i]);

	}
	for (i = 0; i < 6; i++)
	{
		if (x[i] % 2 == 0)
		{
			printf("%d is even\n", x[i]);

		}
		else
		{
			printf("%d is odd\n", x[i]);
		}
	}
}