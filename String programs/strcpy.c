// copy the string , do not use built in function
#include<stdio.h>
void main()
{
	char a[20] = "first bit  ";
	char b[20];
	int i;
	for(i=0;i<20;i++)
	{
		printf("%c", a[i]);
	}

	for (i = 0; i < 20; i++)
	{
		b[i] = a[i];
	}
	for (i = 0;b[i]!='\0'; i++)
	{
		printf("%c", b[i]);
	}
}