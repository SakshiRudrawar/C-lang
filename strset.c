#include<stdio.h>
char* mystrset(char*,char);
void main()
{
	char a [100];
	char c;
	printf("Enter string");
	gets(a);
	printf("Enter Character to set string ");
	scanf("%c",&c);
	printf("%s",mystrset(a,c));

}
char* mystrset(char* a,char c)
{
	int i = 0;
	while(a[i]!='\0')
	{
		a[i]=c;
		i++;
	}
	return a;
}
