// #include<iostream>
// using namespace std;

// int fact(int n){
//     if(n<=1) return 1;
//     return n * fact(n - 1);
// }
// int nCr(int n,int r){
//     return fact(n) / (fact(r) * fact(n - r));
// }

// int main(){
//     int n,  r;
//     cin >> n>> r;
//     cout << "The nCr: "<< nCr(n, r)<< endl;
// }

//hw
// to check prime or not

// #include<iostream>
// using namespace std;

// bool prime(int n){
//     if(n<= 1){
//         cout << "Not a prime number" << endl;
//         return false;
//     }
//     for(int i=2;i*i<=n;i++){
//         if(n%i  == 0){
//      return  false;
            
//         }
//     }
//     return true;
// }

// int main(){
//     int n;
//     cin>>n;
//     if(prime(n))
//         cout << "The number  "<< n<< " is  prime" << endl;
//     else

//     cout << "The number  "<< n<< " is not prime "<<endl;
// }

// prime prime num from 1 to n;
// #include<iostream>
// using namespace std;

// int prime(int n){
//     if(n<=1){
//         return 0;
//     }for(int i=2;i*i<=n;i++){
//         if(n%i == 0){
//             return 0;
//         }
//     }   
// return 1;
// }

// int print(int n){
//     for(int i=1;i<=n;i++){
//         if(prime(i)){
//             cout<<i<<" ";
//         }
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }


#include<iostream>
using namespace std;

// via recursion is slower
// int fib(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;
//     return fib(n - 1) + fib(n - 2);
// }

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int a = 0, b = 1, c;
    for(int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }   
return c;   

}
int main(){
    int n;
    cin >> n;
    // for(int i=0;i<=n;i++){
//loop when  to print fib series
    cout << fib(i)<<" "<< endl;
    // }
}