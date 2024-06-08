// which is greater from given no.
#include<stdio.h>
int greater(int, int, int);
void main()
{
	int num,x, y, z;
	printf("enter any 3 nos.\n");
	scanf_s("%d  %d  %d", &x, &y, &z);
	num=greater(x, y, z);
	printf("greater no is %d", num);
}
int greater(int a, int b, int c)
{


	if (a > b)
	{
		if (a > c)
		{
			return a;
		}
		else
		{
			return c;
		}
	}
	else
	{
		if (b > c)
		{
			return b;
		}
		else
		{
			return c;
		}
	}
}