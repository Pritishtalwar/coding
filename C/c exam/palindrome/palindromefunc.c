// #include <stdio.h>
// int palindrome(){}
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int Original = num;
//     int remainder = 0;
//     int Reversed=0;
//     for(int i = num; i!=0;i/=10){
//         remainder = i%10;
//         Reversed = Reversed * 10 + remainder;
//     }
//     if(Original == Reversed){
//         printf("Palindrome");
//     } else{
//         printf("Not a palindrome");
//     }
//     return 0;
// }

//sum of digits in num
// #include <stdio.h>

// int main(){
//     int num;
//     printf("Enter: ");
//     scanf("%d", &num);
//     int sum=0;
//     int remainder;
//     for(int i=num;i!=0;i/=10){
//         remainder=i%10;
//         sum = sum + remainder;
//     }
//     printf("%d", sum);
//     return 0;
// }


#include <stdio.h>

int main(){
    int num,original;
    scanf("%d", &num);
    original = num;
    int rev = 0;
    for(int i= num;i!=0;i/=10){
        int rem = i%10;
        rev = rev*10+rem;
    }
    if(original == rev){
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }
    return 0;
}