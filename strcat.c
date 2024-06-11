#include<stdio.h>
#include<string.h>
char mystrcat(char*,char*);
void main()
{
	
	char str1[20]="First";
	char str2[20]="Solution";
	mystrcat(str1,str2);
	printf("%s",str1);
	
}
char  mystrcat(char* str1,char* str2)
 {
 	int len=strlen(str1);
    int i=0;
 	while(str1[i]!='\0')
 	{
 		str1[len]=str2[i];
 		len++;
 		i++;
	 }
	// str1[len]='\0';
 }
