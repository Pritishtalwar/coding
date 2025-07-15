#include <stdio.h>

int main(){
    int a, b, c;
    for(;;){
    printf("Enter: ");
    scanf("%d %d %d", &a, &b, &c);
        int sav = 0;
        for(int i = 1; i<= c; i++){
            sav = sav + b*i;
    
        }
        printf("%d\n", a + sav);
        
    }
    return 0;
}

// #include<stdio.h>

// int main(){
//     int x;
//     printf("Enter: ");
//     scanf("%d", &x);
//     int sum = 0;
//     for(;x!=0;){
//         int ld=x%10;
//         sum = sum+ld;
//         x=x/10;
//     }
//     printf("%d\n", sum);
//     return 0;
// }