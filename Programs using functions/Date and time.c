//create a structure of time and date also perform addtion of two time
#include<stdio.h>
typedef struct time
{
	int hr, min, sec;
}time;
typedef struct date
{

	int dt, mn, yr;
}date;
void add_time(time, time);
void my_date(date);
void convert(time);
time my_time(time);
void main()
{
	date d;
	time t1, t2, t;
	printf("enter the 1st time\nhr\tmin\tsec\n");
	t1 = my_time(t);
	printf("%d\t%d\t%d\n", t1.hr, t1.min, t1.sec);
	printf("enter the 2st time\nhr\tmin\tsec\n");
	t2 = my_time(t);
	printf("%d\t%d\t%d\n", t2.hr, t2.min, t2.sec);
	printf("enter the date\n");
	my_date(d);
	add_time(t1, t2);
	convert(t1);
}
time my_time(time t)
{
	scanf("%d%d%d", &t.hr, &t.min, &t.sec);
	printf("hr\tmin\tsec\n");

	return t;
}
void my_date(date d)
{
	scanf("%d%d%d", &d.dt, &d.mn, &d.yr);
	printf("date\tmonth\tyear\n");
	printf("%d\t %d\t %d\n", d.dt, d.mn, d.yr);

}
void add_time(time t1, time t2)
{
	time t;
	t.sec = t1.sec + t2.sec;
	t.min = t1.min + t2.min;
	t.hr = t1.hr + t2.hr;
	if (t.sec >= 60)
	{
		t.sec = t.sec - 60;
		t.min++;
	}
	if (t.min >= 60)
	{
		t.min = t.min - 60;
		t.hr++;
	}
	if (t.hr > 12)
	{
		t.hr = t.hr - 12;
	}
	printf("hr\tmin\tsec\n");
	printf("%d\t%d\t%d", t.hr, t.min, t.sec);
}
void convert(time t)
{
	t.hr = t.hr * 360;
	t.min = t.min * 60;
	t.sec = t.sec + t.min + t.hr;
	printf("\nconvert to sec= %d", t.sec);
}