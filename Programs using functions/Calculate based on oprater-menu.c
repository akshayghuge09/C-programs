//use operator based on that perform the desierd operation
#include<stdio.h>
void main()
{
	int no1, no2;
	int ch;
	printf("\n+,-,/,*,%%\n");
	
		printf("enter the choice\nenter n for exit\n");
		scanf_s("%d", &ch);
		scanf_s("%d%d", &no1, &no2);
		if (ch == '+')
		{
			printf("enter two nos.\n");
			printf("%d+%d=%d", no1, no2, no1 + no2);
		}
		else if (ch == '-')
		{
			printf("enter two nos.\n");
			printf("%d-%d=%d", no1, no2, no1 - no2);
		}
		else if (ch == '/')
		{
			printf("enter two nos.\n");
			printf("%d/%d=%d", no1, no2, no1 / no2);
		}
		else if (ch == '*')
		{
			printf("enter two nos.\n");
			printf("%d*%d=%d", no1, no2, no1 * no2);
		}
		else if (ch == '%')
		{
			printf("enter two nos.\n");
			printf("%d%%%d=%d", no1, no2, no1 % no2);
		}
		else
		{
			printf("you enter invalid operator");
		}
	}
