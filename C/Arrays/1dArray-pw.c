// #include <stdio.h>

// int main(){
//     int arr[5];
//     printf("Enter: ");
//     int i;
//     for(i=0;i<5;i++){
//         scanf("%d", &arr[i]);
//     }
//     for(i=4;i>=0;i--){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[10];
//     int i;
//     printf("Enter: ");
//     for(i=0;i<10;i++){
//         scanf("%d", &arr[i]);
//     }
//     for(i=0;i<10;i++){
//         if(arr[i]<35){
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     int arr[n];
//     int i;
//     for(i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     int sum=1;
//     for(i=0;i<n;i++){
//         sum = sum * arr[i];
//     }
//     printf("Sum: %d\n", sum);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     int arr[n];
//     int i;

//     for(i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
    
//     int max=arr[0];
    
//     for(i=1;i<n;i++){
//         if(arr[i]>max){
//             max= arr[i];
//         }
//     }
//     printf("%d\n", max);
//     return 0;
// }

// #include <stdio.h>
// void fun(int arr[]){
    
//     int t = arr[0];
//     arr[0] = arr[1];
//     arr[1] = t; 
//     return;
// }
// int main(){
//     int arr[2] = {1,5};
//     fun(arr);
//    printf("%d %d\n", arr[0], arr[1]);
    
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int i;
//     for(i=0;i<12;i++){
//         if(i%2==0){
//             arr[i] += 10;
//         } else if(i%2!=0){
//             arr[i] = arr[i]*2;
//         }

//     }
//     for(i=0;i<7;i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[7]={3,2,5,6,7,8,9};
//     int i;
//     int count = 0;
//     for(i=0;i<7;i++){
//         if(arr[3]>arr[i]){
//             count++;
//         }
//     }
//     printf("%d\n", count);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[7]={3,2,5,6,7,8,9};
//     int i;
//     int sumeven=0;
//     int sumodd=0;
//     for(i=0;i<7;i++){
//         if(i%2==0){
//             sumeven+=arr[i];
//         } else if(i%2!=0){
//             sumodd+=arr[i];
//         }
//     }
//     printf("%d", sumeven-sumodd);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[8] = {1,2,3,4,5,6,7,8};
//     int i,j,totalp=0;
//     int x;
//     printf("Enter: ");
//     scanf("%d",&x);
//     for(i=0;i<8;i++){
//         for(j=i+1;j<8;j++){
//             if(arr[i]+arr[j] == x){
//                 totalp++;
//                 printf("(%d, %d)", arr[i], arr[j]);
//             }
//         }
//     }
//     printf("\n%d", totalp);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[8]={1,2,4,3,5,6,7,8};
//     int totalTriplets = 0;

//     int i, j, k;
//     int x=12;

//     for(i=0;i<8;i++){
//         for(j=i+1;j<8;j++){
//             for(k=j+1;k<8;k++){
//                 if(arr[i]+arr[j]+arr[k] == x){
//                     totalTriplets++;
//                     printf("(%d, %d, %d)", arr[i], arr[j], arr[k]);
//                 }
//             }
//         }
//     }
//     printf("\n%d", totalTriplets);
//     return 0;
// }

#include <stdio.h>
#include <limits.h>
int main(){
    int arr[8] = {10,2,3,4,5,6,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, largest, second_largest;

    largest = second_largest = -9999;
    for(i=0;i<n;i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        } else if(arr[i] > second_largest && arr[i] < largest){
            second_largest = arr[i];
        }
    }
    printf("\n%d %d", largest, second_largest);
    return 0;
}