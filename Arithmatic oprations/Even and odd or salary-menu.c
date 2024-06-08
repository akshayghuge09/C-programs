//display menu 1.even or odd 2.basic salary
#include<stdio.h>
void main()
{
	int ch;
	printf("1.even or odd\n");
	printf("2.basic salary\n");
	printf("enter the choice\n");
	scanf_s("%d", &ch);
	if (ch == 1)
	{
		int a, x;
		printf("Enter the no.");
		scanf_s("%d", &a);
		x = a % 2;
		if (x == 0)
		{
			printf("given on. is even");
		}
		else
		{
			printf("given no. is odd");
		}
	}
	if (ch == 2)
	{
		int salary, da, ta, hra;
		printf("enter employee salary");
		scanf_s("%d", &salary);
		if (salary <= 5000)
		{
			printf("\nda=%d", da = salary * 10 / 100);
			printf("\nta=%d", ta = salary * 20 / 100);
			printf("\nhra=%d", hra = salary * 25 / 100);
			printf("\ntotal salary=%d", salary + da + ta + hra);
		}
		else {
			printf("\nda=%d", da = salary * 15 / 100);
			printf("\nta=%d", ta = salary * 25 / 100);
			printf("\nhra=%d", hra = salary * 30 / 100);
			printf("\ntotal salary=%d", salary + da + ta + hra);
		}

	}
}