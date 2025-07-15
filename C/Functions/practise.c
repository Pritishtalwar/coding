#include <stdio.h>
// void change(){
//     return;
// }

int main(){
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("The value of x and y after swapping is %d and %d\n", x, y);
    return 0;
}