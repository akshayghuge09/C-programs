//sum of 1st and last digit of a no.
#include<stdio.h>
int sum(int);
void main()
{
	int n,a;
	printf("enter the no.");
	scanf("%d", &n);
	a=sum(n);

	printf("\nsum of 1st & last digit = %d",a );
}
int sum(int n)
{
	int  i, x, sum;

	x = n % 10;
	printf("\nlast no = %d", x);
	for (i = 1; i < n; i++)
	{
		n = n / 10;
	}
	printf("\n1st no.=%d ", n);
	sum = x + n;
	return sum;
}