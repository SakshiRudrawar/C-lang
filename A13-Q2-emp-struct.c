#include<stdio.h>
#include<string.h>

struct emp
{
	int id;
	char name[20];
	double salary;
};

void main()
{
	int i;
	
	struct emp arr[3];
	
	for(i=0; i<3; i++)
	{
		printf("enter the id");
		scanf("%d", &arr[i].id);
		
		printf("enter the name");
		scanf("%s", &arr[i].name);
		
		printf("enter the salary");
		scanf("%lf", &arr[i].salary);
	}
	
	for(i=0;i<3;i++)
	{
		printf("employee id is :%d\n  name: %s\n  salary:%lf\n" , arr[i].id, arr[i].name, arr[i].salary);
	}
}








