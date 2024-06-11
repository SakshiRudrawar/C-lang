#include <stdio.h>

void myfunc(int n, int arr[]);

int main() 
{
    int n, i;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    
    for (i = 0; i < n; i++) 
	{
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    myfunc(n, arr);

    
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


void myfunc(int n, int arr[]) 
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++) 
	{
        for (j = 0; j < n - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

