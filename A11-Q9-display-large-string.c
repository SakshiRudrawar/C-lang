// 9. WAP to take in two strings and display the large string without using built in function.
 
 #include <stdio.h>
#include <string.h>

int main() {
    char str1[20];
    char str2[20];
    
    printf("Enter the string 1: ");
    scanf("%s", str1);
    
    printf("Enter the string 2: ");
    scanf("%s", str2);
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 > len2) 
	{
        printf("The larger string is: %s\n", str1);
    } 
	else if (len2 > len1) 
	{
        printf("The larger string is: %s\n", str2);
    } 
	else 
	{
        printf("Both strings are of equal length.\n");
    }

    return 0;
}

