#include <stdio.h>

int main() {
    const float PI = 3.14; 
    float radius;
    float area, perimeter;  

    printf("Enter radius of a circle: ");
    scanf("%f", &radius); 

    area = PI * radius * radius;
    printf("Area of a circle is %f\n", area); 

    perimeter = 2 * PI * radius;
    printf("Perimeter of a circle is %f\n", perimeter);

return 0;
}

