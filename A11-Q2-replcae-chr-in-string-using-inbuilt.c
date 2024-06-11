// 2. WAP replace all occurrences of 'a' with $ in a string.

#include<stdio.h>
#include<string.h>

int main()
{
     char str[30];
	 char ch1;
	 char ch2;
	 int i;
	 
	 printf("enter string");
	 scanf("%s",&str);
	 
	 printf("character for search");
	 scanf("\n %c", &ch1);
	 
	 printf("replace string with");
	 scanf("\n %c", &ch2);
	 
	 for(i=0; str[i]; i++)
	 {
	 	if(str[i]==ch1)
	 	{
	 		str[i]=ch2;
		}
    }
	printf("after replace %s",str);	
}
