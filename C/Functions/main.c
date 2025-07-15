/*to avoid repition 
we can solve using loop but in function mein kuch certain type of repition jo loop se nhi kr sakte voh function se  kr sakte and code humara readable ho jae
computer sabse pehle main function ko padta ha jaise main mein greet() ha fi voh void greet() mein jaega void greet() mein return likhna zruri hota voh sirf vaha tak hi padta ha
code starts from main return ka matlab ha khatam krna 
*/
/*How function works
ek ke andar dusra dusre ke andar teesra*/
/*
imp pts
= main() ek hi baar aata ha
= starts with main
= unlimited functions
// */
// #include <stdio.h>
// void england(){
//     printf("You are in englnd \n");
//     return;
// }
// void australia() {
//     england();
//     printf("You are in australia \n");
//     return;
// }
// void india(){
//     australia();
//     printf("You are in India \n");
//     return;
// }
// int main(){
//     india();
//     return 0;
// }


// #include <stdio.h>
// void greet(){
//     printf("Hello\n");
//     printf("\n");
//     return;
//     printf("Good Morning\n");
//     printf("Good Afternoon\n");
// }
// int main(){
//     greet();
//     greet();    
//     greet();
//     greet();    
//     greet();
//     return 0;
// }

/*
Return type
*/
// #include <stdio.h>
// int add(int a, int b) {
//     return a+b;
// }
// int main(){
//     int a, b;
//     printf("Enter the values: \n");
//     scanf("%d %d", &a, &b);
//     int sum = add(a, b);
//     printf("The sum is %d\n", sum);   
//     return 0;
// }
//sqrt , pow library function
// #include <stdio.h>
// #include <math.h>

// int main(){
//     // int a;
//     // printf("Enter the value of a: \n");
//     // scanf("%d", &a);
//     // int root = sqrt(a);
//     // printf("%d", root);
//     // int q = pow(2, 6);
//     printf("%d", q);
//     return 0;
// }

// problem 1 Comb & permu nCr nPr
//formula of combination = n!/(r!(n-r)!)
//formula of permutation = n!/(n-r)!
// #include <stdio.h>

// int main(){
//     int n, r;
//     printf("Enter the value of n&r: \n");
//     scanf("%d %d", &n, &r);
//     int nfact=1;//factorial of n
//     int rfact=1;//factorial of r
//     int nrfact=1;//factorial of n-r
    
//     for(int i=2;i<=n;i++){
//         nfact = nfact * i;
//     }
//     for(int i=2;i<=r;i++){
//         rfact = rfact * i;
//     }
//     for(int i=2;i<=n-r;i++){
//         nrfact = nrfact * i;
//     }
//     int nCr = nfact/(rfact*nrfact);
//     printf("The value of nCr is %d\n", nCr);
//     return 0;
// }
// //using function 
// #include <stdio.h>
// int factorial(int num){
//     int fact =1;
//     for(int i=2;i<=num;i++){
//         fact = fact * i;
//     }
//     return fact;
// }
// int nCr(int n, int r){
//     int nfact = factorial(n);
//     int rfact = factorial(r);
//     int nrfact = factorial(n-r);
//     return nfact/(rfact*nrfact);
// }
// int main(){
//     int n, r;
//     printf("Enter the value of n&r: \n");
//     scanf("%d %d", &n, &r);
//     int result = nCr(n,r);
//     printf("The value of nCr is %d\n", result);
//     return 0;
// }
// usinf functions code of combinations

// #include <stdio.h>
// int fact(int num){
//     int fact =1 ;
//     for(int i=2;i<=num;i++){
//         fact = fact * i;
//     }
//     return fact;
// }
// int nCr(int n, int r){
//     int nfact = fact(n);
//     int rfact = fact(r);
//     int nrfact = fact(n-r);
//     return nfact/(rfact*nrfact);
// }
// int main(){
//     int n, r;
//     printf("Enter the value of n&r: \n");
//     scanf("%d %d", &n, &r);
//     int result = nCr(n,r);
//     printf("The value of nCr is %d\n", result);
//     return 0;
// }

// using function to find permutation

// #include <stdio.h>
// int factorial(int num){
//     int fact = 1;
//     for(int i=2;i<=num;i++){
//         fact = fact * i;
//     }
//     return fact;
// }
// int nPr(int n, int r){
//     int nfact= factorial(n); 
//     int rfact= factorial(r); 
//     int nrfact= factorial(n-r); 
//     return nfact/nrfact;
// }
// int main(){
//     int n, r;
//     printf("Enter n&r: ");
//     scanf("%d %d", &n, &r);
//     int result = nPr(n, r);
//     printf("The value of nPr is %d\n", result);
//     return 0;
// }

// #include<stdio.h>
// int fact(int num){
//     int fact = 1;
//     for(int i=2;i<=num;i++){
//         fact = fact*i;
//     }
//     return fact;
// }
// int nPr(int n, int r){
//     int nfact = fact(n);
//     int rfact = fact(r);
//     int nrfact = fact(n-r);
//     return nfact/nrfact;
// }
// int main(){
//     int n, r;
//     printf("Enter n&r: ");
//     scanf("%d %d", &n, &r);
//     // int result = nPr(n, r);
//     printf("%d", nPr(n , r));
// }
// Ques Pascal Triangle
// #include <stdio.h>

// int fact(int num){
//     int fact = 1;
//     for(int i=2;i<=num;i++){
//         fact = fact * i;
//     }
//     return fact;
// }

// int combination(int n, int r){
//     int nfact = fact(n);
//     int rfact = fact(r);
//     int nrfact = fact(n-r);
//     return nfact/(rfact*nrfact);
// }

// int main(){
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=i;j++){
//             int icj = combination(i, j);
//             printf(" %d ", icj);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // to find pascal using other methods ultimate method
// #include <stdio.h>
// int fact(int num){
//     int fact = 1;
//     for(int i=2;i<=num;i++){
//         fact = fact * i;
//     }
//     return fact;
// }
// int comb(int n, int r){
//     int nfact=fact(n);
//     int rfact=fact(r);
//     int nrfact=fact(n-r);
//     return nfact/(rfact*nrfact);
// }
// int main(){
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     for(int i = 0;i<=n;i++){
//         for (int j=0;j<=i;j++){
//             int pa = comb(i, j);
//             printf(" %d ", pa);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// swap two numbers

// #include <stdio.h>

// int swap(int a, int b){
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     printf("a = %d, b = %d",a,b);
//     return 0;6
// }
// int main(){
//     int a, b;
//     printf("Enter the value of a&b: ");
//     scanf("%d %d", &a, &b);
//     swap(a,b);
//     // int temp;
//     // temp = a;
//     return 0;
// }


// pass bhy value
#include <stdio.h>

int main(){
    for
    return 0;
}