#include <stdio.h>

struct complex {
    double real;
    double imaginary;
};

void main() {
    int i;

    struct complex arr[3];

    for (i = 0; i < 3; i++) {
        printf("Enter the real number: ");
        scanf("%lf", &arr[i].real);

        printf("Enter the imaginary number: ");
        scanf("%lf", &arr[i].imaginary);
    }

    for (i = 0; i < 3; i++) {
        printf("Complex number: %lf + %lf\n", arr[i].real, arr[i].imaginary);
    }

}
