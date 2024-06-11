#include<stdio.h>
void mystrncpy(char*,char*,int);
void main()
{
	char str1[10]="abca";
	char str2[10];
	int n=1;
	mystrncpy(str2,str1,n);
	printf("%s",str2);
	
}
void mystrncpy(char* str2,char* str1,int n)
{
	int i=0;
	//int n=1;
	while(str1[i]!='\0'&&i<=n)
	{
		
		str2[i]=str1[i];
		i++;
	}
	str1[i]='\0';
}