//swaping uesing function
#include<stdio.h>
int swaping(int, int);
void main()
{
	int a, b;
	printf("enter two no.");
	scanf("%d%d", &a, &b);
	swaping(a, b);
}
int swaping(int a, int b)

{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("swaping  %d  %d", a, b);
}