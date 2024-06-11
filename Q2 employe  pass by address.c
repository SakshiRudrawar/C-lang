//employee pass by address 


#include<stdio.h>
#include<string.h>

struct employe
{
	int id;
	char name[20];
	double salaray;
};

void storestudent(struct employe*);
void main()
{
	struct employe this;
	storeemploye(&this);
	
	printf("employe details: \n id is: %d\n name : %s\n salaray is %ld",this.id, this.name,this.salaray);
}

void storeemploye(struct employe*this)
{
	printf("enter the id ");
	scanf("%d", &this->id);
	printf("enter the name");
	scanf("%s", &this->name);
	printf("enter salaray");
	scanf("%ld", &this->salaray);
}