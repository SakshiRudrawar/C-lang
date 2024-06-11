#include<stdio.h>
#include<string.h>
void mystrrev(char*);
void main()
{
	char a[20]="sami";
	mystrrev(a);
	
}
void mystrrev(char *a)
{
	int i,j=0;
	while(a[j]!='\0'){
		j++;
	}
	j--;
	int l=j;
	printf("l=%d",l);
	for(i=0;i<l/2;i++,j--)
	{
		char temp;
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		
	}
	a[l+1]='\0';
	printf("\n%s",a);
}