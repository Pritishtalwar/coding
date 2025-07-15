// 1       2       3       4       5       6
// 2       4       6       8       10      12
// 3       6       9       12      15      18
// 4       8       12      16      20      24
// 5       10      15      20      25      30
// 6       12      18      24      30      36
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             printf("%d\t", i*j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
*
**
***
****
*****
******
*******
********
*/

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


/*
*****
****
***
**
*
*/

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf("*");
//         }
//         printf("\n")
//     }
//     return 0;
// }


/*
    *
   **
  ***
 ****
*****
*/
#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

