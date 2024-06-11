#include<stdio.h>
void main()
{
	int i , num, sum=0;
	
	printf("enter the number");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++)
	 {
	 	sum = sum+i;
	 }
	 
	printf("sum of num is %d" ,  sum);
	
}


#include <stdio.h>

int main() {
    int i, num, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    i = 1;
    while (i <= num) {
        sum = sum + i;
        i++;
    }

    printf("Sum of numbers is %d\n", sum);

    return 0;
}





