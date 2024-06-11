#include<stdio.h>
char* mystrlwr(char*);
void main()
{
	char a[50];
	char* a1;
	printf("Enter a String");
	gets(a);
	a1 = mystrlwr(a);
	printf("\n%s",a1);
}
char* mystrlwr(char* a)
{
	int i = 0;
	while(a[i]!='\0')
	{
		if(a[i]>=65&&a[i]<=96)
		{
			a[i]=a[i]+32;
			i++;
			
		}
	
	}
	return a;
}


