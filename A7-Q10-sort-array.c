#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) 
	{ 
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }

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

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) 
	{ 
        printf("%d\n", arr[i]);
    }

    return 0;
}

