// // array passing to a function

#include <stdio.h>
#include <string.h>

struct Book {
    char b_name[20];
    int b_id;
    char b_author[20];
    double price;
};

void storeArray(struct Book*, int);
void printArray(struct Book*, int);
void searchArray(struct Book*, int);

int main() 
{
    struct Book arr[3];
    storeArray(arr, 3);
    printArray(arr, 3);
    searchArray(arr, 3);

    return 0;
}

void storeArray(struct Book* arr, int size) 
{
    int i;

    for (i = 0; i < size; i++) {
        printf("Enter the book name: ");
        scanf("%s", arr[i].b_name);

        printf("Enter the book id: ");
        scanf("%d", &arr[i].b_id);

        printf("Enter the book author: ");
        scanf("%s", arr[i].b_author);

        printf("Enter the price: ");
        scanf("%lf", &arr[i].price);
    }
}

void printArray(struct Book* arr, int size) {
    int i;

    for (i = 0; i < size; i++) {
        printf("Book details:\n");
        printf("Book name: %s\n", arr[i].b_name);
        printf("ID: %d\n", arr[i].b_id);
        printf("Author: %s\n", arr[i].b_author);
        printf("Price: %lf\n", arr[i].price);
    }
}

void searchArray(struct Book* arr, int size) 
{
    int i, found = 0, search;

    printf("Enter the book id for search: ");
    scanf("%d", &search);

    for (i = 0; i < size; i++) {
        if (arr[i].b_id == search) {
            printf("Book found with book name: %s\nBook id: %d\nAuthor: %s\nPrice: %lf\n", arr[i].b_name, arr[i].b_id, arr[i].b_author, arr[i].price);
            found = 1;
        }
    }

    if (!found) {
        printf("No book found with ID: %d\n", search);
    }
}

