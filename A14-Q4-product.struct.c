#include<stdio.h>
struct product
{
    char p_name[20];
	double price;
	int quantity;	
};

void main()
{
	int i;
	double totalcost;
	
	struct product arr[3];
	
	for(i=0; i<3; i++)
	{
		printf("enter the product name");
		scanf("%s", &arr[i].p_name);
		
		printf("enter the price");
		scanf("%lf", &arr[i].price);
		
		printf("enter the quantity");
		scanf("%d", &arr[i].quantity);
		
		
        totalcost = arr[i].price * arr[i].quantity;
	}
	
	printf("Items in the cart:\n");
	
	for(i=0;i<3;i++)
	{
		printf("product result is \n  : p_name is :%s\n  price: %lf\n  quantity:%d\n" , arr[i].p_name, arr[i].price, arr[i].quantity);
	}
	
    printf("Total cost: %lf\n", totalcost);
}


















