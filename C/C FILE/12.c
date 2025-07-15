#include <stdio.h>

int main(){
    int num;
    printf("Enter: ");
    scanf("%d", &num);
    int originalNum=num;
    int count = 0;
    int rev = 0;
    int rem;
    for(int i=num;i!=0;i/=10){
        rem = i%10;
        rev = rev*10 + rem;
        count++;

    }
    printf("The no of digits in %d is %d", originalNum,count);
    printf("\nReversed number is %d", rev);
    return 0;
}