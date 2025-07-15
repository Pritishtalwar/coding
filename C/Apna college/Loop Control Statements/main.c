// FOR loop
// #include<stdio.h>
// int main(){
//     // for(int i=9; i>0;i = i-1) {
//     //     printf("%d \n",5*i);
//     // } 

//     return 0
// }
// #include<stdio.h>
// int main(){
//     for(float i=1.0; i<=5.0; i++) {
//         printf("%f \n", i);
//     }
// }

// #include <stdio.h>
// int main(){
//     //Print no from 0 to 10
//     for(int i=0; i <=10; i++ /*i = i+1 ko i++ likh sakte*/){
//         printf("%d \n",i);
//     }
//     return 0

// }

// #include<stdio.h>
// int main(){
//     /*
//     i mean increment operator
//     ++i (pre increment operator)
//     i++ (post increment operator)

//     int i = 1;
//     printf("%d \n", i++); //i++ mean use then increase
//     printf("%d \n", i);
//     printf("%d \n", ++i); //increase then use
//     printf("%d \n", i);
//     */
    
//     /*
//     i mean decrement operator
//     ++i (pre decrement operator)
//     i++ (post decrement operator)
//     int i = 1;
//     printf("%d \n", i--); //i++ mean use then increase
//     printf("%d \n", i);
//     printf("%d \n", --i); //increase then use
//     printf("%d \n", i);
//     */
    

//     return 0;
// }


//wap to print characcer from a to z
// #include<stdio.h>
// int main(){
//     for(char ch='a'; ch<='z'; ch++){
//         printf("%c \n", ch);
// }
// return 0;
// }

// #include<stdio.h>

// int main() {
//     for(int i=1; i<9;i++) {
//     printf("Hello world \n");
//     }
//     return 0;
// }










// WHILE loop
// #include<stdio.h>
// int main() {
//     int i=1;
//     while(i<5) {
//         printf("Hello world \n");
//         i++;
//     }
// }

// print no form 0 to n if n give by user
// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     /*usinf for loop
//     // for(int i=0; i<=n; i++) {
//     //     printf("%d \n", i);
//     // }  
//     */

//     /*using while loop
//     */
//     int i = 0;
//     while(i<8){
//     printf("%d \n", i);
//     i++;
//     }
//     return 0;
// }   








// do while loop
// #include<stdio.h>
// int main(){
//     int i = 0;
//     do{
//         printf("%d \n", i);
//         i++;
//     } while(i<=9);
//     return 0;
// }


// #include<Stdio.h>
// int main() {
//     int i = 5;
//     do{
//         printf("%d \n", i);
//         i--;
//     } while(i>=1);

//     return 0;
// }

// print sum of first n natural numbers
// also print in reverse

// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter: ");
//     scanf("%d", &n);
//     int sum =0;
//     for(int i=1; i<=n; i++){
//         sum +=i;

//     }
//     printf("%d \n", sum);
//     for(int i=n; i>=1; i--){
//         printf("%d\n", i);
//   }
//     return 0;    
//  }

// yeh 2 for loop lagae issko easy krne ke liye do while lagao
// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter: ");
//     scanf("%d", &n);
//     int sum =0;
//     for(int i=1, j=n; i<=n && j>=1; i++, j--){
//         sum +=i;
//     printf("%d\n", j);
//     }
//     printf("%d \n", sum);
//     return 0;    
// }

//print table of no input by user

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter: ");
//     scanf("%d", &n);
//     for(int i=1; i<=10; i++){
//         printf("%d \n", n*i);
//     }
// return 0;
// }

// #include<stdio.h>
// int main(){
//     for(int i=1; i<=10; i++){
//         if(i == 3) {
//             break;
//         }
//         printf("%d\n", i);
//     }
//     printf("End");
//     return 0;
// }


// keep taking input from user until user enters an odd number
// #include<stdio.h>

// int main() {
//     int n;
//     do {
//         printf("Enter a number: ");
//         scanf("%d", &n);
//         printf("%d \n", n);

//         if(n % 2 != 0) {
//             break;
//         }
//     } while(1);
//     printf("Thank you");
    
//     return 0;
// }

// keep taking numbers as input from user until user enters a number which is multiple of 7

// #include<stdio.h>
// int main() {
//     int n; 
//     do{
//         printf("Enter a number: ");
//         scanf("%d", &n);
//         printf("%d \n", n);

//         if (n%7 == 0) {
//             break;
//         }

//     } while(1);
//     printf("Thank you");
// return 0;
// }

// #include<stdio.h>
// int main(){
//     for (int i=1; i<=5; i++){
//         if(i == 3) {
//             continue;
//         }
//         printf("%d \n", i);
//     }
// }

// print from 1 to 10 except 6
// #include<stdio.h>

// int main() {
//     for (int i=1; i<=10; i++) {
//         if(i ==6) {
//             continue;
//         }
//         printf("%d \n", i);
//     }
// }

// #include<stdio.h>

// int main() {
//     for (int i=5; i<50; i++) {
//         if(i %2 == 0) {
//             continue;
//         }
//         printf("%d \n", i);
//     }
// }

// factorial
// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     int fact = 1;
//     for(int i=1; i <= n; i++) {
//         fact*=i;
//     }
//     printf("%d", fact);

//     return 0;
// }

// reverse of table
// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for(int i=10; i>= 0; i--){
//         printf("%d \n",n*i);
//     }
//     return 0;
// }

// calculate sum of all numbers between 5 and 50 including 5 and 50

// #include<stdio.h>
// int main() {
//     int sum =0;
//     for(int i =5; i<= 50; i++) {
//         sum += i;
//     }

//     printf("%d", sum);
// }


//a. printf the pattern

// #include<stdio.h>
// int main(){
//     int rows =5;
//     for(int i = 1; i<= rows; i++) {
//         for(int j = 1; j<=rows;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// print to check no is prime or not

#include<stdio.h>
int mainO(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int prime = 1;
    for(int i=2; i<= n/2; i++) {
        if(n % i == 0) {
            prime = 0;
            break;
        }
    }
    if(n<=1) {
        prime = 0;
    }

    if(prime) {
        printf("%d is aprime number. \n", n);
    } else {
        printf("%d is not a prime number. \n", n);
    }

    return 0;
}