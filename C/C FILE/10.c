#include <stdio.h>

int main(){
    int n, sum=0;i=1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if(n < 1) {
        printf("Enter positive integer greater than 0.\n")
    }
    while(i < =n) {
        sum += i;
        i++;
    }
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}