//find the price of item when discount is given
#include<stdio.h>
void main()
{
	int p, d;
	printf("enter the price of item\t");
	scanf_s("%d", &p);
	if (p <= 20000)
	{
		if (p <= 10000)
		{
			if (p <= 5000)
			{
				if (p <= 2000)
				{
					printf("no discount");
				}
				else {
					d = p * 5 / 100;
					printf("final price of item including 5%% discount =  %d", p - d);
				}
			}
			else
			{
				d = p * 10/ 100;
				printf("final price of item including 10%% discount  =  %d", p - d);
			}
		}
		else
		{
			d = p * 15 / 100;
			printf("final price of item including 15%% discount  =  %d", p - d);
		}
	}
	else
	{
		d = p * 20 / 100;
		printf("final price of item including 20%% discount  =  %d", p - d);
	}
	
}