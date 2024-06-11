#include<stdio.h>
#include<string.h>
void main(){
	char a[20]="My_name_is";
	char* token=strtok(a,"_");
	
	while(token!=NULL)
	{
		printf("%s\n",token);
		token=strtok(NULL,"_");
	}
	
	
	
	
	
	
	
	
	
	
}
