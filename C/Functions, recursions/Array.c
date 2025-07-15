//1d array

// // #include <stdio.h>

// // int main(){
// //     int a[5];
// //     int i;
// //     printf("Enter: ");
// //     for(i=0;i<5;i++) {
// //         scanf("%d", &a[i]);
// //     }

// //     printf("the entered numbers are: ");
// //     for(i=0;i<3;i++){
// //         printf("%d\n", a[i]);
// //     }
// //     return 0;
// // }

// #include <stdio.h>

// int main(){
//     int arr[10], i;
//     printf("Enter: ");
//     for(i=0;i<=4;i++){
//         scanf("%d", &arr[i]);
//     }
//     for(i=0;i<=4;i++){
//         if(arr[i]%2==0){

//             printf("%d\n", arr[i]);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a[5], i,j,temp;
//     printf("Enter: ");
//     for(int i=0;i<5;i++){
//         scanf("%d", &a[i]);
//     }

//     for(i = 0;i<4;i++) {
//         for(j=i+1;j<5;j++) {
//             if (a[i] > a[j]) {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }

//     printf("Ascending Order:\n");
//     for(i = 0;i<5;i++) {
//         printf("%d\n", a[i]);
//     }
//     printf("\n");

//     printf("Descending order: \n");
//     for(i=4;i>=0;i--) {
//         printf("%d\n", a[i]);
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a[5], sum=0;
//     int i;
//     printf("Enter: ");
//     for(i=0;i<5;i++){
//         scanf("%d", &a[i]);
//         }
//     for(i=0;i<5; i++){
//         sum = sum + a[i];
//     }
//     printf("%d\n", sum);
//     printf("%d\n", sum/5);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a[6], max =0;
//     int i;
//     printf("Enter: ");
//     for(i=0;i<6;i++){
//         scanf("%d", &a[i]);
//     }
//     max = a[i];

//     for(i=0;i<5;i++) {
//         if(max < a[i])
//         {
//             max = a[i];
//     }
// }
//     printf("%d\n", max);

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int matrix[3][3];
//     int i, j;
//     printf("Enter: ");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     printf("Matrix is: \n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main(){
    int matrix[2][2] = {{1, 2},{3, 4}};
    int sum = 0,i,j;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++) {
            sum+=matrix[i][j];
        }
    }
    printf("%d\n", sum);
    return 0;
}