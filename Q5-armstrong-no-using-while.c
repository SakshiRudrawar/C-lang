#include<stdio.h>
void main()
{
	int rem, temp=0,sum, no;
	
	printf("enter the number");
	scanf("%d",&no);
	
	temp=no;
	
	while(no>0)
	{
		rem=no%10;
		sum=sum+(rem*rem*rem);
		no=no/10;
	}
	
	if(temp == sum)
	{
		printf("given no. is armstrong number");
	}
	else
	{
		printf("given no. is not a armstrong number");
	}
	

}
