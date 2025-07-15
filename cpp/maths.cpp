// #include<iostream>
// using namespace std;

// bool isPrime(int n) {
//     if (n <= 1) return false;

//     for(int i = 2; i*i <= n; i++) {
//         if(n % i == 0){
//             return false;
//         } 
        
//     }
//     return true;
// }

// int main() {
//     int n;
//     cin >> n;
//     if(isPrime(n)) {
//         cout << n << " is a prime number." << endl;
//     }else{
//         cout << n << " is not a prime number." << endl;
//     }

// }

// count primes
// #include<iostream>
// using namespace std;

// bool isPrime(int n) {
//     if(n <= 1) return false;

//     for(int i = 2;i < n; i++) {
//         if(n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int countPrimes(int n) {
//     int count = 0;
//     for(int i = 2; i < n; i++) {
//         if(isPrime(i)){
//             count++;
//         }
//     }
//     return count;
// }

// int main(){
//     int n;
//     cin >> n;
//     cout<< "Number of primes from 1 to " << n << " is: " << countPrimes(n) << endl;
//     return 0;
// }/

#include<iostream>
using namespace std;

int gcd(int a, int b) {

    if(a == 0) return b;

    if(b == 0) return a;

    while(a != b) {
        if(a > b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int lcm(int a, int b){
    return a*b/gcd(a, b);
}

int main (){
    int a, b;
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;
    cout <<"Lcm of " << a << " and " << b << " is: " << lcm(a, b) << endl;
    return 0;
}