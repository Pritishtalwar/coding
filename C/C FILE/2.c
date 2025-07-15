#include <stdio.h>

int main(){
    int age;
    float num;
    char name[30];
    
    printf("Enter age: ");
    scanf("%d", &age);
    
    printf("Enter a number: ");
    scanf("%f", &num);

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Age: %d\n", age);
    printf("Number: %f\n", num);
    printf("Name: %s\n", name);
    return 0;
}