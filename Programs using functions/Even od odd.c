// check no. is even or odd type 4
#include<stdio.h>
int even_odd(int);
void main()
{
	int z, a;
	printf("enter th no.");
	scanf("%d", &a);
	z=even_odd(a);
	if (z == 0)
	{
		printf("even no.");
	}
	else
	{
		printf("odd no.");
	}
}
int even_odd(int x)
{
	int i;
	i = x % 2;
	return i;

}