#include<stdio.h>
char* mystrset(char*,char,int);
void main()
{
	char a [100];
	char c;
	int n=1;
	printf("Enter string");
	gets(a);
	printf("Enter Character to set string ");
	scanf("%c",&c);
	printf("%s",mystrset(a,c,n));

}
char* mystrset(char* a,char c,int n )
{
	int i = 0;
	while(a[i]!='\0'&&i<=n)
	{
		a[i]=c;
		i++;
	}
	return a;
}
