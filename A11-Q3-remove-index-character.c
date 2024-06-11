// 3. WAP to remove the nth index character from a non-empty string.

#include<stdio.h>
void main()
{
	int n, m, i=0;
	printf("enter the size of string \n");
	scanf("%d",&n);
	
	char s[n];
	printf("enter the string");
	scanf("%s",s);
	
	printf("enter the index no for remove the character at \n");
	scanf("%d",&m);
	
	for(i=m; i<n; i++)
	{
		s[i]=s[i+1];
	}
	printf("%s",s);
	
}
