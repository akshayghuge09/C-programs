//find max and min element of array
#include<stdio.h>
void my_min(int*, int);
void my_max(int[], int);
void main()
{
	int a[5];
	int i;
	printf("enter the array element\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	my_max(a, 5);
	my_min(a, 5);
	
}
void my_min(int* ptr, int x)
{
	int min, i;
	min = ptr[0];
	for (i = 0; i < x; i++)
	{
		if (ptr[i] < min)
		{
			min = ptr[i];
		}
	}printf("\nmin element of given array =%d", min);
}
void my_max(int* ptr, int a)
{
	int max,i;
	max = ptr[0];
	for (i = 0; i < a; i++)
	{
		if (ptr[i] > max)
		{
			max = ptr[i];
		}
	}printf("\nmax element of given array is =%d", max);

}