//print hellow orld 5 times using recursion
// #include<stdio.h>

// void printHW(int count);

// int main() {
//     printHW(5);
//     return 0;
// }
// // recursive function
// void printHW(int count) {
//     if(count == 0) {
//         return;
//     }

//     printf("Hello World\n");
//     printHW(count - 1);
// }
//sum of natural numbers
// #include<stdio.h>
// int sum(int n);

// int main() {
//     printf("Sum is: %d", sum(8));
//     return 0;
// }

// int sum(int n) {
//     if (n == 1) { 
//     return 1;
//     }
//         int sumNm1/*(sum of 1 to n)*/ = sum(n-1); 
//         int sumN = sumNm1 + n;
//         return sumN; 
     
// }
 

//factorial of n
// #include<stdio.h>

// int fact(int n);

// int main() {
//     printf("Factorial is: %d", fact(5));
//     return 0;
// }

// int fact(int n){
//     if(n == 0) {
//         return 1;
//     }

// int factNm1 = fact(n-1);
// int factN = factNm1 * n;
// return factN;
// }

//Celsius to Fahrenheit
// #include<stdio.h>
// float convert(float n);

// int main(){
//     printf("Temp in fahrenheit is: %f", convert(30));
//     return 0;
// }
// float convert(float n) {
//     float fahrenheit = (n * 9/5) + 32;
//     return fahrenheit;

// }

//WAF to calculate Percentage of a student from Marks in Science, Math & Sanskrit
// #include<stdio.h>
// int percentage(int science, int math, int sanskrit);

// int main() {
//     int science = 90;
//     int math = 80;
//     int sanskrit = 90;
//     printf("%d", percentage(science, math, sanskrit));
// }

// int percentage(int science, int math, int sanskrit){
//     return ((science+math+sanskrit)/3);
// }

//to print fibonacci sequence
// #include<stdio.h>

// int fib(int n);

// int main() {
//     printf("%d", fib(6));
//     return 0;
// }

// int fib(int n) {
//     if(n==0 || n==1) {
//         if(n==0) {
//             return 0;
//         }
//         if(n==1) {
//             return 1;
         
//         }
//     }
//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n-2);
//     int fibN = fibNm1 + fibNm2;
//     printf("fib of %d is : %d \n", n, fibN);
//     return fibN;
// }