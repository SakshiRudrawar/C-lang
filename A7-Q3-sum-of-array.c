#include<stdio.h>
int main()
{
	int i, sum=0;
	int arr[5];
	
	for(i=0; i<5; i++)
	{
		printf("enter the number");
		scanf("%d", &arr[i]);
		sum= arr[0]+arr[1]+arr[2]+arr[3]+arr[4];	
		
	}
	printf("The sum is %d", sum);
	
}
