#include <stdio.h>

int main(){
    int num, remainder, originalNum, reversedNum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;

    for(int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

    if(originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else{
        printf("%d is not a palindrome.\n", originalNum);
    }
    return 0;
}

// // #include <stdio.h>

// // int main(){
    
    
// //     for(;;){
// //         int num, reversedNum = 0, remainder, originalNum;
// //         printf("Enter an integer: ");
// //         scanf("%d", &num);
// //         originalNum = num;

// //         for(int temp = num; temp != 0; temp /= 10) {
// //             remainder = temp % 10;
// //             reversedNum = reversedNum  * 10 + remainder;
// //         }
        
// //         if (originalNum == reversedNum){
// //             printf("%d is a palindrome.\n", originalNum);
// //         }else{
// //             printf("%d is not a palindrome.\n", originalNum);
// //         }
// //     }
// //         return 0;
// //     } 
    
    

// // #include <stdio.h>

// // int main(){
// //     int num, reversedNum=0, originalNum, remainder;
// //     printf("Enter: ");
// //     scanf("%d\n", &num);
// //     for(int temp=num;temp!= 0; temp /= 10){
// //         remainder = temp%10;
// //         reversedNum = reversedNum*10 + remainder;
// //     }

// //     if(originalNum=reversedNum){
// //         printf("%d is a palindrome.\n", originalNum);
// //     } else{
// //         printf("%d is not a palindrome.\n", originalNum);
// //     }
// //     return 0;
// // }

// #include <stdio.h>

// int main(){
//     int num, reverse = 0, remainder, original;
    
//     printf("Enter num: ");
//     scanf("%d", &num);

//     original = num;
    
//     for(int temp = num; temp != 0; temp /= 10){
//         remainder = temp % 10;
//         reverse = reverse * 10 + remainder;
//     } 

//     if(original == reverse){
//         printf("Palindrome");
//     } else{
//         printf("Not a palindrome");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int num, originalnum, reversednum=0, remainder;
   
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     originalnum = num;

//     for(int temp = num; temp != 0; temp /= 10){
//         remainder = temp % 10;
//         reversednum = reversednum*10+remainder;
//     }

//     if(originalnum==reversednum){
//         printf("%d is a palindrome.\n", originalnum);
//     } else{
//         printf("%d is not a palindrome.\n", originalnum);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int num, original, reverse=0, remainder;
//     printf("Enter: ");
//     scanf("%d", &num);

//     original= num;

//     for(int temp=num; temp!=0; temp /=10){
//         remainder = temp%10;
//         reverse=reverse*10+remainder;
//     }
//     if(original==reverse){
//         printf("palinderome");
//     } else{
//         printf("Not");
//     }
//     return 0;
// }