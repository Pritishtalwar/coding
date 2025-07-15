// #include<stdio.h>
// // #include<math.h>

// int main() {
//     //And operator
//     // printf("%d\n", 4>3 && 5>2);
//     // printf("%d\n", 4>3 && 5<2);
//     // printf("%d\n", 4<3 && 5>2);
//     // printf("%d\n", 4<3 && 5<2);

//     // //Or operator
//     // printf("%d\n", 4>3 || 5>2);
//     // printf("%d\n", 4>3 || 5<2);
//     // printf("%d\n", 4<3 || 5>2);
//     // printf("%d\n", 4<3 || 5<2);

//     //Not operator
//     // printf("%d\n", !(4>3));
//     // printf("%d\n", !(4<3));
//     // printf("%d \n", !( (5>1) && (3>4)));
     

//     // ques wap to tell a number is divisble  by 2 or not
//     //method 1
//     // int number;
//     // printf("Enter a number: ");
//     // scanf("%d", &number);

//     // if (number%2 == 0){
//     //     printf("%d is divisble by 2", number);
//     // }
//     // else {
//     //     printf("%d is not divisble by 2", number);
//     // }

//     //method2
//     // int number;
//     // printf("Enter number: ");
//     // scanf("%d", &number);
//     // printf("%d", number % 2 == 0);

//     //practise q7 WAP are the followinf valid
//     /*
//     a. int a = 8^8 // this is valid 
//     b. int x; int y = x; // valid
//     c. int x, y = x; //invalid
//     d. char stars = '**'; //invalid
//     */

//     // int a = 8^8; // compiler ne issko 8 ki power 8 nhi lia compiler ne 8 exor 8 lia jab same no ko raise to power krte toh 0 aata power ke liye pow krna padta
//     // printf("%d\n", a);

//     // int x; 
//     // int y = x;

//     // int x, y = x; // yeh invalid ha

//     // char stars = '**';//not valid character mein ek hi daalte ha jaise '**' ki jagah '*' hi daalte ha

//     // practise q8 
//     /*
//     Print 1(true) or 0(false) for follwoing statements;
//     a. if it's sunday & it's snowing -> true
//     b. if it's monday or it's raining -> true
//     c. if a number is greater than 9 & less than 100 -> true

//     */
//     // int isSunday = 0;
//     // int isSnowing = 1;
//     // printf("%d \n", isSunday && isSnowing);

//     // int isMonday = 0;
//     // int isRaining = 1;
//     // printf("%d \n",isMonday || isRaining);

//     // int x;
//     // printf("Enter x: ");
//     // scanf("%d", &x);
//     // printf("%d", x>9 && x<100); // yeh true hoga kyunk


//     return 0;
// }

    //q1 wap to print average of three numbers
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter a: ");
//     scanf("%d",&a);
//     printf("Enter b: ");
//     scanf("%d",&b);
//     printf("Enter c: ");
//     scanf("%d",&c);

//     printf("Average is %d", (a+b+c)/3);

//     return 0
// }
 //q2 wap to check if given character digit or not

#include<stdio.h>
#include<ctype.h>
int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is not a digit.\n", ch);
    }

    return 0;
}