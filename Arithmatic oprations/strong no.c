// check given no. is strong or not
#include<stdio.h>
void main()
{
	int num, i, n, count = 1,r,j,fact=0;
	printf("enter the number");
	scanf_s("%d", &num);
	n = num;
	for (i =0; i < num; num)
	{
		r = num % 10;
		num = num / 10;
		for (j=1 ; j <=r; j++)
		{
			count = count * j;
		}
		fact = fact + count;
		count = 1;
	}
	printf("%d", fact);
	if (fact == n)
	{
		printf("no. is strong");
	}
	else
	{
		printf("no. is not strong");
	}
}