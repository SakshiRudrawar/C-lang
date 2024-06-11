// 6. WAP to take in a string and replace every blank space with social symbol.

#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "Once upon a time we are in school";
    char ch = '-';
    int i;
    

    for ( i = 0; i < strlen(string); i++) 
	{
        if (string[i] == ' ') 
		{
            string[i] = ch;
        }
    }

    printf("String after replacing spaces with the given character:\n");
    printf("%s\n", string);

    return 0;
}
 
      
    
