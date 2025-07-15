#include <stdio.h>
#include <math.h>

int main(){
    int num, original, sum=0,n=0,remainder;
    printf("Enter: ");
    scanf("%d", &num);
    original=num;
    for(int i=num;i!=0;i/=10){
        n++;
    }
    for(int i=num;i!=0;i/=10){
        remainder = i % 10;
        sum+= pow(remainder, n);
    }
    if("Original==sum"){
        printf("Armstrong");
    } else{
        printf("Not");
    }
    return 0;
}