//menu 1. even or odd 2.sallary type 4
#include<stdio.h>
int even_odd(int);
int total_sallary(int);
void main()
{
	int i;
	printf("1.even or odd\n");
	printf("2.sallary\n");
	printf("enter the choice\n");
	scanf("%d", &i);
	if (i == 1)
	{
		int i, a;
		printf("enter th no.");
		scanf("%d", &a);
		i=even_odd(a);
		if (i == 0)
		{
			printf("even no.");
		}
		else
		{
			printf("odd no.");
		}
	}
	if (i == 2)
	{
		int bs;
		printf("enter basic sallary");
		scanf("%d", &bs);
		int ts = total_sallary(bs);
		printf(" total sallary = %d", ts);
	}
}
int total_sallary(int x)
{
	int ts, da, ta, hra;
	if (x < 5000)
	{
		da = x * 10 / 100;
		ta = x * 20 / 100;
		hra = x * 25 / 100;
		ts = x + da + ta + hra;

	}
	else
	{
		da = x * 15 / 100;
		ta = x * 25 / 100;
		hra = x * 30 / 100;
		ts = x + da + ta + hra;

	}return ts;
}

int even_odd(int x)
{
	int z;
	z = x % 2;
	return z;
}