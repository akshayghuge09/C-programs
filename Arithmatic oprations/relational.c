//use of relational operator
#include<stdio.h>
void main()
{
	int a = 2, b = 3, c = 2;
	printf("%d==%d is %d\n", a, b, a == b);
	printf("%d==%d is %d\n", a, c, a == c);
	printf("%d<%d is %d\n", a, b, a < b);
	printf("%d>%d is %d\n", a, b, a > b);
	printf("%d<=%d is %d\n", a, b, a <= b);
	printf("%d>=%d is %d\n", a, c, a >= c);
	printf("%d!=%d is %d\n", a, b, a != b);
	printf("%d!=%d is %d\n", a, c, a != c);
	printf("%d==%d is %d\n", a, b, a == b);
}