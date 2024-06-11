#include<stdio.h>
#include<string.h>
void main()
{
 
char str[100];
 
printf("Enter the String = ");
scanf("%s",&str);
 
printf(" \n The String after strset is = %s",strset(str, '*'));
 
}
