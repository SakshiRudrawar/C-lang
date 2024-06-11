//pass by value
#include<stdio.h>
#include<string.h>

struct employe
{
	int id;
	char name[20];
	double salaray;
};

struct employe storevalue(struct employe);
void main()
{
	struct employe e1;
	e1 = storevalue(e1);
	printf("%d is %s is %ld",e1.id,e1.name,e1.salaray);
}

struct employe storevalue(struct employe e)
{

	printf("Enter id:");
	scanf("%d", &e.id);
	printf("Enter name:");
	scanf("%s",e.name);
	printf("Enter salaray");
	scanf("%ld",&e.salaray);
	
	return e;
	
}