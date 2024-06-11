#include <stdio.h>
int myfunc(int,int,int,int*);
void main() 
{
    int i,j, factors = 0;
    int arr[7];

    for (i = 0; i < 7; i++) {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }
    
    myfunc(i,j,factors,arr);
}

int myfunc(int i, int j, int factors, int*arr)
{

    for (i = 0; i < 7; i++) 
	{
         factors = 0; 

        if (arr[i] <= 1) 
		{
            factors = 1; 
        } 
		else 
		{
            for (j = 2; j * j <= arr[i]; j++) 
			{
                if (arr[i] % j == 0) 
				{
                    factors++;
                    break;
                }
            }
        }

        if (factors == 0) 
		{
            printf("%d is a prime number\n", arr[i]);
        } 
    }
}


