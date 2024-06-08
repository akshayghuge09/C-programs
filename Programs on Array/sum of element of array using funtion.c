// sum of element of array
#include<stdio.h>
void sum1(int[], int);
void main()
{
	int a[5];
	int i, sum;
	printf("enter the element of array\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	sum1(a, 5);
}
void sum1(int* p, int x)
{
	int i, sum;
	sum = 0;
	for (i = 0; i < x; i++)
	{
		sum = sum + p[i];
	}printf("\nsum of elements = %d", sum);
}