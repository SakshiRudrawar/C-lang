/*#include<stdio.h>

int main()
{
	int age , purchase;
	
	printf("enter the age of a student :\n");
	scanf("%f",&age);
	
	printf("enter the purchase amount:\n");
	scanf("%f",&purchase);
	
	if(age<=25)
	{
		printf("he is a student\n");
		
		if(purchase>500)
		{
			printf("discount is 20 percent\n");
		}
		else
		{
			printf("discount is 10 percent\n");
		}

		
	else if (purchase>600)
		{
			printf("discount is 15 percent\n");
		}
	else
		{
			printf("no discount");
		}
	

      
	
	return 0;
}*/



#include<stdio.h>
void main()
{
	float price , discount1,  discount2,  discount3 ;
	char isstudent;
	
	printf("are you a student? (y/n)");
	scanf("%c",&isstudent);
	
	printf("enter the price of purchase");
	scanf("%f", &price);
	
	
	
	if(isstudent=='y' )
	{
		if(price>500)
		{
			discount1 = 0.20*price;
			printf("discount price is %f", discount1);	
		}
		else
		{
			discount2 = 0.10*price;
			printf("discount price is %f", discount2);
		}
	}
	
	else
	{
		if(price<500)
		{
			discount3 = 0.5*price;
			printf("discount price is %f",discount3);
		}
		
		else
		{
			printf("no discount");
		}
	}	
	
	
}




































