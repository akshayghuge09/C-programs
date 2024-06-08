//fibonacci series
#include<stdio.h>
void main()
{
	int i, n, a=0,b=1,f;
	printf("enter the no.");
	scanf_s("%d", &n);
	printf("fibonacci series \n%d\n%d\n", a, b);
	for (i = 0; i <= n; i++)
	{
		f = a + b;
		printf("%d\n", f);
		a = b;
		b = f;

	}
}