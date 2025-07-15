/*
1 2 3 
1 2 3
1 2 3
*/
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ", j+1);
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
A B C D 
A B C D
A B C D
A B C D
*/
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for(int i=0;i<n;i++){
//         char ch = 'A';
//         for(int j=0;j<n;j++){
//             printf("%c ", ch);
//             ch++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
A B C
D E F
G H I
*/
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     int num = 65;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             printf("%c ", num);
//             num++;
//         }
//         printf("\n");
//     }
//     printf("%c", num);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);

//     char ch = 'A';
//     for(int i=0;i<n;i++){
//         for(int i=0;i<n;i++){
//             printf("%c ", ch);
//             ch++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
1 2 3 
4 5 6
7 8 9
*/
// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     int num = 1; 
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ", num);
//             num++;
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
*/
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d ", &n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
1 
2 2
3 3 3
4 4 4 4
*/

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             printf("%d ", i+1);
//         }
//         printf("\n");
//     }
//     return 0;
// }
/*
A 
B B
C C C
D D D D
*/

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for(int i=0;i<n;i++){
//         int num = 65 +i;
//         for(int j=0;j<i+1;j++){
//             printf("%c ", num);
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
1 
1 2
1 2 3
1 2 3 4
*/

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for(int i=0;i<n;i++){
//         int num=1;
//         for(int j=0;j<i+1;j++){
//             printf("%d ", num);
//             num++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
1 
2 1
3 2 1
4 3 2 1
*/
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for(int i=0;i<n;i++){
        
//         for(int j=i;j>=0;j--){
//             printf("%d ", j+1);
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*     
    *
   ***
  *****
 *******
*/
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             printf(" ");
//         }
//         for(int k=0;k<2*i+1;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
1 
2 2
3 3 3
4 4 4 4
*/
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             printf("%d ", i+1);
            
//         }
//         printf("\n");
//     }
//     return 0;
// }


/*
A 
B B
C C C
D D D D
E E E E E
*/
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             printf("%c ", i+65);
//         }
//         printf("\n");
//     }
//     return 0;
// }


/*
1 
1 2
1 2 3
1 2 3 4
*/
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             printf("%d ", j+1);
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
1 
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
    
//     for(int i=1;i<=n;i++){
//         for(int j=i;j>=1;j--){
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }   

/*
A 
B A
C B A
D C B A
*/
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=i;j>=1;j--){
//             printf("%c ", j+64);
            
//         }
//         printf("\n");
//     }
//     return 0;
// }


//floyd's triangle
/*
1 
2 3
4 5 6
7 8 9 10
*/
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     int num = 1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             printf("%d ", num);
//             num++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
A 
B C
D E F
G H I J
*/
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     char ch = 'A';
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             printf("%c ", ch);
//             ch++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
1111
 222
  33
   4
*/
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     int num=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             printf(" ");
//         }
//         for(int j=0;j<n-i;j++){
//             printf("%d", i+1);
//             num++;
//         }
//         printf("\n");
//     }
//     return 0;
// }


/*
1111
 222
  33
   4
*/
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             printf(" ");
//         }
//         for(int j=0;j<n-i;j++){
//             printf("%d", i+1);
         
//         }
//         printf("\n");
//     }
//     return 0;
// }


/*
AAAA
 BBB
  CC
   D
*/
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             printf(" ");
//         }
//         for(int j=0;j<n-i;j++){
//             printf("%c", i+65);
//         }
//         printf("\n");
//     }
//     return 0;
// }


/*
    1
   121
  12321
 1234321
123454321
*/

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             printf(" ");
//         }
//     for(int j=1;j<=i+1;j++){
//             printf("%d", j);
//         }
//     for(int j=i;j>0;j--){
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             printf(" ");
//         }
//         for(int j=0;j<i+1;j++){
//             printf("%c", j+65);
//         }
//         for(int j=i;j>0;j--){
//             printf("%c", 65+j-1);
//         }
//         printf("\n");
//     }

//     return 0;
// }

/*
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
*/
#include <stdio.h>

int main(){
    int n;
    printf("Enter: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        printf("*");

        if(i!=0) {
            for(int j=0;j<2*i-1;j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    for(int i=0;i<n-1;i++){
        for(int j=0; j<i+1;j++){
            printf(" ");
        }
        printf("*");
        if(i != n-2){
            for(int j=0;j<2*(n-i)-5;j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}