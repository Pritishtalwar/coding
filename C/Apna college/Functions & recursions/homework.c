// to print sum of two numbers
// #include<stdio.h>
// int sum(int a,int b);
// int main() {
//     // int a= 32;
//     // int b= 45;

//     int a, b;
//     printf("Enter the first number: ");
//     scanf("%d", &a);
//     printf("Enter the second number: ");
//     scanf("%d", &b);
//    printf("the sum is : %d",sum(a, b));
//     return 0;
// }

// int sum(int a, int b) {
//     return a + b;
// }

// to find sum of digits fo a number
// #include<stdio.h>

// int main() {
//     int n, sum = 0, digit;

//     printf("Enter number: ");
//     scanf("%d", &n);

//     while(n!=0) {
//         digit = n % 10;
//         sum+=digit;
//         n/=10;

        
//     }
//     printf("Sum of the digits: %d\n", sum);
//     return 0;
// }

// WAF to find the square root of a number
// #include <stdio.h>
// #include <math.h> // Required for sqrt()

// double findSquareRoot(double number) {
//     if (number < 0) {
//         printf("Square root of a negative number is undefined in real numbers.\n");
//         return -1;
//     }
//     return sqrt(number);
// }

// int main() {
//     double number, result;

//     printf("Enter a number: ");
//     scanf("%lf", &number);

//     result = findSquareRoot(number);

//     if (result != -1) {
//         printf("Square root of %.2lf is %.2lf\n", number, result);
//     }

//     return 0;
// }

/*Write a function to print "Hot" or "Cold" depending
 on the temperature user enters  in c*/

// #include<stdio.h>

// void checkTemperature(int temperature) {
//     if (temperature >= 30){
//         printf("Hot\n");
//     } else{
//         printf("Cold\n");
//     }
//   }


// int main() {
//     int temperature;
//     printf("Enter the temperature: ");
//     scanf("%d", &temperature);

//     checkTemperature(temperature);

//     return 0;
// }


//make your own pow function