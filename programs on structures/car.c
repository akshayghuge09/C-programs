//car information
#include<stdio.h>
typedef struct car
{
	int model_no;
	char name[20], color[10];
}car;
void main()
{
	int no;
	car c1, c2,c3;
	printf("enter the info of cars");
	printf("car 1");
	scanf("%d%s%s", &c1.model_no, &c1.name, &c1.color);
	printf("car 2");
	scanf("%d%s%s", &c2.model_no, &c2.name, &c2.color);
	printf("car no.\tmodel no.name\tcolor\n");
	printf("%d\t%d\t%s\t%s\n", 1, c1.model_no, c1.name, c1.color);
	printf("%d\t%d\t%s\t%s\n", 2, c2.model_no, c2.name, c2.color);
}