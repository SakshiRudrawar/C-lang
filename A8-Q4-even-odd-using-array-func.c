#include<stdio.h>
int myfunc(int, int,int,int*);
void main()
{
	int i, even, odd;
	int arr[5];
	
	for(i=0;i<5;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	
	myfunc(i, even, odd, arr);
}

int myfunc(int i, int even, int odd, int*arr)
{

	
	for(i=0; i<5; i++)
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
