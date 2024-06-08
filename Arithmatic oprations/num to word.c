//to convert two digit no. to word 
#include<stdio.h>
void main()
{
	int num, q, r;
	printf("enter two digit no.");
	scanf_s("%d", &num);
	q = num / 10;				//gives 2nd digit
	r = num % 10;				//gives 1st digit
	if (q == 1 && r == 1)
	{
		printf("eleven");
	}
	else if (q == 1 && r == 2)
	{
		printf("twelve");
	}else if (q == 1 && r == 3)
	{
		printf("thirteen");
	}else if (q == 1 && r == 4)
	{
		printf("fourteen");
	}else if (q == 1 && r == 5)
	{
		printf("fifteen");
	}else if (q == 1 && r == 6)
	{
		printf("sixteen");
	}else if (q == 1 && r == 7)
	{
		printf("seventeen");
	}else if (q == 1 && r == 8)
	{
		printf("eighteen");
	}
	else if (q == 1 && r == 9)
	{
		printf("nineteen");
	}
	if (q == 2)
	{
		printf("twenty");
	}
	else if (q == 3)
	{
		printf("thirty");
	}
	else if (q == 4)
	{
		printf("fourty");
	}
	else if (q == 5)
	{
		printf("fifty");
	}
	else if (q == 6)
	{
		printf("sixty");
	}
	else if (q == 7)
	{
		printf("seventy");
	}
	else if (q == 8)
	{
		printf("eighty");
	}
	else if (q == 9)
	{
		printf("ninety");
	}
	if (q!=1&&r == 1)
	{
		printf("\tone");
	}
	else if (q != 1 && r == 2)
	{
		printf("\ttwo");
	}
	else if (q != 1 && r == 3)
	{
		printf("\tthree");
	}
	else if (q != 1 && r == 4)
	{
		printf("\tfour");
	}
	else if (q != 1 && r == 5)
	{
		printf("\tfive");
	}
	else if (q != 1 && r == 6)
	{
		printf("\tsix");
	}
	else if (q != 1 && r == 7)
	{
		printf("\tseven");
	}
	else if (q != 1 && r == 8)
	{
		printf("\teight");
	}
	else if (q != 1 && r == 9)
	{
		printf("\tnine");
	}
}