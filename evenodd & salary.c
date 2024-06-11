#include<stdio.h>
int evenodd(int*,int*,int*,int*,int*,int*,int*);
void main()
{
	int ch,da,ta,har,total_salary,num1,num2;
	printf("Even Odd press 1\n Basic Salary press 2\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	evenodd(&ch,&da,&ta,&har,&total_salary,&num1,&num2);
	if(ch==1)
	{
	if(num1==1)
	    {
		    printf("given number is even",num1);
    	}
	    else
	    {
	    	printf("given number is odd",num2);
     	}
     }
	if(ch==2)
	}
        printf("har is=%d\n",har);
	    printf("total_salary is=%d\n",total_salary);
	}
int evenodd(int*ch,int*num1,int*num2,int*da,int*ta,int*har,int*total_salary)
{
	if(*ch==1)                         
	{
          int number;
        	printf("Enter the number:",number);
        	scanf("%d",&number);
    	if(number%2==0)
	    {
		    *num1=1;//printf("%d is a even number",number);
    	}
	    else
	    {
	    	*num2=2;//printf("%d is a odd number",number);
     	}
	}	
	if(*ch==2)
	{        
			int basic_salary,*da,*ta,*har,*total_salary;
	             printf("Enter the basic_salary:");
            	scanf("%d",&basic_salary);
    	if(basic_salary<=5000)
    	{
	     	*da=basic_salary*10/100;
	    	*ta=basic_salary*20/100;
	    	*har=basic_salary*25/100;
    	}
	    else
	    {
		   *da=basic_salary*15/100;
		   *ta=basic_salary*25/100;
		   *har=basic_salary*30/100;
     	}
         	*total_salary=basic_salary+*da+*ta+*har;
         //	printf("da is=%d\n",da);
        //	printf("ta is=%d\n",ta);
        //	printf("har is=%d\n",har);
	     //   printf("total_salary is=%d\n",total_salary);
		
	}
}
  