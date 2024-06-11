     
	 // array passing to a function

#include <stdio.h>
#include <string.h>

struct emp {
    int id;
    char name[20];
    double salary;
};

void storeArray(struct emp*, int);
void printArray(struct emp*, int);
void searchArray(struct emp*, int, int);

void main() {
    struct emp arr[5];
    storeArray(arr, 5);
    printArray(arr, 5);
    searchArray(arr, 5, 10);
}

void storeArray(struct emp* arr, int size) {
    int i;

    for (i = 0; i < size; i++) {
        printf("Enter the id: ");
        scanf("%d", &arr[i].id);

        printf("Enter the name: ");
        scanf("%s", arr[i].name);

        printf("Enter the salary: ");
        scanf("%lf", &arr[i].salary);
    }
}

void printArray(struct emp* arr, int size) {
    int i;

    for (i = 0; i < size; i++) {
        printf("Employee details:\n");
        printf("Employee id: %d\n", arr[i].id);
        printf("Name: %s\n", arr[i].name);
        printf("Salary: %lf\n", arr[i].salary);
    }
}

void searchArray(struct emp* arr, int size, int search) {
    int i, found = 0;

    for (i = 0; i < size; i++) 
	{
        if (arr[i].id == search) 
		{
            printf("Employee found with id %d, name: %s, salary: %lf\n", arr[i].id, arr[i].name, arr[i].salary);
            found = 1;
            break;
        }
    }

    if (!found) 
	{
        printf("Employee with id %d is not found.\n", search);
    }
}







