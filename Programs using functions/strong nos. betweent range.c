// check given no. is strong or not type 3

#include<stdio.h>
int strong_no(int);
void main()
{
	int x, num,n;
	printf("enter the number");
	scanf_s("%d", &n);
	for (num = 1; num <= n; num++)
	{
		x = strong_no(num);
		if (num == x)
		{
			printf("%d\n",x);
		}
	}
}
int strong_no(int num)
{
	int  i, n, count = 1, r, j, fact = 0;

	for (i = 0; i < num; num)
	{
		r = num % 10;
		num = num / 10;
		for (j = 1; j <= r; j++)
		{
			count = count * j;
		}
		fact = fact + count;
		count = 1;
	}
	return fact;

}