//1.write a program to sacn string from user then scan a single character an search it in accepted string.
// using string built in function.

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[50];
	
	printf("Enter the string :");
	scanf("%s",str1);
	
	char character;
	printf("enter the character for search:");
	scanf(" %c", &character);
	
	char*result = strchr(str1, character);
	
	if(result != NULL)
	{
		int position = result-str1;
		printf("found '%c' at position %d\n", character,position);
	}
	else
	{
		printf("'%c' not found in the string.\n",character);
	}
	
	return 0;
}
