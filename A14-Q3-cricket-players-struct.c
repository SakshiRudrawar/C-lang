#include <stdio.h>
#include <string.h>

struct player {
    char p_name[20];
    int matches;
    int runs;
    int wickets;
};

void accept(struct player arr[], int n);
void display(struct player arr[], int n);
void maxrun_and_maxwicket(struct player arr[], int n);

int main() 
{
    int n = 2;
    struct player arr[50];

    accept(arr, n);
    display(arr, n);
    maxrun_and_maxwicket(arr, n);

    return 0;
}

void accept(struct player arr[], int n)
{
	int i;
    for ( i = 0; i < n; i++) {
        printf("Enter the player name: ");
        scanf("%s", arr[i].p_name);

        printf("Enter the number of matches: ");
        scanf("%d", &arr[i].matches);

        printf("Enter the runs: ");
        scanf("%d", &arr[i].runs);

        printf("Enter the wickets: ");
        scanf("%d", &arr[i].wickets);
    }
}

void display(struct player arr[], int n)
{
	int i;
    for ( i = 0; i < n; i++) {
        printf("Player details:\n");
        printf("Player name: %s\n", arr[i].p_name);
        printf("Number of matches: %d\n", arr[i].matches);
        printf("Runs: %d\n", arr[i].runs);
        printf("Wickets: %d\n", arr[i].wickets);
    }
}

void maxrun_and_maxwicket(struct player arr[], int n)
{
    int i;
    int max_runs = -1, max_wickets = -1;
    char max_run_player[20], max_wicket_player[20];

    for (i = 0; i < n; i++) {
        if (arr[i].runs > max_runs) {
            max_runs = arr[i].runs;
            strcpy(max_run_player, arr[i].p_name);
        }
    }

    for (i = 0; i < n; i++) {
        if (arr[i].wickets > max_wickets) {
            max_wickets = arr[i].wickets;
            strcpy(max_wicket_player, arr[i].p_name);
        }
    }

    printf("Player with the maximum runs: %s\n", max_run_player);
    printf("Player with the maximum wickets: %s\n", max_wicket_player);
}








