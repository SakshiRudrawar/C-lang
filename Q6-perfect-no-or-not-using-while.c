#include <stdio.h>

void main() 
{
    int i=1, num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(i<=num/2)
    {
    	if(num % i == 0)
    	{
    		sum +=i;
		}
		i++;
	}

    if (sum == num) 
	{
        printf("%d is a perfect number.\n", num);
    }
	 else 
	{
        printf("%d is not a perfect number.\n", num);
    }

}

