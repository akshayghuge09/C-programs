#include<stdio.h>
void main()
{
	int a, b,no,z=0;
	int i,j,r,k,x=1;
	printf("enter the no.");
	scanf_s("%d", &a);
	b = a;
	no = a;
	for (i = 1; i < a; i++)
	{
		a = a / 10;
	}
		printf("n ==  %d", i);
	for (j = 0; j < b; b)
	{
		r = b % 10;
		for (k = 1; k < i; k++)
		{
			x = x * r;
		}
		z=x+z;
		x = 1;
		
		b = b / 10;
	}printf("\nz  %d", z);
	if (no == z)
	{
		printf("\ngiven no. is armstrong no.");

	}
	else
	{
		printf("\ngiven no. is not armstrong");
	}
}