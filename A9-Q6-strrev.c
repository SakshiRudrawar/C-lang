// strrev() :- this function can be used to reverse the given string.

#include<stdio.h>
#include<string.h>

int main()
{
	char str[10]={'a','p','p','l','e'};
	
	printf(" string before reverse : %s\n",str);
	
	strrev(str);
	
	printf("string after the reverse : %s", str);
	
	return 0;
}
