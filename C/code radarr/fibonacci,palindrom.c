// #include <stdio.h>
// #include <ctype.h>

// int main(){
//     char ch;  
//     printf("Enter a character: ");
//     scanf(" %c", &ch);

//     if (isdigit(ch)) {
//         printf("digit \n");
//     } else if (isalpha(ch)) {
//         char lower_ch = tolower(ch);

//         if (lower_ch =='o'||lower_ch =='a'||lower_ch =='e'||lower_ch =='i'||lower_ch =='u'){
//             printf("vowel \n");
//         } else {
//         printf("Consonant\n");
//         }
    
//     }else {
//         printf("Special Character\n");
//     }

// return 0;
// }


// #include <stdio.h>

// int main(){
//     int x;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     int fact = 1;
//     for(int i=2; i<=x;i++){
//         fact=fact*i;
//     }
//     printf("%d", fact);
//     return 0;
// }
//fibonacci
// #include <stdio.h>

// int main(){
//     int n, a=0, b=1, next;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     if(n<1) {
//         printf("Please enter a positive integer.");
//         return 0;
//     }

//     printf("Fibonacci Series: ");

//     for(int i=0; i<n; i++){
//         if(i==0)
//             next = 0;
//         else if(i==1)    
//             next = 1;
//         else {
//             next = a+b;
//             a=b;
//             b=next;
//         }
//         printf("%d ", next);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n, a=0, b=1, next;
//     printf("Enter the number of terms: ");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         if(i==0)
//             next = 0;
//         else if(i==1)
//             next = 1;
//         else {
//             next = a+b;
//             a=b;
//             b=next;
//         }    
//         printf("%d ",next);
//     }
//     return 0;
// }

//palindrome
// #include <stdio.h>

// int main(){
//     int num, original, reversed=0, remainder;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     original = num;

//     for(; num > 0; num /= 10) {
//         remainder = num % 10;
//         reversed = reversed*10 + remainder; 
//     }

//     if(original == reversed)
//         printf("%d is a palindrome.", original);
//     else
//         printf("%d is not a palindrome.", original);
//     return 0;
// }

//armstrong
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, i;
    double result = 0.0;

    // Taking input
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    originalNum = num;
    
    // Count the number of digits using for loop
    for (i = num; i != 0; i /= 10) {
        n++;
    }
    
    // Compute the sum of nth power of its digits using for loop
    for (i = num; i != 0; i /= 10) {
        remainder = i % 10;
        result += pow(remainder, n);
    }
    
    // Check if it is an Armstrong number
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    
    return 0;
}
