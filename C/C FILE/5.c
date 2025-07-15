#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum of a&b is: %d\n", a+b);
    printf("Subtraction of a&b is: %d\n", a-b);
    printf("Multiplication of a&b is: %d\n", a*b);
    printf("Division of a&b is: %d\n", a/b);
    return 0;
}