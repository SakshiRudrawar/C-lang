//pass by value
#include<stdio.h>
#include<string.h>

struct date
{
	int date;
	char month[20];
    int  year;
};

struct date storevalue(struct date);
void main()
{
	struct date d1;
	d1 = storevalue(d1);
	printf(" Date is %d month is %s year is %d",d1.date,d1.month,d1.year);
}

struct date storevalue(struct date d)
{

	printf("Enter date:");
	scanf("%d", &d.date);
	printf("Enter month:");
	scanf("%s",d.month);
	printf("Enter year");
	scanf("%d",&d.year);
	
	return d;
	
}