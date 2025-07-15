#include <stdio.h>

int main(){
    float rad;
    printf("Enter the radius: ");
    scanf("%f", &rad);
    printf("Circumference of circle: %.2f\n", 2*3.14*rad);
    printf("Area of circle: %.2f\n", 3.14*rad*rad);
    return 0;
}