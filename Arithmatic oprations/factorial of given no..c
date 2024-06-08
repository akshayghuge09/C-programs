//factorial of given no.
#include<stdio.h>
void main()
{
	int i,a, fact = 1;
	printf("enter the no.");
	scanf_s("%d", &i);
	a = i;
	while (i > 0)
	{

		fact = fact * i;
		i--;
	}
	printf("factorial of %d = %d", a,fact);

}