// // #include <stdio.h>
// //  int main() {
// //     int num = 10;   // A normal integer variable
// //     int *ptr = &num; // Pointer stores the address of num
// //     printf("Value of num: %d\n", num);      // Prints 10
// //     printf("Address of num: %p\n", &num);   // Prints memory address
// //     printf("Value of ptr: %p\n", ptr);      // Same memory address
// //     printf("Value at ptr: %d\n", *ptr);     // Prints 10 (dereferencing)
// //     return 0;

// // }

// #include <stdio.h>

// int main(){
//     int x=10, y=25;
//     int *ptr1 = &x;
//     int *ptr2 = &y;
//     ptr1=ptr2;
//     printf("%d %d", *ptr1,*ptr2);
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int a=25, b;
//     int *ptr, *ptr1;
//     ptr = &a;
//     ptr1 = &b;
//     b=36;
//     printf("%d %p", *ptr, *ptr1);

//     return 0;
// }

// wap x =10, y=20 by 
// #include <stdio.h>

// int main(){
//     int x=10;
//     int y=20;
//      int temp;
//     temp = *(&x);
//     *(&x) = *(&y);
//     *(&y) = temp;
//     printf("%d %d", x,y);
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int a=25;
//     int *ptr =&a;
//     int **ptr = &ptr;
//     printf("%d", ptr);
//     return 0;
// }

// #include <stdio.h>
// int change(int x){
//     *x = 20;

// }
// int main(){
//     int a=5;
//     change(&a);
//     printf("%d", a);
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int arr[6] = {1,4,3,2,5,9};
//     for(int i=0;i<6;i++){
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d", &n);
//     int arr[n] = {};
//     printf("Enter: ");
//     int i;
//     for(i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     for(i=0;i<n;i++){

//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d", &n);
//     int arr[n];
//     int sum=0;
//     printf("Enter: ");
//     int i;
//     for(i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     for(i=0;i>n;i++){

//         printf("%d \n", &arr[i]);
//     }
//     for(i=0;i<=n;i++){
//         sum +=i;
//     }
//     printf("%d\n", sum);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
    
//     int arr[n];
//     printf("enter: ");
//     int i,j;
//     // int size = sizeof(arr)/sizeof(arr[0]);
//     for(i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     int min=arr[0];
//     for(i=0;i<n-1;i++){
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }
//     printf("%d", min);
//     return 0;
// // }

// #include <stdio.h>

// int main(){
//     int arr[6]={1,2,3,4,5};
//     printf("%d", arr[5]);
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
    
//     int val;
//     printf("Enter: ");
//     scanf("%d", &val);

//     int found = 0;

//     for(i=0;i<n;i++){
//         if(arr[i]==val){
//             printf("present at %d\n", i);
//             found = 1;
//             break;
//         } 
//     }
//         if(!found){
//             printf("not present ");
//         }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//         int arr[5] = {5,6,4,2,7};
//         for(int i=0;i<5;i++){
//             for(int j=0;j<5;j++){
//                 if(arr[j]>arr[j+1]){
//                     int temp = arr[j];
//                     arr[j] = arr[j+1];
//                     arr[j+1] = temp;
//                 }
//             }
//         }
//         printf("Sorted array: ");
//         for(int i=0;i<5;i++){
//             printf("%d ", arr[i]);
//         }
//     return 0;
// }

#include <stdio.h>
int sortedarray(int arr[]){
    // int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}
int main(){
    int arr[5] = {5,6,4,2,7};
    sortedarray(arr);
    for(int i=0;i<5;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}