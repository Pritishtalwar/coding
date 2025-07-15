// #include<stdio.h>

// * jaha value chahie
// & jab address chahie


// #include<stdio.h>
// int main() {
//     int age = 22;
//     int *ptr = &age;
//     // int _age = *ptr;
//     // //address
//     // // printf("%p\n", _age);
//     // printf("%u\n", &age);
//     // printf("%u\n", ptr);
//     // printf("%u\n", &ptr);
    
    
//     //value
//     printf("%d\n", age);
//     printf("%d\n", *ptr);
//     printf("%d\n", *(&age));
//     return 0;
// } 


//practise ques 36
// #include<stdio.h>
// int main(){
//     int x;
//     int *ptr;

//     ptr = &x;
//     *ptr = 0;//x = 0

//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     *ptr += 5;
//     printf(" x = %d\n", x);
//     printf(" *ptr = %d\n", *ptr);

//     (*ptr)++;
//     printf(" x = %d\n", x);
//     printf(" ptr = %d\n", *ptr);
//     return 0;
// }

//print value of "i" from its pointer to pointer
// #include<stdio.h>

// int main() {
//     int i = 5;
//     int *ptr = &i;
//     int **pptr = &ptr;
//     printf("%d\n", **pptr);

//     return 0;
// }

// #include<stdio.h>
// void square(int n);
// void _square(int* n);

// int main(){
//     int number = 4;
//     square(number);
//     printf("number = %d\n", number);

//     _square(&number);
//     printf("number = %d\n", number);

//     return 0;
// }

// void square(int n) {
//     n = n * n;
//     printf("square = %d\n", n);
// }

// void _square(int* n) {
//     *n = (*n) * (*n);
//     printf("square = %d\n", *n);
// }

// swap 2 numbers b/w a & b.

// #include <stdio.h>

// void swap(int a, int b);
// void _swap(int *a, int *b);

// int main(){
//     int x=3;
//     int y = 5;
//     _swap(&x, &y);
//     printf("x = %d & y = %d\n", x, y);
//     return 0;
// }
// // call by reference
// void _swap(int *a, int *b){
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// // call by value
// void swap(int a, int b){
//     int t = a;
//     a = b;
//     b = t;
//     printf("a = %d & b = %d\n", a, b);
// }

// q 39
// waf to calculate the sum, product and av of 2 numbers print that average in main
// #include <stdio.h>
// void doWork(int a, int b, int *sum, int *prod, int *avg);

// int main() {
//     int a = 3, b = 5;
//     int sum, prod, avg;
//     doWork(a, b, &sum, &prod, &avg);

//     printf("sum = %d,  prod = %d, avg = %d\n", sum, prod, avg); 
//     return 0;
// }

// void doWork(int a, int b, int *sum, int *prod, int *avg) {
//     *sum = a+b;
//     *prod = a*b;
//     *avg =  (a+b)/2;
// }

//wap to find the maximum numbers between two numbers using a pointer
// #include <stdio.h>
// void findMax(int *a, int *b, int *max);

// int main() {
//     int num1, num2, max;

//     printf("Enter the first number: ");
//     scanf("%d", &num1);
//     printf("Enter the second number: ");
//     scanf("%d", &num2);

//     findMax(&num1, &num2, &max);

//     printf("The maximum number between %d and %d is %d.\n", num1, num2, max);

//     return 0;
// }

// void findMax(int *a, int *b, int *max) {
//     *max = (*a > *b) ? *a : *b;
// }

// #include<stdio.h>
// void find(int *a,int *b, int *max);

// int main() {
//     int num1, num2, max;
//     printf("Enter the first number: ");
//     scanf("%d", &num1);
//     printf("Enter the second number: ");
//     scanf("%d", &num2);
//     find(&num1, &num2, &max);
//     printf("%d", max);
//     return 0;
// }

// void find(int *a,int *b, int *max) {
//     *max = (*a > *b) ? *a : *b;
// }

//. Write a program in C to print the elements of an array in reverse order.
// #include<stdio.h>

// void printreverse(int *arr, int size) {
//     printf("Array in reverse order: ");
//     for(int i=size - 1; i>=0; i--) {
//         printf("%d ", (arr));
//     }  
// }

//. Write a program in C to print all the letters in english
//  alphabet using a pointer
#include<stdio.h>
void printAlphabets(char *ptr);
int main() {

    printAlphabets(&ptr);
    return 0;
}

void printAlphabets(char *ptr) {
    for (char ch = 'A'; ch<='Z'; ch++){
        *ptr = ch;
        printf("%c", *ptr);

    }
    printf("\n");
}