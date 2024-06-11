#include<stdio.h>
void main()
{
	int number , i=0;
	
	printf("enter the number");
	scanf("%d",&number);
	
	for(i=1; i<=10; i++)
	{
		printf(" \n%d * %d = %d", number , i ,(number*i));	
	}
	

}
