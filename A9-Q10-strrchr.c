#include<stdio.h>
#include<string.h>

int main()
{
	char str[10]={"sakshi"};
	char chr = 'k';	
	
	char*ptr = strrchr(str,chr);
	
	if(ptr)
	{
		printf("Last occurence of %c in %s is at index %d", chr,str,ptr-str);
	}
	else
	{
		printf("%c is not present in %s", chr,str);
	}
	
}
