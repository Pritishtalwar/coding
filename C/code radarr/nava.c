// #include <stdio.h>

// int main(){
//     int num, original, rev;
//     double result = 0.0;
//     original=num;
//     for(;i!=0;){
//         i=i/10;
//         n++;
//     }
//     for(i=num ;i!=0;i/=10){
//         rev = i%10;
//         result+=pow(remainder, n);
//     }
//     if((int) result == num)
//         printf("Arm");
//     else
//         printf("Not arm");
//     return 0;
// }


#include <stdio.h>
#include <math.h>

int main(){
    int num, original, n=0, i;
    double result=0.0;
    printf("Enter: ");
    scanf("%d", &num);
    original = num;

    for(i=num;i!=0;i/=10){
        n++;
    }
    for(i=num;i!=0;i/=10){
        int ld=i%10;
        result += pow(ld, n);

    }
    if(original == result)
        printf("Arm");
    else
        printf("Not arm");
    return 0;
}