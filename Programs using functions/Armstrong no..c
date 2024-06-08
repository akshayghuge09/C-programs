#include<stdio.h>
int arm_s(int);
void main()
{
	int a,x;
	printf("enter the no.");
	scanf_s("%d", &a);
	x=arm_s(a);
	if (a == x)
	{
		printf("\ngiven no. is armstrong no.");

	}
	else
	{
		printf("\ngiven no. is not armstrong");
	}
}
int arm_s(int a)
{
	int  b, no, z = 0;
	int i, j, r, k, x = 1;

	b = a;
	
	for (i = 1; i < a; i++)
	{
		a = a / 10;
	}
	printf("n ==  %d", i - 1);
	for (j = 0; j < b; b)
	{
		r = b % 10;
		for (k = 1; k < i; k++)
		{
			x = x * r;
		}
		z = x + z;
		x = 1;

		b = b / 10;
	}printf("\nz = %d", z);
	return z;
}