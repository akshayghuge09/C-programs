//how to work unary operator
#include<stdio.h>
void main()
{
	int a = 20;
	int b , c;
	a++;
	printf("postfix increament= %d", a++);
	printf("\n%d", a);
	printf("\nprefix increament= %d", ++a);


	b = a--;
	printf("\n\n%d  %d",a, b);
	c = --a;
	printf("\n\n%d  %d",a, c);


	c=a++ || b++;
	printf("\n\n%d  %d  %d", a, b, c);

	c = a++ && b++;
	printf("\n\n%d  %d  %d", a, b, c);

	a++, ++a, a++, a;
	printf("\n%d", a);


}