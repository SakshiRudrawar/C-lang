// 10. WAP a program to check the string is pallindrome or not.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, n, c = 0;

    printf("Enter the string: ");
    scanf("%s", str);

    n = strlen(str);

    for (i = 0; i < n / 2; i++) 
	{
        if (str[i] == str[n - i - 1]) 
		{
            c++;
        }
    }

    if (c == i) 
	{
        printf("The string is a palindrome.\n");
    }
	else 
	 {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

