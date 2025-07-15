// #include <stdio.h>

// int main(){
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     for(int i = 1; i<b+1; i++){
//         if(i>=1 && i<=9){
//             switch(i){
//                 case 1:printf("one\n");break;
//                 case 2:printf("two\n");break;
//                 case 3:printf("three\n");break;
//                 case 4:printf("four\n");break;
//                 case 5:printf("five\n");break;
//                 case 6:printf("six\n");break;
//                 case 7:printf("seven\n");break;
//                 case 8:printf("eight\n");break;
//                 case 9:printf("nine\n");break;
//             }
//             if(i>9 && i%2==0){
//                 printf("even\n");
//             }
//             else{
//                 printf("odd\n");
//             }
//         }
//     }
//     return 0;
// }

#include <stdio.h>

int main(){
    int n, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=0; i<=4; i++) {
        sum += n%10;
        n /=10;
    }
    printf("%d\n", sum);
    return 0;
}