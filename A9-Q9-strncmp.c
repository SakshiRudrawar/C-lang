//strncmp() :- this function can be used compare specified number of character in two string 

#include<stdio.h>
#include<string.h>

void main()
{
	char str1[10]="abcDe";
	char str2[10]="abcde";
	
	int result = strncmp(str1, str2, 4);
	printf("%d \n",result);
	
	if(result<0)
	{
		printf("str1 is less than str2");
	}
	else if(result>0)
	{
		printf("str2 is less than str1");
	}
	else
	{
		printf("str1 is equal to str2");
	}
		
	
}
