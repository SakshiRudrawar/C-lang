//strupr() :- this function returns string character in uppercase.

#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	
	printf("enter the string \n ");
	scanf("%s",&str);
	
	strupr(str);
	
	printf("upper string is : %s",str);
	
	return 0;
}
