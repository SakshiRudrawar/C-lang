// 7. WAP to remove the characters of odd index values in a string .

#include<stdio.h>
#include<string.h>

void main()
{
	char str[20];
	int i;
	
	printf("enter the string:");
	scanf("%s",str);
	
	int length =strlen(str);
	
	for(i=0; i<length; i++)
	{
		if(i%2==0)
		{
			str[i/2]=str[i];
		}
	}
	str[length/2]='\0';
	printf("Result: %s\n", str);
}
