#include<stdio.h>
char* mystrstr(char*,char*);
void main()
{
	char a[100];
	char b[100];
	printf("Enter Frist String");
	gets(a);
	printf("Enter Second String");
	gets(b);
	char* res;
	res = mystrstr(a,b);
	if(res==NULL)
		printf("Not Found");
	else
		printf("%s",res);
}
char* mystrstr(char* a, char* b)
{
	int flag=0,i,j;
	for(i=0;a[i]!='\0';i++)
	{
		
		if(a[i]==b[0])
		{
			flag =1;
			for(j=1;b[j]!='\0';j++)
			{
				if(a[i+1]!=b[j])
				{
					flag = 0;
					break;
				}
			}
		}
		if(flag==1)
			return &a[i];
	}
	if(flag==0)
		return NULL;
}
