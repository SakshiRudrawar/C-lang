#include<stdio.h>
void main()
{
	int i;
	int arr[5];
	
	
	for(i=0; i<5; i++)
	{
		printf("enter the number");
		scanf("%d", &arr[i]);
	}
	// min
	
	int min=arr[0];
	for(i=0; i<5; i++)
	{
		if(min>arr[i])
		{
			min= arr[i];
		}
	}
	printf("the minimum num is %d\n", min);
	
	// max 
	
	int max=arr[0];
	for(i=0; i<5; i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("the mmaximum number is %d", max);
	
}







