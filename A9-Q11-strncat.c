// strncat() :- this function can be used to combining and concatenating n character of one string to another.
#include<stdio.h>
#include<string.h>

void main()
{
	char str1[20]="sakshi";
	char str2[20]="rudrawar";
	
	strncat(str2,str1,4);
	
	printf("str1 one is %s\n",str1);
	printf("after concatenate string str2 is %s :",str2);
}
