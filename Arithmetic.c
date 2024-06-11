#include<stdio.h>
int arithmetic(int*,int*,int*,int*,int*,int*,char*,int*,int*,int*,int*);
void main()
{
	int num1,num2,Add,Sub,Mul,Div,a,b,c,d;
	char ch;
	printf("Enter the num1:");
	scanf("%d",&num1);
	printf("Enter the num2:");
	scanf("%d",&num2);
	fflush(stdin);
	printf("Enter your choice +,-,*,/ =",ch);
	scanf("%c",&ch);
	arithmetic(&num1,&num2,&Add,&Sub,&Mul,&Div,&ch,&a,&b,&c,&d);
	if(a==Add)
	{
		printf("Addition is %d",a);
	}
	if(b==Sub)
	{
		printf("Subtraction is %d",b);
	}
	if(c==Mul)
	{
		printf("Division is %d",c);
	}
	if(d==Div)
	{
		printf("Multiplication is %d",d);
	}
}
int arithmetic(int*num1,int*num2,int*Add,int*Sub,int*Mul,int*Div,char*ch,int*a,int*b,int*c,int*d)
{
	if(*ch='+')
	{
		*a=*Add=*num1+*num2;
	   //	printf("Addition is %d",Add);
	}
	if(*ch='-')
	{
		*b=*Sub=*num1-*num2;
	//	printf("Subtraction is %d",Sub);
	}
	if(*ch='*')
	{
		*c=*Mul=*num1**num2;
	//	printf("Multiplication is %d",Mul);
	}
	if(*ch='/')
	{
		*d=*Div=*num1%*num2;
	//	printf("Division is %d",Div);
	}
}