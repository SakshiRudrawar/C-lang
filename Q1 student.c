#include<stdio.h>
#include<string.h>

struct student
{
	int roll;
	char name[20];
};

struct student storevalue(struct student);
void main()
{
	struct student s1;
	s1 = storevalue(s1);
	printf("%d is %s",s1.roll,s1.name);
}

struct student storevalue(struct student t)
{

	t.roll=10;
	strcpy(t.name,"sachin");
	return t;
}