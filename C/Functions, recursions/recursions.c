#include <stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter: ");
    scanf("%d", &n);
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            printf("comp");
            break;
        }else{
            printf("prime");
            break;
        }
    }
    return 0;
}