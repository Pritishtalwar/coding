// #include <stdio.h>
// #include <math.h>

// int main(){
//     int num, original, sum=0,n=0,remainder;
//     printf("Enter: ");
//     scanf("%d", &num);
//     original=num;
//     for(int i=num;i!=0;i/=10){
//         n++;
//     }
//     for(int i=num;i!=0;i/=10){
//         remainder = i % 10;
//         sum+= pow(remainder, n);
//     }
//     if(Original == sum){
//         printf("Armstrong");
//     } else{
//         printf("Not");
//     }
//     return 0;
// }

// count no of armstrong numbers in a range and pritn them also
#include <stdio.h>
#include <math.h>

int arm(int num){
    int n=0,sum=0,remainder,original;
    original = num;
    for(int i=num;i!=0;i/=10){
        n++;
    }
    for(int i=num;i!=0;i/=10){
        remainder = i%10;
        sum+= pow(remainder, n);
    }
    return original == sum;
}

int main(){
    int start, end;
    int count = 0;
    scanf("%d %d", &start, &end);
    for(int i=start;i<=end;i++){
        if(arm(i)){
            count++;
            printf("%d ", i);
        }
    }
    printf("\nCount: %d\n", count);
    return 0;
}