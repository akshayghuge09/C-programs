// concatentes the string , do not use built in function
#include<stdio.h>
void str_cat(char*, char*);
void main()
{
	char a[20] = "first bit  ";
	char b[20] = "solution";
	printf("%s\n%s\n", a, b);
	str_cat(a, b);
	printf("merage string == %s", a);
}
void str_cat(char* x, char* y)
{
	
	int i=0,j=0;
	while (x[i] != '\0')
	{
		i++;
	}
	for(j=0;y[j]!='\0';j++)
	{
		x[i] = y[j];
		i++;
	}
	x[i] = '\0';
}