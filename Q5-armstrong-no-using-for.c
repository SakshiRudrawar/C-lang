#include <stdio.h>

void main() 
{
    int rem, temp, sum = 0, no;

    printf("Enter the number: ");
    scanf("%d", &no);

    temp = no;

    for (; no > 0;) 
	{
        rem = no % 10;
        sum = sum + (rem * rem * rem);
        no = no / 10;
    }

    if (temp == sum) 
	{
        printf("given number is an Armstrong number.\n");
    } 
	else 
	{
        printf(" given number is not an Armstrong number.\n");
    }

}

