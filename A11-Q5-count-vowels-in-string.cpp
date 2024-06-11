// 5. WAP to count the number of vowels in a string.

#include<stdio.h>
#include<string.h>

int main()
{
	char str[70];
	int i;
	int count=0;
	
	printf("enter the string");
	scanf("%s",str);
	
	while(str[count] != '\0')
	{
		for(i=0; str[i]!='\0'; i++)
		{
			if(str[i]=='a' || str[i]=='e' ||  str[i]=='i'  ||  str[i]=='o' ||  str[i]=='u')
			{
				count++;
			}
		}
		
		printf("vowel count is = %d\n",count);
	}

    return 0;
	
}
