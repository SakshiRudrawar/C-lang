//strlwr() :- this function can be used to return a string character in lower case

#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	
	printf("enter the string \n ");
	scanf("%s",&str);
	
	strlwr(str);
	
	printf("lower string is : %s",str);
	
	return 0;
}
