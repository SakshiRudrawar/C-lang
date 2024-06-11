#include<stdio.h>
void main()
{
	int i,temp;
	int arr[5];
	
	for(i=0;i<5;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<2;i++)
	{
		temp=arr[i];
		arr[i]=arr[4-i];
		arr[4-i]=temp;
	}
	
	printf("Reversed array");
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
}
