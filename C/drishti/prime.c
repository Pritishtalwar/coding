// #include <stdio.h>
// #include<math.h>

// int main(){
//     int n, i, isPrime = 1;

//     printf("Enter the number: ");
//     scanf("%d", &n);

//     if (n <= 1) {   // 1 se neeche wale no prime nhi hote
//         isPrime = 0; // 0 means false
//     } else{
//         for(i = 2; i<=sqrt(n); i++) { // sqrt(n) is the maximum possible factor of n
//             if (n % i == 0) {  // if n is divisible by i then it is not a prime number
//                 isPrime = 0;   // 0 means false
//                 break;
//             }
//         }
//     }

//     if (isPrime) {
//         printf("Prime\n");
//     } else{
//         printf("Not Prime\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include<math.h>

// int main(){
//     int n, i, prime=1;

//     printf("Enter the number: ");
//     scanf("%d", &n);
//     if(n<=1){
//         prime=0;
//     } else{
//         for(i=2; i<= sqrt(n);i++){
//             if (n%i==0){
//                 prime=0;
//                 break;
//             }
//         }
//     }
//     if(prime){
//         printf("Prime\n");
//     } else{
//         printf("Not Prime\n");
//     }
//     return 0;
// }

//other code
#include <stdio.h>

int main() {
    int n, i, prime = 1;
    
    // Input: Read a single integer
    scanf("%d", &n);
    
    // A number less than or equal to 1 is not prime
    if (n <= 1) {
        prime = 0;
    } else {
        // Check divisors from 2 to √n (or up to n/2 for simplicity)
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    // Output based on the result
    if (prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
    
    return 0;
}
