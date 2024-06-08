
#include<stdio.h>
int fact(int);
void main()
{
	int a,x;
	printf("enter the no.\n");
	scanf_s("%d", &a);
	x = fact(a);
	printf("factorial of no. is %d", x);
}
int fact(int n)
{
	int i, fact = 1;
	
	for (i = 1; i <= n; i++)
	{
		fact = fact * i;
	}

	return fact;

}