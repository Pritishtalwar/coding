/*
i no of rows
j no of columns
*/

// #include <stdio.h>

// int main(){
//     int r;
//     printf("Enter number of rows: ");
//     scanf("%d", &r);
//     int n;
//     printf("Enter number of columns: ");
//     scanf("%d", &n);
//     for(int i=1;i<=r;i++){ //  no of lines
//         for(int i=1;i<=n;i++){ // no of stars in each line

//             printf("*");
//         } 
//         printf("\n");
//     } 
    
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     // int rows, columns;
//     // printf("Enter rows & columns: ");
//     // scanf("%d %d", &rows, &columns);
//     for(int i=1;i<=4;i++){
//         for(int i=1;i<=columns;i++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// // }
// star triangles
// #include <stdio.h>

// int main(){
//     int x;
//     printf("Enter: ");
//     scanf("%d", &x);
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int x;
//     printf("Enter: ");
//     scanf("%d", &x);
//     for(int i = 1;i<=x;i++){
//         for(int j=1;j<=x+1-i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int x;
//     printf("Enter: ");
//     scanf("%d", &x);
//     for(int i= 1;i<=x;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for(int i = 1;i<=n;i=i+2){
        
//         for(int j=1;j<=i;j=j+2){
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for(int i = 1;i<=n;i++){
//         if(i%2==0){
//             continue;
//         }
//         for(int j=1;j<=i;j++){
//             if(j%2!=0){
//                 printf("%d", j);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int x; 
//     printf("Enter: ");
//     scanf("%d", &x);
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=x+1-i;j++){
//             if(j%2!=0){

//                 printf("%d", j);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);

//     for(int i=1;i<=n;i++){
//         int a =1;
//         for(int j=1;j<=n;j++){
//             printf("%c ",a+64);
//             a++;
//         }
//         printf("\n");
//     } 
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);

//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1;j<=n;j++){
//             printf("%c ", a+64);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%c ", j+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if(i%2==0){
//                 printf("%c ", j+64);

//             }else{
//                 printf("%d ", j);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j==n/2+1 || i==n/2+1) printf("*");
//             else printf(" ");   
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     for(int i=1; i<=4;i++){
//         for(int j=1;j<=6; j++){
//             if(i==1 || i==4 || j==1 || j==6) printf("*");
//             else printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
