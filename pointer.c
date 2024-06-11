#include<stdio.h>
void myfun(int*,int*);
void main()
{
	int a=10,b=20;
	printf("Before a=%d  b=%d\n",a,b);
	myfun(&a,&b);
	printf("After a=%d  b=%d",a,b);
}
void myfun(int*x,int*y)
{
	
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}