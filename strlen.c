#include<stdio.h>
int mystrlen(char*);
void main()
{
	char str1[]="Thakares";
	mystrlen(str1);
}
int mystrlen(char* str1)
{
	int i=0,len=0;
	while(str1[i]!='\0')
	{
		
		len++;
		i++;
		//	printf("%d",len);
	}
  	printf("%d",len);	
}