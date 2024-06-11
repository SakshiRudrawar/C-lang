//pass by value
#include<stdio.h>
#include<string.h>

struct book
{
	char name[70];
	int id;
	char author[20];
	double price;

};

struct book storevalue(struct book);
void main()
{
	struct book b1;
	b1 = storevalue(b1);
	printf("%s is d% is %s is %ld",b1.name,b1.id,b1.author,b1.price);
}

struct book storevalue(struct book B)
{

	printf("Enter book name:");
	scanf("%s", B.name);
	printf("Enter id:");
	scanf("%d",&B.id);
	printf("Enter author");
	scanf("%s",B.author);
	printf("Enter price");
	scanf("%ld",&B.price);
	
	return B;
	
}