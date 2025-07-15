
// // #include <stdio.h>

// // int main(){
// //     int x;
// //     printf("Enter a year: ");
// //     scanf("%d", &x);
// //     if(x%400==0 || (x%4==0 && x%100!=0)){
// //         printf("leap");
// //     } else{
// //         printf("not leap");
// //     }
// //     return 0;
// // }
// // wap to check leap year continuously
// // #include <stdio.h>

// // int main(){
// //     int year;
// //     for(;;){
// //         printf("Enter a year: ");
// //         scanf("%d", &year);
// //         if(year % 4 == 0){
// //             if(year % 100 == 0){
// //                 if(year % 400 == 0){
// //                     printf("%d is a leap year\n", year);
// //                 }else{
// //                     printf("%d is not a leap year\n", year);
// //                 }
// //             }else{
// //                 printf("%d is a leap year\n", year);
// //             }
// //         }else{
// //             printf("%d is not a leap year\n", year);
// //         }
// //     }
// //     return 0;
// // }


// // #include <stdio.h>

// // int main(){
// //     int year;
// //     for(;;){
// //         printf("Enter a year: ");
// //         scanf("%d", &year);
// //         if(year %400 == 0 || year%4==0 && year%100!=0){
// //             printf("366 aaugi \n");
// //         }else{
// //             printf("qwerty/ nhi aaugi\n");
// //         }
// //     }   
// //     return 0;
// // }

// #include <stdio.h>

// int main(){
//     int a=188.99999;
//     printf("%d",a);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a;
//     printf("enter: ");
//     scanf("%d",&a);
//     if(a>0){
//         if(a%2==0){
//             printf("Even");
//         } else{
//             printf("odd");
//         }
//     } else{
//         printf("Less than 0");
//     }

//     return 0;
// }

// #include <stdio.h>

// void even_odd(int num){
//     if(num & 1){
//         printf("odd");
//     } else{
//         printf("even");
//     }
// }
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     even_odd(num);
//     return 0;
// }

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n & 1){
        printf("odd");
    } else{
        printf("even");
}
    return 0;
}