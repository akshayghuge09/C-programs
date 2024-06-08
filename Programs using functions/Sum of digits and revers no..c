//sum of digits useing function type3
#include<stdio.h>
void sum_digit(int);
void main()
{
	int n;
	printf("enter 3 digit no");
	scanf("%d", &n);
	sum_digit(n);

}
void sum_digit(int a)
{
	int  r, i, revers=0,sum = 0;
	
	for (i = 0; i < a; a)
	{
		r = a % 10;
		a = a / 10;
		revers = (revers * 10) + r;
		sum = sum + r;
	}printf("sum of digit=%d\n", sum);
	printf("revers no =%d", revers);
}