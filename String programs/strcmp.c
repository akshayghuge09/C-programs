// compair the string , do not use built in function
#include<stdio.h>
void str_cmp(char*, char*, int*);
void main()
{
	char a[20] = "first bit  ";
	char b[20] = "solution";
	int* i=0;
	printf("%s\n%s", a, b);
	str_cmp(a, b,&i);
	if (i == 1)
	{
		printf("\nstrings are not same");
	}
	else
	{
		printf("\nstring are same");
	}
	

}
void str_cmp(char* x, char* y, int* a)
{
	int j,flag=0;
	
	for (j = 0;j<20; j++)
	{
		if (x[j] != y[j])
		{
			flag = 1;
			break;
		}
	}
	*a = flag;
	
}
