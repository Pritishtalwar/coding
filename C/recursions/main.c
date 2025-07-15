// #include <stdio.h>
// int fact(int a){
//     if(a == 1 || a == 0) return 1;
//     return a*fact(a-1);
// }
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Factorial is: %d", fact(n));    
//     return 0;
// }

// n to 1
// #include <stdio.h>
// void dec(int n){
//     if(n==0) return;
//     printf("%d\n", n);
//     dec(n-1);
//     return ;
// }
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);    
//     dec(n);
//     return 0;
// }

// 1 to n
// #include <stdio.h>
// void inc(int n){
//     if(n==0) return;
//     inc(n-1);
//     printf("%d\n", n);
//     return ;
// }
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     inc(n);
//     return 0;
// }
// #include <stdio.h>
// void inc(int n){
//     if(n==0) return;
//     inc(n-1);
//     printf("%d\n", n);
//     return ;
// }
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     inc(n);
//     return 0;
// }

// #include <stdio.h>
// void inc(int n){
//     if(n==0) return;  
//     inc(n-1);
//     printf("%d\n", n);
// }
// void dec(int n){
//     if(n==0) return;
//     printf("%d\n", n);
//     dec(n-1);
//     return;
// }
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     dec(n);
//     inc(n);
//     return 0;
// }

#include <stdio.h>
int sum(int n){
    if(n==0) return 0;
    return n+ suim    
    return sum;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum(n);
    printf("%d\n", sum(n));
    return 0;
}