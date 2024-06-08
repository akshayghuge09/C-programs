//odd even element of array
#include<stdio.h>
void main()
{
	int a[6];
	int i;
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &a[i]);

	}
	for (i = 0; i < 6; i++)
	{
		if (a[i] % 2 == 0)
		{
			printf("%d is even\n", a[i]);

		}
		else
		{
			printf("%d is odd\n", a[i]);
		}
	}
}