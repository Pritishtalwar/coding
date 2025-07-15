// deciumal to binary
// #include<iostream>
// using namespace std;

// // decimal to binary ke liye repeatedly divide by 2 karte hain
// // aur remainder ko store karte hain
// int bin(int num){
//     int ans = 0, pow= 1;
//     for(int i=num;i!=0;i/=2){
//         int rem = i%2;
//         ans += rem * pow;
//         pow *= 10;
//     }
//     return ans;
// }

// //  2|10 0  
// //  2|5 1 
// //  2|2 0
// //  2|1 1
// //  2|0
// int main(){
//     int num;
//     cin >> num;
//     for(int i=0;i<=num;i++){

//         cout<<bin(i) << " "<<endl;
//     }
//     return 0;
// }


// binary to decimal
// #include<iostream>
// using namespace std;

// int dec(int num){
//     int ans = 0, pow = 1;
//     for(int i=num;i!=0;i/=10){
//         int rem = i%10;
//         ans+= rem * pow;
//         pow *= 2;
//     }
//     return ans;
// }

// int main(){
//     int num;
//     cin>>num;

//     cout << dec(num) << endl;
//     return 0;
// }

// two's complement
