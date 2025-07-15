// #include<stdio.h>
// int main() {
//     // int age;
//     // printf("enter age: ");
//     // scanf("%d", &age);

// //condition for if elif ========= iss mein order if the else if then else hota
//     // if(condition){
//     //     //do something if TRUE
//     // } 
//     // else if(condition 2){
//     //     //do something if 1st is FALSE condition 2 is TRUE
//     // }

//     // if (age > 18) {
//     //     printf("Adult \n");
//     //     printf("they can vote");
//     // } 
//     // else {
//     //     printf("not adult \n");

//     // }

//     int age;
//     printf("enter age: ");
//     scanf("%d", &age);

//     if(age>=18) {
//         printf("Adult \n");
//     } 
//     else if(age > 13 && age < 18){
//         printf("teenager \n");
//     } 
//     else {
//         printf("child");
//     }
//     return 0;
// }

// Conditional operators
// Ternary
// #include<stdio.h>

// int main(){
//     int age;
//     printf("enter age: ");
//     scanf("%d", &age);

//     age >= 18 ? printf("adult \n") : printf("not adult \n");
//     // age >= 18 ? printf("This person is adult"):printf("Yeh not adult");
//     return 0;
// }

//integer case
// #include<stdio.h>
// int main() {
//     int day;
//     printf("enter day(1-7) : ");
//     scanf("%d", &day);

//     switch (day) {
//         case 1 : printf("monday");
//         break;
//         case 2 : printf("tuesday");
//         break;
//         case 3 : printf("wednesday");
//         break;
//         case 4 : printf("thursday");
//         break;
//         case 5 : printf("friday");
//         break;
//         case 6 : printf("saturday");
//         break;
//         case 7 : printf("sunnday");
//         break;
//     }
// }


//char case
// #include<stdio.h>
// int main(){
//     char day;
//     printf("enter day(1-7) : ");
//     scanf("%s", &day);

//     switch(day){
//         case 'm': printf("monday \n");
//         break;
//         case 't':printf("tuesday \n");
//         break;
//         case 'w':printf("wednesday \n");
//         break;
//         case 'T':printf("thursday \n");
//         break;
//         case 'f':printf("friday \n");
//         break;
//         case 's':printf("saturday \n");
//         break;
//         case 'S':printf("sunday \n");
//         break;
//     }
// }

//COnditional operator
// #include<stdio.h>
// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);     

//     if (number >= 0){
//         printf("positive\n");
//         if(number % 2 == 0) {
//             printf("even \n");
//         } else {
//             printf("odd \n");
//         }
//     } 
//     else{
//         printf("negative");
        
//     }
//     return 0;
// }

// wap to check if a student passed or failed.

// #include<stdio.h>
// int main(){
//     int marks;
//     printf("Enter marks: ");
//     scanf("%d", &marks);

//     // if (marks > 30 && marks <= 100) {
//     //     printf("is Pass \n");
//     // } else if(marks<=30){
//     //     printf("is FAIL \n");
//     // } else{
//     //     printf("wrong");
//     // }

//     marks <= 30 ? printf("is FAIL \n") : printf("isPASS \n");
//     return 0;
// }

/*
Wap to give grades to a student
marks<30 is c
30<=marks<70 is B
70<=marks<90 is A
90<= marks <=100 is A+
*/

// #include<stdio.h>

// int main() {
//     int marks;
//     printf("enter marks: ");
//     scanf("%d", &marks);

//     if(marks < 30) {
//         printf("C \n");
//     } else if(marks >= 30 &&  marks < 70){
//         printf("B \n");
//     } else if(marks >= 70 &&  marks < 90){
//         printf("A \n");
//     } else {
      
      
//         printf("A+ \n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x =2;

// if(x=1) {
//     printf("x is equal to 1");
// } else{
//     printf("x is not eqaul to 1");
    
// }
// return 0;
// }

// WAP to find if a character entered by user is upper case or not.
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("enter a character: ");
//     scanf("%c", &ch);
/*
 a ki ascii value 97 , A ki ascii value 65
 ch>= a likho ya ch>=97 likho
*/
//     if(ch>='A' && ch<='Z'){
//         printf("Upper Case\n");
//     } 
//     else if(ch >= 'a' && ch <= 'z'){
//         printf("Lower Case\n");
//     }
//     else {
//         printf("Not an alphabet\n");
//     } 
// return 0;
// }

/*
WAP to check if a number is armstrong number or not
*/
// #include<stdio.h>
// int main(){
//     return 0;
// }

/*
WAP to check if the numbe ris natural or not*/

// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter a number: ");
//     scanf("%d", &x);

//     if (x>0){
//         printf("Natural number");
//     } else {
//         printf("Not a natural number");
//     }
//     return 0;
// }

