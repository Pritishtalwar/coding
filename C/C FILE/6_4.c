#include <stdio.h>
#include<math.h>
int main(){
    float b, p, H;
    printf("Enter b and p: ");
    scanf("%f %f", &b, &p);
    H = sqrt(b*b + p*p);
    printf("The hypotenuse is: %f", H);
    return 0;
}