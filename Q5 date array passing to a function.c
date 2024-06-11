//Array passing to a function of struct variable for date

#include<stdio.h>
#include<string.h>

struct Date
{
	int date;
	char month[30];
	int year;

};

void storeArray(struct Date*, int);
void printArray(struct Date*, int);
void searchArray(struct Date*, int, int );

void main()
{
	struct Date arr[2];
	storeArray (arr,2);
	printArray (arr,2);
	searchArray (arr,2);
	
}

void storeArray (struct Date *arr, int size)
{
	int i;
	for (i=0; i<2; i++)
	{
		printf("Enter date:");
		scanf("%d", &arr[i].date);
		printf("Enter month:");
		scanf("%s", arr[i].month);
		printf("Enter year");
		scanf("%d", arr[i].year);
	}
}

void printArray (struct Date *arr, int size)
{
	int i;
	
	for (i=0; i<2; i++)
	{
	     printf("Date  is %d month is %s year is %d\n", arr[i].date,arr[i].month,arr[i].year);
	}
	
}

void searchArray(struct Date *arr, int size)
{
	
	int i, found=0, search;
	

	
	printf("Enter date to search:");
	scanf("%d",&search);

  

	for (i=0; i<2; i++)
	{
		if(arr[i].date==search)
		{
		     printf("date found with date %d month is %s\n year is &d\n",arr[i].date,arr[i].month,arr[i].year);
		
		
		found = 1;
		break;
		
	    }
	    
	    if (!found)
	{
		printf("Date with date number %d not found.\n", search);
	}
    }
    
}
