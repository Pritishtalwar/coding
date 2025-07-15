#include <stdio.h>
#include<math.h>

int main(){
    float u,t,a;
    printf("Enter the value of u: ");
    scanf("%f",&u);
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of t: ");
    scanf("%f",&t);
    float result = u*t  + 1/2 *a*t*t ;
    printf("The value of S is: ", result);
    return 0;
}