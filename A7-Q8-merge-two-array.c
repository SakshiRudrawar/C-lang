#include<stdio.h>
void main()
{
	int n, m,i;
	
	printf("enter the element for 1st array size");
	scanf("%d",&n);
	
	printf("enter the element for 2nd array size");
	scanf("%d",&m);
	
	int array1[n];
	int array2[m];
	int merge[n+m];
	
	for(i=0;i<n;i++)
	{
		printf("enter the element of 1st array");
		scanf("%d",&array1[i]);
	}
	
	for(i=0;i<m;i++)
	{
		printf("enter the element of 2nd array");
		scanf("%d",&array2[i]);
	}
	
	for(i=0;i<n;i++)
	{
		merge[i]=array1[i];
	}
	
	for(i=0;i<m;i++)
	{
		merge[n+i]=array2[i];
	}
	
	printf("merged array");
	
	for(i=0;i<(n+m); i++)
	{
		printf("%d", merge[i]);
	}
	printf("\n");
}

















