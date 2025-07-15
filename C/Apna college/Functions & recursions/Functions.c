// #include<stdio.h>
// // declaration / prototype
// void printHello();

// int main() {
//     printHello(); //function call
//     printHello(); //function call
//     return 0; 
// }

// //function definition
// void printHello() {
//     printf("Hello! ");
//     printf("chitarkala \n");
// }

// #include<stdio.h>
// void printhell();

// int main() {
//     printhell();
//     printhell();
//     printhell();
//     printhell();
//     printhell();
//     printhell();
//     printhell();
//     printhell();
//     printhell();
//     printhell();
//     printhell();
//     return 0;
// }

// void printhell() {
//     printf("pielkwnnlncljn \n");
// }

// #include<stdio.h>
// void chitkara();

// int main(){
//     chitkara();
//     chitkara();
//     chitkara();
//     return 0;
// }

// void chitkara(){
//     printf("cnjncj\n");
//     printf("xccc\n");
//     printf("mmmmmmmmm\n");
//     printf("ppppppp\n");
//     printf("lorem2\n");
// }

// write a function - one to print "Hllo" & second to print "goodbye"

// #include<stdio.h>
// void hello();
// void goodbye();

// int main() {
//     hello();
//     goodbye();
// }

// void hello(){
//     printf("Hello\n");
      
// }

// void goodbye(){
//     printf("goodbye\n");
// }

//waf that prints Namaste if user is Indian and Bonjour if the user is French

// #include<stdio.h>

// void namaste();
// // void Bonjour();

// int main() {
//     // printf("Enter f for french & i for indan: \n");
//     // char ch;
//     // scanf("%c", &ch);

//     // if(ch == 'i') {
//     //     namaste();
//     // }
//     // else if(ch == 'f') {
//     //     Bonjour();
//     // }
//     // else{
//     //     printf("Invalid choice\n");
//     // }
//     namaste();
//     namaste();
//     namaste();
//     return 0;
// }

// void namaste() {
//     printf("Namaste\n");
//     printf("       Bonjour\n");
// }

// void Bonjour() {
//     printf("Bonjour");
// }

// #include<stdio.h>

// int sum(int a, int b);

// int main() {
//     int a, b;
//     printf("enter first number: ");
//     scanf("%d", &a);
//     printf("enter second number: ");
//     scanf("%d", &b);
    
//     int s = sum(a, b);  
//     printf("Sum is %d", s);
//     return 0;
// }

// int sum(int a, int b) {
//     return a + b;
// }

// #include<stdio.h>
// int main(){
//     int x, y;
//     printf("Enter the value of x: ");
//     scanf("%d", &x);
//     printf("Enter the value of y: ");
//     scanf("%d", &y);

//     printf("%d", x+y);
//     return 0;
// }

// #include<stdio.h>

// void printTable(int n);

// int main() {
//     int n;
//     printf("enter number: ");
//     scanf("%d", &n);
//     printTable(n);

//     return 0;
// }

// void printTable(int n) {
//     for(int i = 1; i <= 10; i++) {
//         printf("%d \n", i*n);
//     }
// }

// #include<stdio.h>

// void calculate(float value);

// int main(){
//     float value;
//     printf("Enter a value: ");
//     scanf("%f", &value);
//     calculate(value);
//     return 0;
// }

// void calculate(float value){
//     value = value + (0.18*value);
//     printf("%f", value);
// }

// #include<stdio.h>

// void calculate(float value);
// int main(){
//     float value;
//     printf("Enter the number: ");
//     scanf("%f", &value);
//     printf("Value is: %f \n", value);
//     calculate(value);
//     return 0;
// }

// void calculate(float value) {
//     value = value + (0.18*value);
//     printf("Total amount is: %f \n", value);
// }


//square of number given by user usin library function
// #include<stdio.h>

// void calculate(int square);

// int main(){
//     int square;
//     printf("Enter the number: ");   
//     scanf("%d", &square);
//     printf("The number is: %d \n", square);
//     calculate(square);
//     return 0;
// }

// void calculate(int square){
//     square = square*square;
//     printf("The square of the number is: %d \n", square);
// }
//other meethod
// #include<stdio.h>
// #include<math.h>

// void calculatePrice(float value);

// int main(){
//     int n=4;
//     printf("%f", pow(n ,2));
//     return 0;
// }


// functions to calculate area of square a circle and a rectangle

// #include<stdio.h>
// void area(int value);

// int main() {
//     int value;
//     printf("Enter the value: ");
//     scanf("%d", &value);
//     area(value);
//     return 0;
// }

// void area(int value){
//     printf("Area of square: %d", value*value);
// }

// #include<stdio.h>
// void area(float value);

// int main() {
//     float value;
//     printf("Enter the value: ");
//     scanf("%f", &value);
//     area(value);
//     return 0;
// }

// void area(float value){
//     printf("Area of circle: %f", 3.14*value*value);
// }

// #include<stdio.h>
// void area(float a,float b);

// int main() {
//     float a,b;
//     printf("Enter the value of a: ");
//     scanf("%f", &a);
//     printf("Enter the value of b: ");
//     scanf("%f", &b);
//     area(a, b);
//     return 0;
// }

// void area(float a,float b){
//     printf("Area of circle: %f", a*b);
// }

//simple method of doing this using math library.

// #include <stdio.h>
// #include <math.h>

// float squareArea(float side);
// float circleArea(float radius);
// float rectangleArea(float a, float b);

// int main(){
//     float side, radius, a, b;
//     printf("Enter the value of side: ");
//     scanf("%f", &side);
//     printf("Square area is %f\n", squareArea( side));
//     printf("Enter the value of rad: ");
//     scanf("%f", &radius);
//     printf("circle area is %f\n", circleArea(side));
//     printf("Enter the value of a: ");
//     scanf("%f", &a);
//     printf("Enter the value of b: ");
//     scanf("%f", &b);
//     printf("rectangle area is %f\n", rectangleArea(a, b));
    
//     return 0;
// }

// float squareArea(float side) {
//     return side*side;
// }
// float circleArea(float radius){
//     return 3.14*radius*radius;
// }
// float rectangleArea(float a, float b){
//     return a*b;
// }