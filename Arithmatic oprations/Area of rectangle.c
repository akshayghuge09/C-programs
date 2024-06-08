//area of rectangle and perimeter
#include<stdio.h>
void main()
{
	int l = 4, b = 5;
	int area, per;
	printf("length=%d\n breadth=%d\n", l, b);
	area = l * b;
	per = 2 * (l + b);
	printf("area=%d\n", area);
	printf("perimeter=%d", per);
}