//find the no. in array element
#include<stdio.h>
void main()
{
	int a[5];
	int i,n;
	printf("enter the array element\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("enter the no for search\n");
	scanf("%d", &n);
	int flag = 0;
	for (i = 0; i < 5; i++)
	{
		if (a[i] == n)
		{
			printf("the given no is in array %d\n", a[i]);
			flag = 1;
			break;
		}
		

		
	}if (flag == 0)
	{
		printf("no. is not in array");
	}
}