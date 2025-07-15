#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int temp;
    temp =a;
    a=b;
    b=temp;
    printf("a=%d, b=%d", a, b);
    return 0;
}