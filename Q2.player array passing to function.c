 // array passing to a function

#include <stdio.h>
#include <string.h>

struct player {
    char name[20];
    int matches;
    int runs;
    int wickets;
};

void storeArray(struct player*, int);
void printArray(struct player*, int);
void searchArray(struct player*, int);

void main() 
{
    struct player arr[3];
    storeArray(arr, 3);
    printArray(arr, 3);
    searchArray(arr, 3);
}

void storeArray(struct player* arr, int size) 
{
    int i;

    for (i = 0; i < size; i++) {
        printf("Enter the name: ");
        scanf("%s", arr[i].name);

        printf("Enter the matches: ");
        scanf("%d", &arr[i].matches);

        printf("Enter the runs: ");
        scanf("%d", &arr[i].runs);

        printf("Enter the wickets:\n\n ");
        scanf("%d", &arr[i].wickets);
    }
}

void printArray(struct player* arr, int size) 
{
    int i;

    for (i = 0; i < size; i++) {
        printf("Player details:\n");
        printf("Player name: %s\n", arr[i].name);
        printf("Number of matches: %d\n", arr[i].matches);
        printf("Runs: %d\n", arr[i].runs);
        printf("Wickets: %d\n", arr[i].wickets);
    }
}

void searchArray(struct player* arr, int size)
 {
    int i, found = 0, search;

    printf("Enter the matches for search: ");
    scanf("%d", &search);

    for (i = 0; i < size; i++) 
	{
        if (arr[i].matches == search) 
		{
            printf("Player found with name: %s\nMatches: %d\nRuns: %d\nWickets: %d\n", arr[i].name, arr[i].matches, arr[i].runs, arr[i].wickets);
            found = 1;
        }
    }

    if (!found) 
	{
        printf("No player found with matches: %d\n", search);
    }
}






