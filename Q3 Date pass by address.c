//Date pass by address 


#include<stdio.h>
#include<string.h>

struct date
{
	int date;
	char month[20];
	int year;
};

void storedate(struct date*);
void main()
{
	struct date this;
	storedate(&this);
	
	printf("date details: \n date is: %d\n month : %s\n year is %ld",this.date, this.month,this.year);
}

void storedate(struct date*this)
{
	printf("enter the date ");
	scanf("%d", &this->date);
	printf("enter the month");
	scanf("%s", &this->month);
	printf("enter year");
	scanf("%d", &this->year);
}