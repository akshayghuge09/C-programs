//find max and min element of array
#include<stdio.h>
void main()
{
	int a[5];
	int i,max,min;
	printf("enter the array element\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	max = a[0];
	for (i = 0; i < 5; i++)
	{
		if (a[i]>max)
		{
			max = a[i];
		}
	}printf("\nmax element of given array is =%d", max);
	min = a[0];
	for (i = 0; i < 5; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}printf("\nmin element of given array =%d", min);
}