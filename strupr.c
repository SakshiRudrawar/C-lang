#include<stdio.h>
char* mystrupr(char*);
void main()
{
	char a[50];
	char* a1;
	printf("Enter a String");
	gets(a);
	a1 = mystrupr(a);
	printf("\n%s",a1);
}
char* mystrupr(char* a)
{
	int i = 0;
	while(a[i]!='\0')
	{
		if(a[i]>=97&&a[i]<=122)
		{
			a[i]=a[i]-32;
		}
		i++;
	}
	return a;
}
