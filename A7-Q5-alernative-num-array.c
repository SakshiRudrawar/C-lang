#include<stdio.h>
void main()
{
	int i;
	int arr[5];
	
	for(i=0;i<5;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i+=2)
	{
		printf(" \n the alternative numbers are %d ",arr[i]);
	}
}
