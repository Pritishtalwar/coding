// #include <stdio.h>

// int main(){
//     int count =0;
//     // printf("Enter a number: ");
//     // scanf("%d", &n);
//     // int hf=1;
    
//     for(int i=1;i<=15;i++){
//         if(i%2==0){
//             count++;
//         }
//         // if(n%i == 0) hf = i;
//     }
//     printf("%d\n",count);
//     // printf("HF is :%d", hf);
//     return 0;
// }

// hf
// #include <stdio.h>

// int main(){
    
//         int n;
//         printf("Enter: ");
//         scanf("%d", &n);
//         int hf = 1;
//         for(int i=n/2; i>=1 ;i--){
//             if(n%i==0){
//                 hf=i;
//                 break;
//             }
//         }
//         printf("hf is %d\n", hf);
    
//     return 0;
// }


// wap to check prime or not
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     if(n<=1){
//         printf("Nothing");
//     }for(int i =2; i<n-1;i++){
//         if(n%i==0){
//             printf("Not prime");
//         }else{
//             printf("Prime");
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("enter: ");
//     scanf("%d", &n);
//     for(int i=2; i<=n-1;i++){
//         if(n%i==0){
//             printf("Composite");
//             break;
//         }else{
//             printf("Prime");
//             break;
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int check = 1;
//     for(int i=2; i<=n/2; i++){
//         if(n%i==0) {
//             check = 0;
//             break;
//         }
//     }
//     if (n==1) printf("Neither prime nor comp");
//     else if(check == 1) printf("Prime");
//     else printf("Composite");
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     int check=1;
//     for(int i=2;i<=n/2;i++){
//         if(n%i == 0){
//             check=0;
//             break;
//         }
//     }
//     if(n<=1) printf("please enter no more than 1");
//     else if(check == 0) printf("comp");
//     else printf("prime");
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int n;
//     printf("enter: ");
//     scanf("%d", &n);
//     int check = 1;
//     for(int i=2;i<=n/2;i++){
//         check = 0;
//         break;
//     }
//     if(n<=1) printf("please enter no more than 1");
//     else if(check == 0) printf("comp");
//     return 0;
// } 

// #include <stdio.h>

// int main(){
//     int x;
//     for(;;){
//         printf("Enter: ");
//         scanf("%d", &x);
//         for(int i = 2; i<=x/2; i++){
//             if(x%i==0){
//                 printf("Composite\n");
//                 break;
//             } else{
//                 printf("Prime\n");
//                 break;
//             }
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a, b, gcd;
//     scanf("%d %d", &a, &b);
//     int min = (a<b)?a:b;
//     for(int i = 1;i<=min;i++){
//         if(a%i == 0 && b%i == 0){
//             gcd = i;
//         }
//     }
//     int lcm = (a * b)/gcd;
//     printf("GCD: %d\n", lcm);
//     return 0;
// }
#include <stdio.h>

int main(){
    
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int l = arr[0], s= arr[1];
    if(s>l){
        int temp = l;
        l = s;
        s = temp;
    }
    for(int i=1;i<n;i++){
        if(arr[i]>l){
            s= l;
            l = arr[i];
        }
        else if(arr[i]>s && arr[i] != l){
            s = arr[i];
        }
    } 
    printf("Largest: %d\nSecond Largest: %d\n", l, s);
    return 0;
}