#include<stdio.h>
void main()
{
	int n;
	printf("enter the size");
	scanf("%d",&n);
	
	int i;
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("enter the number in array");
		scanf("%d",&arr[i]);
	}
	
	while(i<n)
	{
		printf("%d",arr[i]);
	}
	
	myfunc(n, arr, i);
}

int myfunc(int n, int*arr,int i)
{
	int min;
	int max;
	
	min=arr[0];
	max=arr[0];
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	
	printf("maximum element is  %d \n",max);
	printf("minimum element is  %d \n", min);
}























