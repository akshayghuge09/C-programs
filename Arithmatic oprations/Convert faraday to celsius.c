//finding f from c (temp)
#include<stdio.h>
//#include<conio.h>
int main()
{
	double f, c;
	printf("enter value for celsius");
	scanf("%lf", &c);
	f = (9.0/5.0*c)-32;
	printf("fahreheit =%lf  %lf", f,c);
	return 0;
}
