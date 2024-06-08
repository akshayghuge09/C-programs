// which is greater from given no useing logical operator
#include<stdio.h>
void main()
{
	int a, b, c;
	printf("enter the nos.");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b && a > c)
		printf("a is greater");
	if (b > a && b > c)
		printf("b is greater");
	if (c > a && c > b)
		printf("c is greater");

}