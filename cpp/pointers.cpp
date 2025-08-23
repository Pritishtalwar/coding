// // #include<iostream>
// // using namespace std;

// // int main() {
// //     int i=5;
// //     int *p = 0;
// //     p = &i;
// //     cout << "Value of i: " << i << endl;
// //     cout << "Address of i: " << &i << endl;
// //     cout << "Value of p: " << p << endl;
// //     cout << "Value at address p: " << *p << endl;
// //     return 0;
// // }

// //pointers with
// // #include<iostream>
// // using namespace std;

// // void print(int *p) {

// //     cout << *p << endl;
// // }

// // void update(int *p) {
// //     *p = *p+1;
// //     cout << p << endl;
// // }

// // int main() {
//     // int arr[10] = {56,10,2,3,4,5,6,7,8,9};
//     // cout << "Address of first memory block is " << arr << endl;
//     // cout <<  "Address of first memory block is " << &arr[0]<< endl;
//     // cout << arr[5]<<endl;  
//     // cout << *arr << endl;
//     // cout << *arr+1 << endl;
//     // cout << *(arr+1) << endl;
//     // cout << *(arr)+1  << endl;

//     // cout<<arr[2] <<" = "<< *(arr+2) << endl;
//     // cout<<2[arr] <<" = "<< *(2+arr) << endl;
//     // int temp[10];
//     // cout << sizeof(temp) << endl;
//     // cout << sizeof(*temp) << endl;
//     // cout << sizeof(&temp) << endl;
    
//     // int *ptr = &temp[0];
//     // cout << sizeof(ptr)  << endl; 
//     // cout << sizeof(*ptr) << endl;
//     // cout << sizeof(&ptr) << endl;
//     // return 0; 

//     // int a[10] = {1,2,3,5};
//     // cout << &a[0] << endl;
//     // cout << &a << endl;
//     // cout << a << endl;

//     // int *p = &a[0];
//     // cout << p << endl;
//     // cout << *p << endl;
//     // cout << &p << endl;

//     // int  arr[10];
//     // int *ptr = &arr[0];
//     // cout << ptr << endl;
//     // ptr = ptr + 1;
//     // cout << ptr << endl; 
//     // int arr[5] = {1, 2, 3, 4, 5};
//     // char ch[6] = "abcde";

//     // cout << arr << endl; // Address of the first element
//     // cout << ch << endl;

//     // char *c = &ch[10];
//     // cout << c << endl; 

//     // char temp = 'z';
//     // char *p = &temp;
//     // cout << p << endl;

// //     int value = 5;
// //     int *p = &value;

// //     print(p);
// //     update(p);

// //     return 0;
// // }

// // double pointers


// // #include<iostream>
// // using namespace std;

// // void update(int** q) {
// //     // p = p + 1; // no change
// //     // q=q+1;
// //     // *p = *p + 1;
// //     // *q = *q + 1;
// //     // **p = **p + 1;
// //     **q = **q + 1;
// // }

// // int main() {

// //     int i=5;
// //     int* p = &i;
// //     int** q = &p;
// //     cout << "Before update:" << endl;
// //     cout << "Value of i: " << i << endl;
// //     cout << "Value of p: " << p << endl;
// //     cout << "Value of q: " << q << endl;
// //     update(q);
// //     cout << "After update:" << endl;
// //     cout << "Value of i: " << i << endl;
// //     cout << "Value of p: " << p << endl;
// //     cout << "Value of q: " << q << endl;
// //     // cout<<"value of i == "<< i<<endl;
// //     // cout <<"addres of i "<<  &i << endl;
// //     // cout <<"value of p == "<<  p << endl;
// //     // cout <<"address of p == "<<  &p << endl;
// //     // cout <<"value at p == "<<  *p << endl;
// //     // cout <<"value of q "<<  q << endl;
// //     // cout <<"address of q == "<<  &q << endl;
// //     // cout <<"value at q "<<  *q << endl;
// //     // cout <<"value at q (phir usspe jo value voh jisska address usski value) =="<<  **q << endl;
// // }

// // questions

// #include<iostream>
// using namespace std;

// int main() {

//     //1
//     // int first = 8;
//     // int second = 18;
//     // int *ptr = &second;
//     // *ptr = 9;
//     // cout << first<< " " << second << endl;


//     //2
//     // int first = 6;
//     // int *p = &first;
//     // int *q = p;
//     // (*q)++;
//     // cout << first << endl;


//     //3
//     // int first = 8;
//     // int *p = &first;
//     // cout<<(*p)++ << endl;
//     // cout << first << endl;

//     //4
//     // int *p = 0;
//     // int first = 11;
//     // *p = first;
//     // cout << *p << endl; // This will cause a segmentation fault because p is a null pointer
    
//     //5
//     // int first = 8;
//     // int second = 11;
//     // int *third = &second;
//     // first = *third;
//     // *third = *third + 2;
//     // cout << first << " " << second << endl;

//     //6
//     // float f = 12.5; 
//     // float p = 21.5;
//     // float *ptr = &f;
//     // *ptr = p;
//     // cout << *ptr << " " << f << " "<< p << endl;

//     //7
//     int arr[5];
//     int *ptr; 
//     cout << sizeof(arr) << " " << sizeof(ptr) << endl;
// } 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << *p <<  endl;
    cout << **q <<  endl;
    cout << p <<  endl;
    cout << *q <<  endl;
}