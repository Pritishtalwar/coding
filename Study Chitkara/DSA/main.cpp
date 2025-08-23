// // #include<iostream>
// // using namespace std;

// // int main(){
//     // cout << "Hello, World!" << endl;

//     // int pincode = 460001;
//     // int superman = 300;
//     // int age = 50;
    
//     // cout << "Pincode: " << pincode << endl;
//     // cout << "Superman: " << superman << endl;   
//     // cout << "Age: " << age << endl;
    
//     // char symbol_1 = "1";
//     // char symbol_2 = '2';

//     // cout << "Symbol 1: " << symbol_1 << endl;
//     // cout << "Symbol 2: " << symbol_2 << endl;   

//     // string str = "superman";
//     // string name = "ram";
//     // string password = "!2@$#2";
   
//     // cout << "String: " << str << endl;
//     // cout << "Name: " << name << endl;
//     // cout << "Password: " << password << endl;
//     // int age = 20;
//     // if(age >= 18){
//     //     cout << "You are eligible for drive." << endl;
//     // } else {
//     //     cout << "You are not eligible to drive." << endl;
//     // }

//     // string pancard, aadhar;
//     // cout << "Do you have a PAN card? (yes/no): ";
//     // cin >> pancard;
//     // cout << "Do you have an Aadhar card? (yes/no): ";
//     // cin >> aadhar;

//     // if(pancard == "yes" && aadhar == "yes"){
//     //     cout << "You can open an account." << endl;
//     // } else {
//     //     cout << "You cannot open an account." << endl;  
//     // }

//     // int n;
//     // cin >> n;
//     // if(n==50000){
//     //     cout <<"you can purchase i - watch." << endl;
//     // }
//     // else if(n == 70000){
//     //     cout <<"you can purchase i - phone." << endl;
//     // }
//     // else if(n == 100000){
//     //     cout <<"you can purchase macbook air" << endl;
//     // }
//     // else if(n == 150000){
//     //     cout <<"you can purchase macbook pro." << endl;
//     // }
//     // else{
//     //     cout <<"invalid input" << endl;
//     // }
//     // int a,b,c;
//     // cin >> a >> b >> c;
//     // if(a > b && a > c){
//     //     cout << "A is the largest number." << endl;
//     // }
//     // else if(b > a && b > c){
//     //     cout << "B is the largest number." << endl;
//     // }
//     // else if(c > a && c > b){
//     //     cout << "C is the largest number." << endl;
//     // }
//     // else{
//     //     cout << "All numbers are equal." << endl;
//     // }
    
//     //for loop = when the numbers of the VALUE IS KNOWN
//     // WHILE LOOP = when the numbers of the VALUE IS NOT KNOWN
// //     do whike atleast ran one time 

// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// // int fib(int n){
// //     if(n==0) return 0;
// //     if(n==1) return 1;
// //     return fib(n-1) + fib(n-2);
// // }

// // int sum(int a, int b){
// //     return a+b;
// // }

// // int area(int r){
// //     return 3.14 * r * r;
// // }

// // string time(){
// //     string date ="14/07/2025";
// //     return date;
// // }
// // int sum(int a, int b){
// //     return a+b;
// // }
// // int sum(int a, int b){
// //     return a+b;
// // }
// // void print(int n){
// //     if(n > 4)
// // }

// // bool ispal(string str, int s, int e) {
// //     if(s >= e) {
// //         return true;
// //     }
// //     if(str[s] != str[e]) {
// //         return false;
// //     }
// //     return ispal(str,s+1, e-1);
// // }
// //1
// int fact(int n){
//     if(n<=1) return 1;
//     return n*fact(n-1);
// }
// // 2
// int power(int b, int p){
//     if(p==0) return 1;
//     return b*power(b,p-1);
// }
// //3
// int count(int n){
//     if(n==0) return 0;
//     return 1 + count(n/10);
// }

// int main(){
//     //natural no
//     // int n;
//     // cin >> n;
//     // for(int i=0;i<n;i++){
//     //     cout << i << " ";
//     // }
//     // first 10 even natural no
//     // for(int i=0;i<10;i++){
//     //     if(i % 2 == 0){
//     //         cout << i << " ";
//     //     }

//     // } 

//     // //wap to add first 10 odd natural no
//     // int sum = 0;
//     // for(int i=0;i<10;i++){
//     //     if(i % 2 != 0){
//     //         sum += i;
//     //     }
//     // }
//     // cout << "Sum of first 10 odd natural numbers: " << sum << endl;

//     // //wap to print table of num
//     // int num;
//     // cin >> num;
//     // for(int i=1;i<=10;i++){
//     //     cout << num << " * " << i << " = " << num * i << endl;
//     // }
    
//     // //wap to print table of num in reverse order
//     // int num2;
//     // cin >> num2;
//     // for(int i=10;i>=2;i--){
//     //     cout << num2 << " X " << i << " = " << num2 * i << endl;
//     // }
//     // int  n;
//     // for(;;){sum()
//     // cin >> n;
//     // if(n==0) break;
//     // }
//     // int n;
//     // cin >> n;
//     // for(int i=0;i<n;i++){
//     //     cout << fib(i) << " ";
//     // }
//     // cout << sum(10,20) << endl;
//     // cout << area(3) << endl;
//     // cout <<"date = "<<time()<< endl;
    
//     // cout << sum(10,20) << endl;
//     // cout << sum(10,20) << endl;
//     // int num;
//     // cin >> num;
//     // int rev = 0;
//     // int original = num;
//     // for(int i=num;i!=0;i/=10){
//     //     int remainder = i % 10;
//     //     rev = rev * 10 + remainder;
//     // }

//     // if(original == rev){
//     //     cout << "palindrome" << endl;
//     // }else{
//     //     cout << "Not palindrome";
//     // }
//     // string str;
//     // cin >> str;

//     // if (ispal(str,0,str.length()- 1)){
//     //     cout << "palindrome" << endl;
//     // }
//     // else{
//     //     cout << "not pal" << endl;
//     // }
//     int arr[] = {2,1,5,6,2,8};
//     int s = 0;
//     int n=sizeof(arr) / sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//         s+=arr[i];}
//     }
//     cout << s;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
    
//     int max = arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]> max){
//             max = arr[i];
//         }
//     }
//     cout << max;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int matrix[3][3] = {{10,20,30}, 
//                         {40,50,60}, 
//                         {70,80,90}};

//     // for(int i=0; i<3; i++){
//     //     int sumr = 0;
//     //     for(int j=0; j<3; j++){
//     //         sumr += matrix[i][j];
//     //     }
//     //     cout << "Sum of row " << i+1 << ": " << sumr << endl;
//     // }
    

//     // for(int j=0; j<3; j++){
//     //     int sumc = 0;
//     //     for(int i=0; i<3; i++){
//     //         sumc += matrix[i][j];
//     //     }
//     //     cout << "Sum of column " << j+1 << ": " << sumc << endl;
//     // }
//     int trans[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             trans[j][i] = matrix[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout << trans[i][j] << " ";
//         }
//         cout << endl;
//     }
//     // for(int i=0;)
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     // for(int i=0;i<n;i++){
//     //     for(int j=0;j<n;j++){
//     //         cout << "* ";
//     //     }
//     //     cout << endl;
//     // }
//     // for(int i=0;i<n;i++){
//     //     for(int j=0;j<i+1;j++){
//     //         cout << "* ";
//     //     }
//     //     cout << endl;
//     // }
//     // for(int i=0;i<=n;i++){
//     //     for(int j=0;j<=i+1;j++){ 
//     //         cout << " ";
//     //     }
//     //     for(int j=0;j<=n-i-1;j++){
//     //         cout << "*";

//     //     }
//     //     cout << endl;
//     // }

//     // int num = 1;
//     // for(int i=0;i<n;i++){
//     //     for(int j=0;j<i+1;j++){
//     //         cout << i+1 << " ";
//     //     }
//     //     cout << endl;
//     // }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
            
//         }
//         cout << endl;
//     }
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int n,start;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         if (i%2 == 0 || i == 0){
//             start = 1;
//         }
//         else {
//             start = 0;
//         }
//         for (int j = 0; j <= i; j++) {
//             cout << start << " ";
//             start = 1 - start; 
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<cstdio>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for(int i=0;i<t;i++){
//         int n,k;
//         cin >> n >> k;
//         int arr[n];
//         for(int j=0;j<n;j++){
//             cin >> arr[i];
//         }
        
        
//     }
    
    
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// class  Student
// {
// private:
//     /* data */
// public:
//     string name;
//     int age;
//     float fee;

//     void display(){
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Fee: " << fee << endl;
//     }
// };
// int main(){
//     Student s1;
//     s1.name = "John Doe";
//     s1.age = 20;
//     s1.fee = 1500.50;

//     s1.display();

//     Student s2;
//     s2.name = "Jane Smith";
//     s2.age = 22;
//     s2.fee = 2000.75;

//     s2.display();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Student {
//     private:
//         string name;
//         int age;
//         float fee;
//     public:
//         Student(string name,int age){
//             this->name = name;
//             this->age = age;
//             this->fee = 0.0; // Default fee 
//         }
// };
// void set_property(Car %c1, string)

// #include<iostream>
// using namespace std;

// class Vehical{
//     public: void start(){
//         cout <<"Starting";
//     }
// };
// class car:virtual public Vehical{
//     public: void drive(){
//         cout<<"Driving";
//     }
// };
// class bike:virtual public Vehical{
//     public: void drive(){
//         cout<<"Biking";
//         }
// }
// class Transport: virtual public Vehical

// class student{
//     public:
//     string name;
//     int id;

//     student(string n, int i){
//         name = n;
//         id = i;
//     }

//     void display(){
//         cout<<name<<" "<<id<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main() {
//     //lambda
//     auot sum = [](int a, int b)
// }

#include<iostream>
