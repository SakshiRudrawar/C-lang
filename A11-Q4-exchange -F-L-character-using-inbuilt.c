// 4. WAP to form a new string where the first chaacter and the last character have been exchanged.

#include<stdio.h>
#include<string.h>

int main()
{
	char temp, str[30];
	int n;
	
	printf("enter string");
	scanf("%s",&str);
	
	n=strlen(str);
	
	temp=str[0];
	str[0]=str[n-1];
	str[n-1]=temp;
	
	printf("replaced string is %s",str);
}
