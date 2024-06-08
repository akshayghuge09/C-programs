//find max and min element of array
#include<stdio.h>
void main()
{
	int a[5];
	int* ptr;
	ptr = a;
	int i, max, min;
	printf("enter the array element\n");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &a[i]);
	}
	max = ptr[0];
	for (i = 0; i < 5; i++)
	{
		if (ptr[i] > max)
		{
			max = ptr[i];
		}
	}printf("\nmax element of given array is =%d", max);
	min = ptr[0];
	for (i = 0; i < 5; i++)
	{
		if (ptr[i] < min)
		{
			min = ptr[i];
		}
	}printf("\nmin element of given array =%d", min);
}