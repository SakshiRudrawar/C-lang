// 8. WAP to calculate the number of words and the number of characters present in a string. 

#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int i = 0;
    int word = 0;
    int character = 0;

    printf("Enter the string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        if (str[i] == ' ') 
		{
            word++;
        }
        character++;
        i++;
    }

    // Add 1 to word count to account for the last word
    word++;

    printf("\nNumber of characters is %d", character);
    printf("\nNumber of words is %d", word);

    return 0;
}


