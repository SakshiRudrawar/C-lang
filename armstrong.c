#include<stdio.h>
#include<math.h>

int strong(int*,int*,int*,int*,int*,int*,int*);

void main()
{
		int num,count=0,temp=0,rem,sum=0,temp1,temp2;
       	printf("Enter the number:");
	    scanf("%d",&num);
	    strong(&num,&count,&temp,&rem,&sum,&temp1,&temp2);
	    if(temp1==temp)
	    {
	       printf("a number is Armstrong",temp);	
		}
		if(temp2==temp)
		{
			printf("a number is not armstrong",temp2);
		}
}
int strong(int*num,int*count,int*temp,int*rem,int*sum,int*temp1,int*temp2)
{
	for(*temp=*num;*temp>0;*count++)
	{
		*temp=*temp/10;
	}
      	
	for(*temp=*num;*num>0;)
	{
		*rem=*num%10;
		*num=*num/10;
		*sum=*sum+pow(*rem,*count);
		
	}
	if(*sum==*temp)
	{
	  
	  *temp1=*temp;	//printf("%d number is Armstrong",temp);
	}
	else
	{
	 *temp2=*temp;	//intf("%d number is not Armstrong",temp);
	}
	
}

