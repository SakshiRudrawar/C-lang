#include<stdio.h>
#include<string.h>

struct distance
{
	int feet;
	int inch;
	
};

void main()
{
	int i;
	
	struct distance arr[3];
	
	for(i=0; i<3; i++)
	{
		printf("enter the feet");
		scanf("%d", &arr[i].feet);
		
		printf("enter the inch");
		scanf("%s", &arr[i].inch);

		
	}
	
	for(i=0;i<3;i++)
	{
		printf("distance : feet:%d\n  inch:%d\n  " , arr[i].feet, arr[i].inch );
	}
}
















