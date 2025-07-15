#include <stdio.h>

int main(){
    int a=10;
    int b=20;
    swap(&a, &b);
    printf("%d\n%d\n",a, b);
    return 0;
}
void swap(int* x, int* y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}