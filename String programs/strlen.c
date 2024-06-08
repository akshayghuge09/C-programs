// find out lenght of string
#include<stdio.h>
void str_len(char*, int*);
void main()
{
	char a[20] = "first bit solution";
	int* len=0;
	printf("%s", a);
	str_len(a, &len);
	printf("\nlength of string = %d", len);
}
void str_len(char* x, int* l)
{
	int i,count=0;
	for (i = 0; x[i] != '\0'; i++)
	{
		count = 1;
	}
	if (count == 1)
	{
		*l = i;
	}
}