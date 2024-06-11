#include <stdio.h>
#include<string.h>
int main() {
   char str[20] = "Helloworldhello";
   char *result;
   
   result = strdup(str);
   
   printf("The string : %s", result);
   return 0;
}
