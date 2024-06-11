#include <stdio.h>
#include <string.h>

struct movie {
    char movieTitle[20];
    char director[20];
    int releaseYear;
    char genre[20];
};

void addMovie(struct movie arr[], int *n);
void searchMovie(struct movie arr[], int n, char title[]);
void updateMovie(struct movie arr[], int n, char title[]);

int main() 
{
    int i, n = 0;
    struct movie arr[3];

    while (1) {
        int choice;
        printf("1. Add Movie\n");
        printf("2. Search Movie\n");
        printf("3. Update Movie\n");
        printf("4. Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
		{
            addMovie(arr, &n);
        } 
		else if (choice == 2) 
		{
            char searchTitle[20];
            printf("Enter the movie title to search: ");
            scanf("%s", searchTitle);
            searchMovie(arr, n, searchTitle);
        } 
		else if (choice == 3) 
		{
            char updateTitle[20];
            printf("Enter the movie title to update: ");
            scanf("%s", updateTitle);
            updateMovie(arr, n, updateTitle);
        } 
		else if (choice == 4) 
		{
            return 0;
        } 
		else 
		{
            printf("Invalid action. Please try again.\n");
        }
    }
}

void addMovie(struct movie arr[], int *n) {
    if (*n < 10) {
        printf("Enter the movie title: ");
        scanf("%s", arr[*n].movieTitle);

        printf("Enter the director name: ");
        scanf("%s", arr[*n].director);

        printf("Enter the release year: ");
        scanf("%d", &arr[*n].releaseYear);

        printf("Enter the genre: ");
        scanf("%s", arr[*n].genre);

        (*n)++;
    } else {
        printf("Maximum movie records reached. Cannot add more movies.\n");
    }
}

void searchMovie(struct movie arr[], int n, char title[]) {
    int i;
    for (i = 0; i < n; i++) {
        if (strcmp(arr[i].movieTitle, title) == 0) {
            printf("Movie found!\n");
            printf("Movie details: \n");
            printf("Movie Title: %s\nDirector Name: %s\nRelease Year: %d\nGenre: %s\n", arr[i].movieTitle, arr[i].director, arr[i].releaseYear, arr[i].genre);
            return;
        }
    }
    printf("Movie not found.\n");
}

void updateMovie(struct movie arr[], int n, char title[]) {
    int i;
    for (i = 0; i < n; i++) {
        if (strcmp(arr[i].movieTitle, title) == 0) 
		{
            printf("Enter updated director name: ");
            scanf("%s", arr[i].director);

            printf("Enter updated release year: ");
            scanf("%d", &arr[i].releaseYear);

            printf("Enter updated genre: ");
            scanf("%s", arr[i].genre);

            printf("Movie details updated!\n");
            return;
        }
    }
    printf("Movie not found for updating.\n");
}







