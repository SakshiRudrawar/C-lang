#include<stdio.h>
int mystrcmp(char*,char*,int);
void main()
{
	char a[100];
	char b[100];
	int n=2;
	printf("Enter a string ");
	scanf("%s",a);
	printf("Enter a string ");
	scanf("%s",b);
	int flag = mystrcmp(a,b,n);
}
int mystrcmp(char* a,char* b,int n){
	int i,flag=0;
	for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
	{
		if(i<=n)
		if(a[i]!=b[i])
		{
			flag=1;
			
		}
	if(flag==1)
	{
		printf("String are not Equal");
		break;
	}
	else
	{
		printf("String are  Equal");
		break;
	}
		

		
	}

}


