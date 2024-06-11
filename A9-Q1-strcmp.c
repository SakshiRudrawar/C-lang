#include <stdio.h>

void main() 
{
    
    char str1[5] = {'a', 'b', 'c', 'd'};
    char str2[5] = {'x','y','z'};

    int result = strcmp(str1, str2);

    if (result == 0) 
	{
        printf("The two strings are identical.\n");
    } 
	else if (result < 0) 
	{
        printf("str1 is less than str2.\n");
    } 
	else 
	{
        printf("str1 is greater than str2.\n");
    }
}

