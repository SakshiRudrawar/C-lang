//Array passing to a function of struct variable for time

#include<stdio.h>
#include<string.h>

struct time
{
	int hr;
	int min;
	int sec;
};

void storeArray(struct time*, int);
void printArray(struct time*, int);
void searchArray(struct time*, int);

void main()
{
	struct time arr[3];
	storeArray (arr,3);
	printArray (arr,3);
	searchArray (arr, 3);
}

void storeArray (struct time *arr, int size)
{
	int i;
	for (i=0; i<3; i++)
	{
		printf("Enter hr:");
		scanf("%d", &arr[i].hr);
		printf("Enter min:");
		scanf("%d", &arr[i].min);
		printf("enter sec:");
		scanf("%d",&arr[i].sec);
		
		
	}
}

void printArray (struct time *arr, int size)
{
	int i;
	for (i=0; i<3; i++)
	{
	     printf("time in hr is %d\n min is %d\n sec is %d\n", arr[i].hr,arr[i].min,arr[i].sec);
	}
	
}

void searchArray(struct time *arr, int size)
{
	
	int i, found=0, search;
    printf("Enter no.for search");
	scanf("%d",&search);
	for (i=0; i<3; i++)
	{
		if(arr[i].hr==search)
		{
		     printf("time found with hr is %d\n min is %d\n sec is %d\n",arr[i].hr,arr[i].min,arr[i].sec);
		
		
		found = 1;
		break;
		
	    }
	    
	    if (!found)
	{
		printf("time with hr is %d not found.\n", search);
	}
    }
    
}
