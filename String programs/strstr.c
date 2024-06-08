// check is the string is present in another string
#include<stdio.h>
void strstr(char*, char*);
void main()
{
	char a[40], b[40];
	printf("enter the two words in string\n ");
	scanf("%s", a);
	printf("enter the string to be checked\n");
	scanf("%s", b);
	strstr(a, b);
}
void strstr(char* a, char* b)
{
	int i=0,j=0,count =0;
	for(i=j=0;a[i];i++)
	{
		if (a[i] == b[j])
		{
			j++;
		}
		else if (a[i] == b[0])
		{
			j = 1;
		}
		else
		{
			j = 0;
		}
		if (b[j] == '\0')
		{
			count++;
		}
	}
	printf("%d\n", count);
	if (count != 0)
	{
		printf("string is present");

	}
	else
	{
		printf("string is not present");
	}
}