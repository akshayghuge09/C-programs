//use operator based on that perform the desierd operation
#include<stdio.h>
void main()
{
	int no1, no2;
	int ch;
	do 
	{

		printf("1.addition\n");
		printf("2.subtraction\n");
		printf("3.division\n");
		printf("4.multiplication\n");
		printf("5.mod\n");
		printf("enter the choice\n");
		scanf_s("%d", &ch);
		printf("enter two nos.\n");
		scanf_s("%d%d", &no1, &no2);
		if (ch == 1)
		{
			printf("%d+%d=%d", no1, no2, no1 + no2);
		}
		else if (ch == 2)
		{
			printf("substraction=%d", no1 - no2);
		}else if (ch == 3)
		{
			printf("division=%d", no1 / no2);
		}else if (ch == 4)
		{
			printf("multiplication=%d", no1 * no2);
		}else if (ch == 5)
		{
			printf("mod=%d", no1 % no2);
		}
	} while (ch == 6);
}