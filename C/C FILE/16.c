#include<stdio.h>
#include<math.h>
int isPrime(int n){
    if(n<2) return 0;
    for(int i=2;i<n/2;i++){
        if(n%i == 0)
        return 0;
    }
    return 1;
}
int armstrong(int n) {
    int sum = 0, temp = n, digits = 0, remainder;
    while(temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp/=10;
        }
        return (sum == n);
    }
    int perfect(int n) {
        int sum =0;
        for(int i=1;i<=n/2;i++){
            if(n%i == 0)
            sum+=i;
        }
        return (sum == n);
    }
    int main() {
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
        if(isPrime(n)){
            printf("%d is a prime number.\n", n);
        }
        else{
            printf("%d is not a prime number.\n", n);
            }
        if(armstrong(n))
            printf("%d is an Armstrong number.\n", n);
        else 
            printf("%d is not an Armstrong number.\n", n);
        if(perfect(n))
            printf("%d is a perfect number.\n", n);
        return 0;
}