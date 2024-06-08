/*accept the price from user ask user if he is student and purchased more than 500 then discount is 20% 
otherwise 10% and he is not student then he has to purchased more than 600 discount will be 15% otherwise 
no discount*/
#include<stdio.h>
void main()
{
	int ch, p, disc;
	printf("Are you student \n 1.yes \n2.No\n");
	scanf_s("%d", &ch);
	printf("\nenter the purchased amount\n");
	scanf_s("%d", &p);
	if (ch == 1)
	{
		if (p > 500)
		{
			disc = p * 20 / 100;
			printf("price after 20%% discount  =  %d", p - disc);
		}
		else
		{
			disc = p * 15 / 100;
			printf("price after 15%% discount = %d", p - disc);
		}
	}
	else
	{
		if (p > 600)
		{
			disc = p * 15 / 100;
			printf("price after 15%% discount = %d", p - disc);
		}
		else
		{
			printf("no discount and price = %d", p);
		}
	}
}
