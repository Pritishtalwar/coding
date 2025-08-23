#include<bits/stdc++.h>
using namespace std;

// int binarytodecimal(int n){
//     int ans = 0, pow = 1;
//     for(int i=n;i>0;i/=10){
//         int ch = i%10;
//         ans += ch*pow;
//         pow *= 2;
//     }
//     return ans;
// }
// int decimaltobinary(int n){
//     int ans = 0, pow = 1;
//     for(int i=n;i>0;i/=2){
//         int ch = i % 2;
//         ans += ch*pow;
//         pow *= 10;
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin >> n;
//     // cout << n << " To decimal is: " << binarytodecimal(n)<< endl;
//     cout << n << " To binary is: " << decimaltobinary(n)<< endl;
// }

// int main(){
//     string str;
//     getline(cin, str);
//     int count = 0;
//     for(int i=0;i<str.size();i++){
//         char ch = str[i];
//         if(ch == 'a' || ch == 'e' || ch == 'i' ||ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ){
//             count++;
//         }
//     }
//     cout << count << endl;
// }

// int main(){
//     string str;
//     getline(cin, str);
//     int i = 0, j = str.size()-1;
//     while(i<j){
//         swap(str[i], str[j]);
//         i++;
//         j--;
//     }
//     cout << str;
// }

// bool isprime(int n){
//     if(n<=1) return 0;
//     for(int i=2;i<n;i++){
//         if(n%i == 0) return 0;
//     }
//     return 1;
// }

// int main(){
//     int n;
//     cin >> n;
//     cout << isprime(n) << endl;
// }


// int main(){
//     string str;
//     getline(cin, str);
//     int i=0, j=str.size()-1;
//     bool ispal = true;
//     while(i<j){
//         if(str[i] != str[j]) {
//             ispal = false;
//             break;
//         }
//         i++;
//         j--;
//     }

//     if(ispal){
//         cout << "Pal";
//     }
//     else{
//         cout << "Not pal";
//     }
// }

// int main(){
//     int arr[10] = {1,2,2,3,3,5,5,5,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     map<int,int> freq;
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }
//     for(auto i: freq){
//         cout << i.first << " : " << i.second << endl;
//     }
// }

// int main(){
//     string str;
//     getline(cin, str);
//     map<char, int> freq;
//     for(int i=0;i<str.size();i++){
//         freq[str[i]]++;
//     }
//     for
// }

// int main(){
//     int n;
//     cin >> n;
//     int fact = 1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
// cout << fact ;
// }

// int sum(int n){
//     if(n==0) return 0;
//     return (n%10) + sum(n/10);
// }

// int main(){
//     int n;
//     cin >> n;
//     // int sum = 0;
//     // for(int i=n;i>0;i/=10){
//     //     sum = sum + i%10;
//     // }
//     // cout <<sum;
//     cout << sum(n);
// }4
// int main(){
//     int arr[]={10, 20, 4, 45, 99, 99};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int f=INT_MIN, s=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i] > f){
//             s = f;
//             f=arr[i];
//         }
//         else if(arr[i]>s && arr[i] < f){
//             s=arr[i];
//         }
//     }

//     if(s==f){
//         cout << "no";

//     }else{
//         cout<< s;
//     }
// }

// class Circle{
//     private:
//         float r;
    
//     public:
//         Circle(float r){
//             this->r = r;
//         }
//         void setr(float r) {
//             this->r = r;
//         }

//         float getr() {
//             return r;
//         } 

//         float area(){
//             return 3.14*r*r;
//         }
// };
// int main(){
//     Circle a(5.5);
//     cout << "Radius: "<< a.getr() << endl;
//     cout << "Area: " << a.area() << endl;
// }

// int main(){
//     string str;
//     getline(cin, str);
//     int count = 0;
//     for(int i=0;i<str.size();i++){
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
//             count++;
//         }
//     }
//     cout << count << endl;
//     return 0;
// }

// class Student{
//     private:
//         string n;
//         int m;
// public:
//     Student(string n, int m){
//         this-> n = n;
//         this-> m = m;
//     }
//     void setn(string n){
//         this->n=n;
//     }
//     void setm(int m){
//         this-> m = m;
//     }
//     string getn(){
//         return n;
//     }
//     int getm(){
//         return m;
//     }

//     void result(){
//         if(m >= 40){
//             cout << "Pass";
//         }else{
//             cout << "Fail";
//         }
//     } 
// };

// int main(){
//     Student s("rahul", 70);
//     s.result();
// }

// int main(){
//     int arr[] = {12,12,11,15,78,6,0,12};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int sum=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]%2 == 0){
//             sum += arr[i];
//         }
//     }
//     cout << sum << endl;
// }

// class Rectangle{
//     private:
//         int l;
//         int w;
//     public:
//         Rectangle(int l, int w){
//             this->l = l;
//             this->w = w;
//         }
    

//     void setl(int l){
//         this->l = l;
//     }
//     int getl(){
//         return l;
//     }
//     void setw(int w){
//         this->w = w;
//     }
//     int getw(){
//         return w;
//     }

//     int area(){
//         return l*w;
//     }
// };
// int main(){
//     Rectangle r1(3,4);
//     cout << r1.area() << endl;
// }

// int main(){
//     int a,b,c;
//     cin >> a >> b >> c;
//     if(a > b && a > c){
//         cout << a << endl;
//     }
//     else if(b > a && b > c){
//         cout << b << endl;
//     }
//     else if(c > a && c > b){
//         cout << c << endl;
//     }
// }

// int fib(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;
//     return fib(n-1) + fib(n-2); 
// }

// int main(){
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++){
//     cout << fib(i) << endl;
//     }
// }

// int min(int arr[], int n){
//     int s=0, j=n-1; 
//     int min = arr[0];
//     while(i<j){
//         int mid = s+(e-s)/2;
//         if(arr[mid] < arr[mid+1]){
//             e=mid-1;
//         }else{
//             s=mid+1;
//         }
//     }
//     return mid;
// }

// int main(){
//     int arr[] = {10,11,23,445,7,8,9,76};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n/2;i++){
//         sort(arr, arr + n);
//     }
//     cout << min(arr, n);
// }

// class Employee{
//     private:
//         string name;
//         int salary;
//     public:
//         Employee(string name, int salary){
//             this->name =name;
//             this->salary = salary;
//         }
//     void setname(string name){
//         this->name=name;
//     }
//     void setsalary(int salary){
//         this->salary = salary;
//     }
//     string getname() {
//         return name;
//     }
//     int getsalary() {
//         return salary;
//     }
//     void display(){
//         cout << "Employee name: " << name << ";" <<" Salary is: "<< salary << endl;
//     }
// };

// int main(){
//     Employee e1("Rahul", 10000000);
//     e1.display();
// }

// int main(){
//     int year;
//         cin >> year;
//         if((year%400 == 0) || (year % 4 == 0 && year%100 != 0)){
//             cout << year << " is leap";       
//         } else{
//             cout << year << " not leap";
//         }
// }

// int main(){
//     string str;
//     getline(cin, str);
//     int count = 0;
//     for(int i=0;i<str.size();i++){
//         if(str[i] != 'a' ||str[i] != 'e' ||str[i] != 'i' ||str[i] != 'o' ||str[i] != 'u' ||str[i] != 'A' ||str[i] != 'E' ||str[i] != 'I' ||str[i] != 'O' ||str[i] != 'U'){
//             count++;
//         }
//     }
//     cout << count << endl;
// }

// class Book{
//     private:
//     string t;
//     string a;
//     public:
//     Book(string t, string a){
//         this->t=t;
//         this->a=a;
//     }
//     void sett(string t){
//         this->t=t;
//     }
//     void seta(string a){
//         this->a=a;
//     }
//     string gett(){
//         return t;
//     }
//     string geta(){
//         return a;
//     }
//     string display(){
//         cout <<"Book name: "<< t << " Book author: "<< a<< endl;
//     }
// };
// int main(){
//     Book b1("insaaf", "Ragahv");
//     b1.display();
// }


// float final(float* base){
//     float result = (*base + 0.18*(*base) - 0.1*(*base));
//     return result;
// }

// int main(){
//     float base;
//     cin >> base;
//     cout << fixed << setprecision(2) << final(&base) << endl;
// }
// int sub(int d){
//     int res = 0;
//     for(int i=d;i!=0;i/=10){
//         int rem = i%10;
//         rem = (rem-1+10)%10;
//         res = res*10+rem;
//     }
//     return res;
// }
// int main(){
//     int d;
//     cin >> d;
//     int result = sub(d);
//     cout << setw(40<< setf) << endl;
// }

// int final(int num){
//     int digit[4];
//     for(int i=3;i>=0;i--){
//         int rem = num %10;
//         rem = (rem + 1)%10;
//         digit[i] = rem;
//         num/=10;
//     }
//     int res = 0;
//     for(int i=0;i<4;i++){
//         res = res*10 + digit[i];
//     }
//     return res;
// }
// int main(){
//     int x;
//     cin >> x;
//     cout<<final(x)<<endl;
// // }

// class cal{
//     private:
//     int a;
//     int b;
//     public:
//     cal(int a, int b){
//         this->a = a;
//         this->b = b;
//     }
//     void seta(int a){
//         this->a=a;
//     }
//     int geta(){
//         return a;
//     }
//     void setb(int b){
//         this->b=b;
//     }
//     int getb(){
//         return b;
//     }
//     void work(){
//         if(a%2==0 && b%2==0){
//             cout << "Sum: " << a+b << endl;
//         }else{
//             cout << "Product: " <<a*b << endl;
//         }
//     }
// };

// int main(){
//     cal c1(4,3);
//     cal c2(4,4);
//     c1.work();
//     c2.work();
// }

// class Person{
//     public:
//     string n;
//     protected:
//     int a;
//     private:
//     float s;

//     public:
//     Person(string n, int a, float s) {
//         this->n=n;
//         this->a=a;
//         this->s=s;
//     }

//     void sets(float s){
//         this->s=s;
//     }
//     float gets(){
//         return s;
//     }
// };

// class Employee: public Person{
//     public:
//     Employee(string n, int a, float s) : Person(n,a,s) {}
//     void display() {
//         cout << "Employee name: " << n << endl;
//         cout << "Employee age: " << a << endl;

//     }
// };

// int main(){
//     string n, 
//     Emplyee e()
// }
// bool pal(string str){
//     int n = str.size();
//     for(int i=0;i<n/2;i++){
//         if(str[i] != str[n-i-1]){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     string str;
//     getline(cin, str);
//     cout << pal(str)<< endl;
// }
// void swap(int *a, int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }

// int main(){
//     int a, b;
//     cin >> a>> b;
//     cout << a << " " << b<< endl;
//     swap(&a, &b);
//     cout << a << " " << b<< endl;
// }
// bool pr(int n){
//     if(n<=1)  return false;
//     for(int i=2;i*i<=n;i++){
//         if(n%i == 0) return false;
//     }
//     return true;

// }
// int nextp(int n){
//     n=n+1;
//     while(!pr(n)){
//         n++;
//     }
//     return n;

// }

// int sum(int n){
//     int sum=0;
//     for(int i=n;i!=0;i/=10){
//         int rem = i%10;
//         sum += rem;
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cin >> n;
//     int numtoc = nextp(n);
//     int res = sum(numtoc);
//     cout << "Next Prime: " << numtoc <<endl;
//     cout << res << endl;
// }
// int fib(int n){
//     int a=0, b=1;
//     while(b<=n){
//         int c=a+b;
//         a=b;
//         b=c;
//     }

//     return b;
// }
// int main(){
//     int n;
//     cin >> n;
//     cout << fib(n) << endl;
// }
// int fac(int n){
//     if(n<=1) return 1;
//     return n*fac(n-1);
// }
int factorial(int*n){
    if(*n<=1) return 1;
    int temp = *n-1;
    return (*n)*factorial(temp);
}

int main(){
    int n;
    cin >> n;
cout << factorial(&n);
}