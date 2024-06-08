#include<stdio.h>
void str_rev(char*,char*);
void main()
{
	char a[10] = "solution";
	char b[10];
	printf("%s\n", a);
	str_rev(a,b);
	printf("%s", b);
}
void str_rev(char*x,char*y)
{
	
	int i, j,count=0,flag=0;
	while (x[count] != '\0')
	{
		count++;
	}
	i = count-1;
	for (j = 0; j < count; j++)
	{
		y[j] = x[i];
		i--;
		

	}
	y[j] = '\0';
	

}