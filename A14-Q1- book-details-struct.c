#include<stdio.h>
#include<string.h>

struct Book
{
	int b_id;
	char b_name[200];
	char b_author[200];
	double price;
	double rating;
};

void main()
{
	int i;
	
	struct Book arr[3];
	
	for(i=0; i<3; i++)
	{
		printf("enter the book name");
		scanf("%s", &arr[i].b_name);
		
		printf("enter the book id");
		scanf("%d", &arr[i].b_id);
		
		printf("enter the book author");
		scanf("%s", &arr[i].b_author);
		
		printf("enter the price");
		scanf("%lf", &arr[i].price);
	}
	
	for(i=0;i<3;i++)
	{
		printf("Book details : \n Book_name is:%s\n  Id: %d\n  author:%s\n  price:%lf\n " , arr[i].b_name, arr[i].b_id, arr[i].b_author, arr[i].price);
	}
}








