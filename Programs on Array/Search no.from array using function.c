//find the no. in array element
#include<stdio.h>
int i;
void my_search(int[], int, int);
void main()
{
	int a[5];
	int n;
	printf("enter the array element\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("enter the no for search\n");
	scanf("%d", &n);
	my_search(a,n, 5);
}
void my_search(int* p, int x,int z)
{
	int flag = 0;
	for (i = 0; i < z; i++)
	{
		if (p[i] == x)
		{
			printf("the given no is in array %d\n", p[i]);
			flag = 1;
			break;
		}



	}if (flag == 0)
	{
		printf("no. is not in array");
	}

}