#include<stdio.h>
void main()
{
	int num, r, sum = 0, revers = 0, i,a;
	printf("enter four number");
	scanf_s("%d", &num);
	a = num;
	printf("sum of digit of %d == ", num);
	for (i = 0; i < num; num)
	{
		r = num % 10;
		num = num / 10;
		sum = sum + r;
		revers = revers * 10 + r;
	}
	printf("%d", sum );
	printf("\nrevers no.=%d", revers);
	if (revers == a)
	{
		printf("given no.palindrome");
	}
	else
	{
		printf("no is not palindrome");
	}
}