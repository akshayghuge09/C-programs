// sum of element of array
#include<stdio.h>
void main()
{
	int a[5];
	int i,sum;
	printf("enter the element of array\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum = sum + a[i];
	}printf("\nsum of elements = %d", sum);
}