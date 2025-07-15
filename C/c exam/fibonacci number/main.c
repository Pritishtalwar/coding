#include <stdio.h>

int main(){
    int num, pos;
    printf("enter: ");
    scanf("%d %d", &num, &pos);

    num = num ^ (1<< pos);
    printf("%d\n", num);
    return 0;
}