/*#include<stdio.h>
void main()
{
   int a , b , c ;
   a=10 , b=20, c=30;
   
   if(a>b)
   {
       if(a>c)
       {
           printf("%d a is a max" , a );
       }
       else
       {
          printf("%d c is max",c); 
       }
   }
   
   else
   {
       if(b>c)
       {
           printf("%d b is max" , b);
       }
       else
       {
           printf("%d c is max" , c);
       }
   }
}*/

#include<stdio.h>
void main()
{
	int a=10 , b=20, c=30;
	
	if(a>b && a>c)
	 {
	 	printf(" %d a is a max number",a);
	 }
	 
	if(b>a && b>c)
	{
		printf(" %d b is a max number",b);
	}
	
		if(c>a && c>b)
	{
		printf(" %d c is a max number",c);
	}
}































