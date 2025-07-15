// #include <stdio.h>

// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int sum=0;
//     int rem;
//     for(int i=num;i!=0;i/=10){
//         rem = i%10;
//         sum=sum+rem;
        
//     }
//     printf("%d ", sum);
//     return 0;
// }

// // #include <stdio.h>

// // int sumofDigits(int n){
// //     if(n == 0) return 0;
// //     return n%10 + sumofDigits(n / 10);
// // }

// // int main(){
// //     int n;
// //     printf("Enter a number: ");
// //     scanf("%d", &n);

// //     printf("Sum of digits: %d\n", sumofDigits(n));
// //     return 0;
// // }
// // #include<stdio.h>

// // int sum(int n){
// //     if(n = 0)return 0;
// //     return n%10 + sum(n/10);
// // }

// // int main(){
// //     int n;
// //     scanf("%d", &n);
    
    
// //     printf("%d", sum(n));
// // }

// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0;i<n;i++){
//             if(arr[i] < arr[i+1]){
//                 int temp = arr[i];
//                 arr[i] = arr[i+1];
//                 arr[i+1] = temp;
//         }
//     }
//     for(int i=0;i<5;i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n], freq[1001] = {0},new[n];

//     for(int i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//         freq[arr[i]]++;
//     }
//     int j = 0;
//     for(int i = 0;i<n;i++){
//         if(freq[arr[i]] == 1){
//             new[j++] = arr[i];
//                     }
//     }

//     for(int i=0;i<j;i++)
// {
//     printf("%d ", new[i]);
// }    return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i == 1|| j== 1|| i==n|| j==n){
//                 printf("* ");
//             } else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0; 
// }

// #include <stdio.h>

// int main(){
//     char a[20], b[20], result[2444];
//     scanf("%s", a);
//     scanf("%s", b);
//     int i=0,j=0;
//     while(a[i] != '\0'){
//         result[i] = a[i];
//         i++;
//     }
//     while(b[j] != '\0'){
//         result[i] = b[j];
//         i++;
//         j++;
//     }
//     result[i] = '\0';
//     printf("%s\n", result);
//     return 0;
// }

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}