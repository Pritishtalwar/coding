// // #include <stdio.h>
// // #include<stdbool.h>
// // int main() {

// //     // printf("Demonstration of Escape Sequences in C:\n");
// //     // printf("---------------------------------------\n");

// //     // // Newline escape sequence
// //     // printf("This is a line of text.\nThis is another line of text.\n\n");

// //     // // Tab escape sequence
// //     // printf("Column1\tColumn2\tColumn3\n");
// //     // printf("Data1\tData2\tData3\n\n");

// //     // // Backslash escape sequence
// //     // printf("This is a backslash: \\\n\n");

// //     // // Single quote escape sequence
// //     // printf("It\'s a single-quoted text.\n\n");

// //     // // Double quote escape sequence
// //     // printf("\"Hello, World!\" is a common first program text.\n\n");

// //     // // Bell escape sequence (produces a beep sound on some systems)
// //     // printf("You might hear a beep sound after this line.\a\n\n");

// //     // // Carriage return escape sequence
// //     // printf("Carriage return in action\rCR\n\n");

// //     // // Printing a percent sign
// //     // printf("Printing a percent sign: %%\n");


// //     // bool a=true;
// //     // bool b = true;
// //     // bool c = false;
// //     // bool d = false;
// //     // int e = a+b+c+d;
// //     // printf("%d",  e);


// //     return 0;
// // }

// // #include <stdio.h>

// // enum Days {
// //     SUNDAY,    // 0
// //     MONDAY,    // 1
// //     TUESDAY,   // 2
// //     WEDNESDAY, // 3
// //     THURSDAY,  // 4
// //     FRIDAY,    // 5
// //     SATURDAY   // 6
// // };

// // int main() {
// //     enum Days today;

// //     today = WEDNESDAY;
// //     printf("Today is day number: %d\n", today);

// //     return 0;
// // }

// // #include <stdio.h>

// // int main() {
// //     int num = 5; // Binary: 00000101
// //     int result = num << 2; // Shift left by 2 positions

// //     printf("Left shift: %d << 2 = %d\n", num, result);
// //     return 0;
// // }

// // #include <stdio.h>

// // int main() {
// //     int num = 5; // Binary: 00000101
// //     int result = num >> 2; // Shift left by 2 positions

// //     printf("Left shift: %d >> 2 = %d\n", num, result);
// //     return 0;
// // }

// // #include<stdio.h>
// // int main(){
// //     int a=50, b=10;
// //     a+=30;
// //     a-=40;
// //     a*=3;
// //     a/=3;
// //     printf("%d", &a);
// //     // a%= 200;
// //     int c = a+b+10;
// //     printf("%d \n", a+=10+b);
// //     printf("%d \n", a+=30);
// //     printf("%d \n", a-=40);
// //     printf("%d \n", a*=10-b);
// //     // printf("%d \n", a/10);

// //     return 0;

    
// // // }
// // #include<stdio.h>
// // int main() {
// //     int n;
// //     printf("Enter n: ");
// //     scanf("%d", &n);
// //     printf("The cube of n is %d", n*n*n);
// //     return 0;
// // }

// // #include<stdio.h>
// // int main() {
// //     int x=2;
// //     // printf("Enter the number: ");
// //     // scanf("%d", &x);
// //     // int x=x+1;
// //     printf("%d\n", x++);
// //     printf("%d\n", x--);
// //     printf("%d\n", ++x);
// //     printf("%d\n", --x);
// //     printf("%d\n", x);
// //     // printf("Value of x -- is : %d", x);
// //     return 0;
// // // }
// // #include<stdio.h>
// // int main() {
// //     int x;
// //     printf("Enter the number: ");
// //     scanf("%d", &x);
// //     if(x==1 || x==0){
// //         printf("Coprime");
// //     } else if(x%2==0){
// //         printf("not Prime");
// //     } else{
// //         printf("prime");
// //     }
// // }
// // #include <stdio.h>

// // int main(){
// //     int a;
// //     printf("Enter number: ", a);
// //     scanf("%d", &a);
// //     switch(a){
// //         case 1:
// //             printf("One");
// //             break;
// //         case 2:
// //             printf("Two");
// //             break;
// //         case 3:
// //             printf("Three");
// //             break;
// //         default:
// //             printf("Invalid number");
// //     }
    


// //     return 0;
// // }

// // #include <stdio.h>

// // int main(){
// //     int a;
// //     printf("Enter number: ", a);
// //     scanf("%d", &a);
// //     if(a>1){
// //         printf("A is positive");

// //     }else{
// //         printf("A is negative");
// //     }
// //     return 0;
// // }

// // #include <stdio.h>

// // int main(){
// //     int a;
// //     printf("Enter number: ", a);
// //     scanf("%d", &a);
// //     if (a%2==0){
// //         printf("Even");
// //     } else{
// //         printf("Odd");
// //     }
// //     return 0;
// // }


// // to check vowel or consonant
// // #include <stdio.h>

// // int main(){
// //     char a;
// //     printf("Enter a character: ");
// //     scanf("%c", &a);
// //     if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
// //         printf("Vowel");
// //     } else{
// //         printf("Consonant");
// //     }
// //     return 0;
// // }

// // #include <stdio.h>

// // int main(){
// //     int a;
// //     printf("Enter a number: ");
// //     scanf("%d", &a);
// //     if(a%2==0){
// //         printf("Even");
// //     } else{
// //         printf("Odd");
// //     }
// //     return 0;
// // }

// // #include <stdio.h>

// // int main(){
// //     int age;
// //     printf("Enter your age: ");
// //     scanf("%d", &age);
// //     if(age>=18){
// //         printf("You are eligible to vote");
// //     } else{
// //         printf("You are not eligible to vote");
// //     }
// //     return 0;
// // }

// // #include <stdio.h>

// // int main(){
// //     int a, b;
// //     printf("Enter two numbers: ");
// //     scanf("%d %d", &a, &b);
// //     if(a>b){
// //         printf("A is greater than B");
// //     }if(a<b){
// //         printf("B is greater than A");
// //     }else{
// //         printf("A is equal to B");
// //     }
// //     return 0;
// // }

// // #include <stdio.h>
// // int main() {
// //     int x = 10;
// //     if(x = 5)
// //         printf("x is 5");
// //     return 0;
// // }
// // #include <stdio.h>

// // int main(){
    
// //     return 0;
// // }
// // switch case for vowels for both uppercase and lowercase
// // #include <stdio.h>

// // int main(){
// //     int n;
// //     printf("Enter a number: ");
// //     scanf("%d", &n);
// //     switch(n){
// //         case 1:
// //             printf("Monday");
// //             break;
// //         case 2:
// //             printf("Tuesday");
// //             break;
// //         case 3:
// //             printf("Wedneday");
// //             break;
// //         case 4:
// //             printf("Thursday");
// //             break;
// //         case 5:
// //             printf("Friday");
// //             break;
// //         case 6:
// //             printf("Saturday");
// //             break;
// //         case 7:
// //             printf("Sunday");
// //             break;
// //     }
// //     return 0;
// // }   

// // #include <stdio.h>

// // int main(){
// //     char grade;
// //     printf("Enter your grade: ");
// //     scanf("%c", &grade);
// //     switch(grade) {
// //         case 'A': case 'a':
// //             printf("Excellent");
// //             break;
// //         case 'B': case 'b':
// //             printf("Good");
// //             break;
// //         case 'C': case 'c':
// //             printf("Average");
// //             break;
// //         case 'D': case 'd':
// //             printf("Poor");
// //             break;
// //         case 'F': case 'f':
// //             printf("Fail");
// //             break;}
// //     return 0;
// // }

// // #include <stdio.h>

// // int main() {
// //     double num1, num2, result;
// //     char operator;

// //     // Taking input
// //     printf("Enter first number: ");
// //     scanf("%lf", &num1);
    
// //     printf("Enter an operator (+, -, *, /): ");
// //     scanf(" %c", &operator);  // Space before %c to handle previous newline
    
// //     printf("Enter second number: ");
// //     scanf("%lf", &num2);

// //     // Switch statement for arithmetic operations
// //     switch (operator) {
// //         case '+':
// //             result = num1 + num2;
// //             printf("Result: %.2lf\n", result);
// //             break;
// //         case '-':
// //             result = num1 - num2;
// //             printf("Result: %.2lf\n", result);
// //             break;
// //         case '*':
// //             result = num1 * num2;
// //             printf("Result: %.2lf\n", result);
// //             break;
// //         case '/':
// //             if (num2 != 0) {
// //                 result = num1 / num2;
// //                 printf("Result: %.2lf\n", result);
// //             } else {
// //                 printf("Error! Division by zero is not allowed.\n");
// //             }
// //             break;
// //         default:
// //             printf("Invalid operator entered!\n");
// //     }

// //     return 0;
// // }


// // #include <stdio.h>

// // int main(){
// //     double temp, convertedTemp;
// //     char choice;

// //     printf("Enter temperature: ");
// //     scanf("%lf", &temp);

// //     printf("Enter conversion type (C for Celsius to Fahrenheit, F for Fahrenheit to Celsius): ");
// //     scanf(" %c", &choice);

// //     switch(choice){
// //         case 'c': case 'C':
// //             convertedTemp = (temp * 9/5) + 32;
// //             printf("Temp in fahrenheit is: %.2lf", convertedTemp);
// //             break;
// //         case 'f': case 'F':
// //             convertedTemp = (temp - 32) * 5/9;
// //             printf("Temp in celsius is: %.2lf", convertedTemp);
// //             break;
// //     }
// //     return 0;
// // }

// // #include <stdio.h>

// // int main(){
// //     char ch;
// //     printf("Enter: ");
// //     scanf("%c", &ch);
// //     switch(ch){
// //         case 'a': case 'A':
// //             printf("Vowel");
// //             break;
// //         case 'e': case 'E':
// //             printf("Vowel");
// //             break;
// //         case 'i': case 'I':
// //             printf("Vowel");
// //             break;
// //         case 'o': case 'O':
// //             printf("Vowel");
// //             break;
// //         case 'u': case 'U':
// //             printf("Vowel");
// //             break;
// //         default:
// //             printf("Consonant");
// //     }
// //     return 0;
// // }

// // #include <stdio.h>

// // int main(){
// //     int day;

// //     printf("Enter day(1-7): ");
// //     scanf("%d", &day);

// //     switch(day){
// //         case 1:
// //             printf("Monday");
// //             break;
// //         case 2:
// //             printf("Tuesday");
// //             break;;
// //         case 3:
// //             printf("Wednesday");
// //             break;
// //         case 4:
// //             printf("Thursday");     
// //             break;
// //         case 5:
// //             printf("Thursday");
// //             break;        
// //         case 6:
// //             printf("Friday");
// //             break;
// //         case 7:
// //             printf("Saturday");
// //             break;
// //         default:
// //             printf("Invalid day");}           
// //     return 0;
// // }

// // #include <stdio.h>

// // int main() {
// //     int units;
// //     double bill;

// //     printf("Enter units: ");
// //     scanf("%d", &units);

// //     switch(units / 100) {
// //         case 0:
// //             bill = units * 5;
// //             break;
// //         case 1:
// //             bill = 100 * 5 + (units - 100) * 7;
// //             break;
// //         default:
// //             bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
// //     }

// //     printf("Bill: %.2lf", bill);
// //     return 0;
// // }

// #include <stdio.h>

// int main(){
//     int choice;
//     double balance = 10000, amount;

//     printf("ATM Menu:\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\nEnter Choice: ");
//     scanf("%d", &choice);

//     switch(choice) {
//         case 1:
//             printf("Your balance: ₹.2lf\n", balance);
//             break;
//         case 2:
//             printf("Enter deposit amount: ");
//             scanf("%lf", &amount);
//             balance += amount;
//             printf("New balance: ₹%.2lf\n", balance);
//             break;
//         case 3:
//             printf("Enter withdraw amount: ");
//             scanf("%lf", &amount);
//             if(amount <= balance) {
//     }
//     return 0;
// }