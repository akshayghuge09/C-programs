//factorial of given no.
#include<stdio.h>
void main()
{
	int i, a, fact = 1;
	printf("enter the no.");
	scanf_s("%d", &i);
	a = i;
	for(i;i>0;i--)
	{

		fact = fact * i;
		printf("factors=%d\n", fact);
		
	}
	printf("factorial of %d = %d", a, fact);

}