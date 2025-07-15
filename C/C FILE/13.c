#include <stdio.h>

int main(){
    int n;
    printf("Enter: ");
    scanf("%d", &n);
    int a=0, b=1;
    int c;

    if(n<=0){
        printf("Please enter a positive integer.\n");
        return 0;
    }
    printf("Fibonacci series: ");
    printf("%d ", a);
    printf("%d ", b);
    for(int i=2;i<n;i++) {
        c=a+b;
        printf("%d ", c);
        a=b;
        b=c;       
    }
    return 0;
}