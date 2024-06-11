#include<stdio.h>
#include<string.h>
char mystrdup(char*,char*);
void main()
{
	char str1[20];
	char str2[20];
	printf("Enter a string:");
	gets(str1);
	mystrdup(str1,str2);
	printf("Duplicate string is %s:",str2);
	
}
 char mystrdup(char* str1,char* str2)
 {
    int i=0;
 	while(str1[i]!='\0')
 	{
 		str2[i]=str1[i];
 		//len++;
 		i++;
	 }
	 
 }
