#include<stdio.h>
int myfunc(int,int,int*);
void main()
{
	int i, sum=0;
	int arr[5];
	
	myfunc(i,sum,arr);
}

int myfunc(int i, int sum, int*arr)
{

	
	for(i=0; i<5; i++)
	{
		printf("enter the number");
		scanf("%d", &arr[i]);
		sum= arr[0]+arr[1]+arr[2]+arr[3]+arr[4];	
		
	}
	printf("The sum is %d", sum);
	
}
