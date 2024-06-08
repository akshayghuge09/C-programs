
#include<stdio.h>
float area(float);
float peri(float);
void main()
{
	float a,b, r;
	printf("enter radius of circle");
	scanf("%f", &r);
	a=area(r);
	printf("area = %f", a);
	printf("\n***********************************\n");
	b=peri(r);
	printf("perimeter = %f", b);
}
float area(float r)
{
	float area;
	area = 3.14 * r * r;
	return area;
}
float peri(float r)
{
	float  peri;
	peri = 2 * 3.14 * r;
	return peri;
}