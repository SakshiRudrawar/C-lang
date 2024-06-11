#include<stdio.h>
void main()
{
	int i, no;
	int arr[5];
	
	
	for(i=0; i<5; i++)
	{
		printf("enter the number");
		scanf("%d", &arr[i]);		
	}
	
	printf("enter the number for search");
	scanf("%d", &no);
		
	int flag = 0;
	
	for(i=0; i<5; i++)
	{
		if(arr[i] == no)
		{
			printf("number is found ");
			scanf("%d", arr[i]);
			flag=1;
			break;
		}
	}
	
	if(flag == 0)
	{
		printf("number is not found");
	}
}
