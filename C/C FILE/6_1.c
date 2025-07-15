#include <stdio.h>
#include<math.h>

int main(){
    float u, a,t;
    printf("Enter u: ");
    scanf("%f", &u);
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter t: ");
    scanf("%f", &t);
    float result = u+a*t;
    printf("The value of V is %.2f", result);
    return 0;
}