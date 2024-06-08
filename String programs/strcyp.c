//built in function strcpy
#include<stdio.h>
#include<string.h>
void main()
{
	char b[10], a[10];
	int j;
	for (j = 0; j < 10; j++)
	{
		scanf("%c", &a[j]);

	}
	for (j = 0; j < 10; j++)
	{
		printf("%c", a[j]);
	}
	strcpy(b, a);
	for (j = 0; j < 20; j++)
	{
		printf("%c", b[j]);
	}
}