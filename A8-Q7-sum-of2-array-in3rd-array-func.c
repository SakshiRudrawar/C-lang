#include<stdio.h>
int myfunc(int,int*,int*,int*);
void main()
{
	int i;
	int arr[5];
	int brr[5];
	int crr[5];
	
	for(i=0;i<5;i++)
	{
		printf("print first array element");
		scanf("%d", &arr[i]);
	}
	
	myfunc(i,arr,brr,crr);
}

int myfunc(int i, int*arr, int*brr, int*crr)
{
	
	for(i=0;i<5;i++)
	{
		printf("print second array element");
		scanf("%d", &brr[i]);	
	}
	
	for(i=0;i<5;i++)
	{
		crr[i]=arr[i]+brr[i];
		printf(" \n sum of array is %d", crr[i]);
	}	
    
}
