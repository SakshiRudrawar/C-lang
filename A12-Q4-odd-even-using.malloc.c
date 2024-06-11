#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i, even, odd;
	int n=5;
	int* arr;
	
	arr= (int*)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++)
	{
		if(arr[i]%2 == 0)
		{
			printf("\n %d number is even",arr[i]);
		}
		else
		{
			printf("\n %d number is odd",arr[i]);
		}
	}
}
