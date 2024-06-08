// create a student structure
#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	int marks;

};
void main()
{
	struct student s1,s2,s3;
	printf("entere the information of 1st student \troll no.\tName\tmarks\n");
	scanf("%d %s %d", &s1.roll, &s1.name, &s1.marks);
	printf("roll no  =   %d\nname  =   %s\nmarks  =   %d%%\n", s1.roll, s1.name, s1.marks);
	printf("entere the information of 2nd student \troll no \tName\tmarks\n");
	scanf("%d %s %d", &s2.roll, &s2.name, &s2.marks);
	printf("roll no  =   %d\nname  =   %s\nmarks  =   %d%%\n", s2.roll, s2.name, s2.marks);
	printf("entere the information of 3rd student \troll no.\tName\tmarks\n");
	scanf("%d %s %d", &s3.roll, &s3.name, &s3.marks);
	printf("nroll no  =   %d\nname  =   %s\nmarks  =   %d%%\n", s3.roll, s3.name, s3.marks);
}