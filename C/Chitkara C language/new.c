// #include <stdio.h>

// int main(){
//     for(int i = 1; i < 6; i++){
//         printf("%d\n", i);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(int i=0; i<n; i++){
//         if(i%2==0){
//             printf("%d\n", i);
//         } else{
//             continue;
//         }
//     }
//     return 0;
// }
//factorial of number
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact = fact * i;
//   } 
//     printf("Factorial of %d is %d", n, fact);
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     for(int i=0; i<=2; i++){
//         for (int j=0; j<=3; j++){
//             printf("%d %d\n", i, j);
//         }
//     }
//     return 0;
// }

// print the pattern 5 *
// #include <stdio.h>

// int main(){
//     for (int i=0; i<=4; i++){
//         for(int j=0; j<=4; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     for (int i=0; i<=4; i++){
//         for(int j=0; j<=i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// print ****
//       ***
//        **
//         *
#include <stdio.h>

int main(){
    int n=5;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    for(int i=0; i<n;i++){
        for(int j=0; j<i;j++){
            printf(" ");
        }
        for(int k=0; k<(n-i);k++){
            printf("* ");
        }           
    printf("\n");
    }
    return 0;
}
