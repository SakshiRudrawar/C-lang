#include<stdio.h>
#include<string.h>

struct student
{
	int roll;
	char name[20];
};

void storestudent(struct student*);
void main()
{
	struct student this;
	storestudent(&this);
	
	printf("student details: \n id is: %d\n name: %s\n",this.roll, this.name);
}

void storestudent(struct student*this)
{
	printf("enter the rollno");
	scanf("%d", &this->roll);
	printf("enter the name");
	scanf("%s", &this->name);
}