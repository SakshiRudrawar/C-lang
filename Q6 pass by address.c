//Book pass by address 


#include<stdio.h>
#include<string.h>

struct book
{
	char name[70];
	int id;
	char author[20];
	double price;

};

void storebook(struct boook*);
void main()
{
	struct book this;
	storebook(&this);
	
	printf("Book details: \n name is: %s\n  id: %d\n author is %s\n price is:%ld\n",this.name, this.id,this.author,this.price);
}

void storebook(struct book*this)
{
	printf("enter the book name ");
	scanf("%s", &this->name);
	printf("enter the id");
	scanf("%d", &this->id);
	printf("enter author name");
	scanf("%s", &this->author);
	printf("Enter price");
	scanf("%ld\n",&this->price);
}