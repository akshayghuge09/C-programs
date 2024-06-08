//create structure of employee
#include<stdio.h>
struct employee
{
	int emp_id, salary;
	char name[20];
};
void main()
{
	struct employee E1, E2;
	printf("enter the employee id\tname of employee\tsalary\n");
	printf("employee 1\n");
	scanf("%d%s%d", &E1.emp_id, &E1.name, &E1.salary);
	printf("employee 2\n");
	scanf("%d%s%d", &E2.emp_id, &E2.name, &E2.salary);
	printf("employee 1\nID  =  %d\nname  =  %s\nsalar  =  %d\n", E1.emp_id, E1.name, E1.salary);
	printf("employee 2\nID  =  %d\nname  =  %s\nsalar  =  %d", E2.emp_id, E2.name, E2.salary);

}