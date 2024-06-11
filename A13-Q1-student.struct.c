#include<stdio.h>
#include<string.h>

struct student
{
	int roll_no;
	char name[20];
	double marks;		
};

void main()
{
	int i;
	
	struct student arr[3];
	
	for(i=0; i<3; i++)
	{
		printf("enter the roll number");
		scanf("%d", &arr[i].roll_no);
		
		printf("enter the name");
		scanf("%s", &arr[i].name);
		
		printf("enter the marks");
		scanf("%lf", &arr[i].marks);
	}
	
	for(i=0;i<3;i++)
	{
		printf("student roll_no:%d\n  name: %s\n  marks:%lf\n" , arr[i].roll_no, arr[i].name, arr[i].marks);
	}
}








