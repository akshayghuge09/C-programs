// fibonacci series type 4
#include<stdio.h>
int fibonacci(int,int);
void main()
{
	int f, j, a = 0, b = 1,temp1;
	printf("enter the no.");
	scanf("%d", &f);
	printf("fibonacci series = %d %d\t", a, b);
	for (j = 0; j <= f; j++)
	{
		temp1 = fibonacci(a, b);
		a = b;
		b = temp1;
		printf("%d\t", temp1);
	}
	
}
int fibonacci(int i,int j)
{
	
	int temp;

	temp = i + j;
	
	return temp;
}