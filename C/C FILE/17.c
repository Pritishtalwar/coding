#include <stdio.h>

float calculateArea(float radius) {
    return 3.14159 * radius * radius; // Pi (approximated)
}

float calculateCircumference(float radius) {
    return 2 * 3.14159 * radius;
}

int main() {
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = calculateArea(radius);
    circumference = calculateCircumference(radius);

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}