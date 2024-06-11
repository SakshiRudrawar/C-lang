#include<stdio.h>
#include<string.h>
char mystrncat(char*,char*,int);
void main()
{
	char str1[20]="First";
	char str2[20]="Solution";
	int n=1;
	mystrcat(str1,str2,n);
	printf("%s",str1);
	
}
char  mystrncat(char* str1,char* str2,int n)
 {
 	int len=strlen(str1);
    int i=0;
 	while(str1[i]!='\0'&&i<=n)
 	{
 		str1[len]=str2[i];
 		len++;
 		i++;
	 }
	 str1[len]='\0';
 }
