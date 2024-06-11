#include<stdio.h>
#include<string.h>

int main() {
    char a[20] = "My_name_is";
    int i;

    for (i = 0; i < strlen(a); i++) {
        if (a[i] == '_') {
            a[i] = a[i - 1];
            printf("%c", a[i]);
        } else {
            printf("%c", a[i);
        }
    }

    return 0;
}
