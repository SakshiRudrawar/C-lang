#include<stdio.h>
#include<string.h>

void main() 
{
    char str1[10] = {'a', 'b', 'c', 'd'};
    char str2[5] = {'x','y','z'};

    strcpy(str1, str2);
	printf("%s", str1);
	
}

