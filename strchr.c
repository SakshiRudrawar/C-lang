#include <stdio.h>
#include <string.h>

char* mystrchr(char*, int);

int main() {
    char str[100];
    char ch;
    char* result;

    printf("Enter a String: ");
    gets(str);
    printf("Enter a character to search for: ");
    scanf(" %c", &ch);  

    result = mystrchr(str, ch);

    if (result != NULL) {
        printf("String after %c is: %s\n", ch, result);
    } else {
        printf("%c not found in the string.\n", ch);
    }


}

char* mystrchr(char* str, int ch) {
    while (*str != '\0') {
        if (*str == ch) {
            return str;  
        }
        str++;
    }
    return NULL; 
}
