//uppercase to lowercase
#include<stdio.h>
#include<string.h>
void lowercase(char a[40]);
void main()
{
	char a[40];
	printf("enter the uppercase =");
	scanf("%s", &a);
	lowercase(a);



}
void lowercase(char a[40])
{
	int i;
	for (i = 0; a[i] != '\0'; i++)
	{
		if(a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] = a[i] + 32;
		}
	}
	printf("lowercase %s", a);
}