// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter the value of n\n");
//     scanf("%d", &n);
//     if(n ==1 || n==0){
//         printf("Invalid input\n");
//     } 
//     for(int i =2;i<=n-1;i++){
//         if(n%i==0){
//             printf("Not a prime number\n");
//             break;
//         } else {
//             printf("Prime number\n");
//         }
//     }
//     return 0;
// }

// // hcf
// #include <stdio.h>
// int gcd(int a, int b){
//     if(b == 0){
//         return a;
//     }
//     return gcd(b, a%b);
// }
// int main(){
//     int a, b;
//     printf("Enter the values: ");
//     scanf("%d %d", &a, &b);
//     int hcf = gcd(a, b);
//     printf("HCF of %d and %d is %d\n", a, b, hcf);
//     return 0;
// }

