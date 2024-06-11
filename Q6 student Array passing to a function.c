//Array passing to a function of struct variable foe student

#include<stdio.h>
#include<string.h>

struct student
{
	int roll;
	char name[30];
};

void storeArray(struct student*, int);
void printArray(struct student*, int);
void searchArray(struct student*, int );

void main()
{
	struct student arr[5];
	storeArray (arr,5);
	printArray (arr,5);
	searchArray (arr, 5);
}

void storeArray (struct student *arr, int size)
{
	int i;
	for (i=0; i<5; i++)
	{
		printf("Enter roll no:");
		scanf("%d", &arr[i].roll);
		printf("Enter name:");
		scanf("%s", arr[i].name);
	}
}

void printArray (struct student *arr, int size)
{
	int i;
	for (i=0; i<5; i++)
	{
	     printf("Roll no is %d name is %s", arr[i].roll,arr[i].name);
	}
	
}

void searchArray(struct student *arr, int size)
{
	
	int i, found=0, search;
    printf("Enter no.for search");
	scanf("%d",&search);
	for (i=0; i<5; i++)
	{
		if(arr[i].roll==search)
		{
		     printf("Student found with roll no %d name is %s\n",arr[i].roll,arr[i].name);
		
		
		found = 1;
		break;
		
	    }
	    
	    if (!found)
	{
		printf("Student with Roll number %d not found.\n", search);
	}
    }
    
}
