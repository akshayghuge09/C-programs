//factorial of given no.
#include<stdio.h>
void main()
{
	int i, a;
	printf("enter the no.");
	scanf_s("%d", &i);
	for (a = 1; a <= i; a++)
	{
		if (i % a == 0)
		{
			printf("%d\n", a);
		}
	}
}