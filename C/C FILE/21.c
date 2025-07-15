#include <stdio.h>

void updateValue(int *ptr) {
    *ptr = *ptr + 10;
}

int main(){
    int n;
    printf("Enter: ");
    scanf("%d", &n);
    updateValue(&num);
    printf("Value after update: %d", num);
    return 0;
}