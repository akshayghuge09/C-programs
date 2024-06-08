//length of string , copy string , compair string
#include<stdio.h>
#include<string.h>
void main()
{
	int i,x;
	
	char a[20]="first bit";
	char b[20];

	for (i = 0; i < 20; i++)
	{
		printf("%c", a[i]);
		b[i] = a[i];
	}
	printf("\nlength of string=%d\n", strlen(a));
	printf("after copy = ");
	for (i = 0; i < 20; i++)
	{
		printf("%c", b[i]);
	}
	x=strcmp(b, a);
	printf("\ncmp = %d", x); // if comparisen is same return '0'
	if (x == 0)
	{
		printf("string are same ");
	}
}