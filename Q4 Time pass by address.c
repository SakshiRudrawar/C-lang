//Time pass by address 


#include<stdio.h>
#include<string.h>

struct time
{
	int hr;
	int min;
	int sec;
};

void storetime(struct time*);
void main()
{
	struct  time this;
	storetime(&this);
	
	printf("time details: \n time is: %d\n min : %d\n sec is %d",this.hr, this.min,this.sec);
}

void storetime(struct time*this)
{
	printf("enter the hr ");
	scanf("%d", &this->hr);
	printf("enter the min");
	scanf("%d", &this->min);
	printf("enter sec");
	scanf("%d", &this->sec);
}