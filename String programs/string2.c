#include<stdio.h>
#include<string.h>
void main()
{
	int i, x;

	char a[20] = "first bit";
	char b[20] = "akshay";
	
		printf("%s", a);

	
	strcat(b, a);
	printf("\n");

	printf("%s\n", b);
	strncat(b, a, 8);

	printf("%s\n", b);
}