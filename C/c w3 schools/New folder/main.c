// #include <stdio.h>

// int main(){
//     char sign;
//     float a, b, result;
//     printf("Enter a sign(+,-,/,*): ");
//     scanf("%c", &sign);
//     printf("Enter num1: ");
//     scanf("%f", &a);
//     printf("Enter num2: ");
//     scanf("%f", &b);
//     // float a, b, result;
//     switch(sign){
//         case'+':
//         result = a+b;
//         printf("%.2f\n", result);
//         break;

//         case'-':
//         result = a-b;
//         printf("%.2f\n", result);
//         break;
        
//         case'*':
//         result = a*b;
//         printf("%.2f\n", result);
//         break;

//         case'/':
//         result = a/b;
//         printf("%.2f\n", result);
//         break;
        
//     }
//     return 0;
// }

// #include <stdio.h>
// #include<math.h>

// int main(){
//     const float rate=10;
//     const int time = 10;
//     float principal, compoundinterest;
//     printf("Enter the principal amount: ");
//     scanf("%f", &principal);
//     compoundinterest = principal*pow(1+rate/100 , time) - principal;
//     printf("The ci is: %.2f\n", compoundinterest);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     char ch;
//     printf("Enter: ");
//     scanf("%c", &ch);
//     if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
//         if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
//             printf("Vowel");
//         }else{
//             printf("Consonant");
//         }
//     }else{printf("not char");}
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a, b;
//     printf("Enter the first number: ");
//     scanf("%d", &a);
//     printf("Enter the second number: ");
//     scanf("%d", &b);

//     printf("Before swap:\nA=%d, B=%d\n", a, b);
//     printf("After swap:\nA=%d, B=%d\n", b, a);
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int a, b;
//     printf("Enter: ");
//     scanf("%d %d", &a, &b);
//     printf("%d\n", a|(1<<b));
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a, b;
//     printf("Enter: ");
//     scanf("%d %d", &a, &b);
//     int result = a^b;
//     printf("%d\n", result);
//     return 0;
// }

#include <stdio.h>

int main(){
    int a, b;
    printf("Enter: ");
    scanf("%d %d", &a, &b);
    printf("%d\n", a&~(1<<b));
    return 0;
}