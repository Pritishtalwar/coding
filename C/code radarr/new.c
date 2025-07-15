#include <stdio.h>

int main(){
    int x;
    printf("Enter: ");
    scanf("%d", &x);
    int count = 0;
    int sum=0;

    for(;x!=0;){
        count++;
        int ld=x%10;
        sum=sum+ld;
        x=x/10;
    }
    printf("%d", sum);
    return 0;
}