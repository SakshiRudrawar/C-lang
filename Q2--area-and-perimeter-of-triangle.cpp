#include<stdio.h>
int main()
{
	int l=10, b=20;
	int area, perimeter;
	
	area= l*b;
	printf("Area of a rectangle is %d", area);
	
	perimeter= 2*(l+b);
	printf("\nperimeter of a rectangle is %d", perimeter);
	
	return 0;
}
