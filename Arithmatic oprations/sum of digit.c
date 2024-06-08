//sum of digit using while
#include<stdio.h>
void main()
{
	int num, r, sum=0,i ;
	printf("enter four number");
	scanf_s("%d", &num);
	i = num;
	while (num>0)
	{
		r = num % 10;
		sum = sum + r;
		num = num / 10;
	}
	printf("sum of digit of %d =%d",i, sum);
}