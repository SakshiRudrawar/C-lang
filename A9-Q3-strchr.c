#include<stdio.h>
#include<string.h>
int main()
{
	char str1[7]={'a','b','c','d','e'};
	char character = 'e';
	
	char*result=strchr(str1,character);
	//printf("result = %d str1=%d \n",result,str1 );
	if(result != '\0')
	{
		printf("found %c at position %d\n", character,result-str1); // array name represent base address
	}
	else
	{
		printf("%c not found in the string \n", character);
		
	}
   return 0;

}
