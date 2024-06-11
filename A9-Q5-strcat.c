// strcat() :- this function is used for string concatenation.

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20]={"sakshi"};
	char str2[10]={" rudrawar"};
	
	printf("before concatenate string is %s\n",str1);
	
	strcat(str1, str2);
	
	printf("concatenate string is :  %s ", str1);
	
	return 0;
}
