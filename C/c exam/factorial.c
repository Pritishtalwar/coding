// #include <stdio.h>

// int factorial(int n);

// int main(){
//     int fact, value;
//     printf("Enter a number: ");
//     scanf("%d", &value);
//     fact = factorial(value);

//     printf("%d\n", fact);
//     return 0;
// }

// int factorial(int n){
//     if(n<0){
//         return -1;
//     }
//     if(n==0){
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     }
// }

#include <stdio.h>

int fact(int n){
    if(n<=1) return 1;
    return n*fact(n-1);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d", fact(n));
    return 0;
}