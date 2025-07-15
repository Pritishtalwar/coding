// count digits of a no
// #include <stdio.h>

// int main(){
//     int x;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     int count = 0;
    
//     for(; x!= 0;){
//         x=x/10;
//         count++;
//     }
//     printf("%d", count);
//    return 0;
// }


// sum of doigits of a no
// #include <stdio.h>

// int main(){
//     int x;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     // int count = 0;
//     int sum = 0;
//     for(;x!=0;){
//         int ld = x%10;
//         sum= sum+ld;
//         x=x/10;
//         // count++;
//     }
//     printf("Sum of digits is %d\n",sum);
//     // printf("%d",count);   
//     return 0;
// }

//wap to print sum of all even digits of a no
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int sum = 0;
//     for(;n!=0;){
//         int ld = n%10;
//         if(ld%2==0){
//             sum = sum+ld;
//         }
//         n=n/10;
//     }
//     printf("%d", sum);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("enter: ");
//     scanf("%d", &n);
//     int count = 0;
//     int sum = 0;
//     for(; n!= 0;){
//         int ld = n%10;
//         if(ld%2==0){
//             sum=sum+ld;
            
//         }
//         n=n/10;
//         count++;
//     }
//     printf("%d\n", count);

//     printf("%d\n", sum);
//     return 0;
// }


// raverse of given no
// #include <stdio.h>

// int main(){
//     int n, r=0;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for(;n!=0;){
//         int ld  = n%10;
//         r=ld+r*10;
//         n=n/10;
//     }
//     printf("%d", r);
//     return 0;
// }
// wap t0 print sum opf given no and its reverse

// #include <stdio.h>

// int main(){
//     int n;
//     int r=0;
//     printf("Enter: ");
//     scanf("%d", &n);
//     int original=n;
//     for(;n!=0;){
//         int ld=n%10;
//         r=ld+r*10;
//         n=n/10;
//     }
//     printf("%d\n", r);
//     int sum = original+r;
//     printf("%d\n", sum);
//     return 0;
// }

// factorial
// #include <stdio.h>

// int main(){
//     int x;
//     printf("Enter: ");
//     scanf("%d", &x);
//     int fact = 1;
//         for(int i=1;i<=x;i++){
//             fact=fact*i;
//         }
//         printf("%d\n", fact);
    
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int x;
//     printf("Enter: ");
//     scanf("%d", &x);
//     if(x<=0){
//         printf("Factorial is not possible");
//     }else if(x==1){
//         printf("Factorial of %d is 1", x);
//     } else{
//         int fact=1;
//         for(int i=2;i<=x;i++){
//             fact=fact*i;
//         }
//         printf("Factorial of %d is %d", x, fact);
//     }
//     return 0;
// }


//wap to print all the ascii values and their equivalent 

// #include <stdio.h>

// int main(){
//     printf("ASCII Values and their Equivalents:\n");
//     for(int i = 0; i <= 127; i++){
//         printf("ASCII Value: %d, Equivalent: %c\n", i, i);
//     }
//     return 0;
// }