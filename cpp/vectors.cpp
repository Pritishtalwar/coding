/*
vectors are like arrays but with dynamic size inka fixed size nhi hota change hota ha
STL (std template lib) of cpp inhimein se ek tool ka naam vector ha 
*/
/*
Methods to declare vector
vector<type of vector> vector_name;
vector<int>vec;
vector<int >vec = {1, 2, 3};
vector<int> vec(3, 0);first 3 is the size of vector and second 0 is the value of all elements index jiss no pe aana chahie
*/

// #include<iostream>
// #include<vector>//vector ko create krne ko import krna padta ha 
// using namespace std;

// int main(){
    // Vector functions 
    // size
    //push_back 
    //pop_back 
    //front 
    //back 
    //at
    // vector<int> vec; // abhi size = 0;
    // vector<int> vec = {1, 2, 3}; // vector ko initialize krne ka tareeqa
    // vector<int> vec(3, 0);
    // cout << vec[0];
    // cout << "Size = "<< vec.size()<<endl;
    // for(int i: vec){
    //     cout << i<<endl;
    // }

    // vector<int> vec = {1,2,3,4};
    // for(int i: vec){
    //     cout << i << " ";
    // }
    // cout << endl;
    // cout << vec.size()<<endl;
    // vec.push_back(333);
    // for(int i: vec){
    //     cout << i << " ";
    // }
    // cout << endl;
    // cout << vec.size()<<endl;
    // vec.pop_back();
    // for(int i: vec){
    //     cout << i << " ";
    // }
    // cout << endl;
    // cout<<vec.size()<<endl;
    
    // cout << vec.front()<< endl;
    // cout << vec.back() << endl;
    // cout << vec.at(2) << endl; // at function kisi bhi index ka element print krta ha
    // vector
    // vector<char> ch ={'a', 'b', 'c', 'd', 'e'};
    // cout << "Size = "<<ch.size()<<endl; // to print the size
    // for(char i: ch){
    //         cout << i<< endl;
    //     }
    // ch.push_back('b');
    // for(char i: ch){
    //             cout << i<< endl;
    //         }
    // cout << "Size = "<<ch.size()<<endl; 
    // ch.pop_back();//pop back last element ko delete krta ha
    // for(char i:ch){
    //     cout << i<<endl;
    // }
    // cout <<"Size = "<<ch.size()<<endl;
    // cout << "Front = "<< ch.front()<<endl; // front function first element ko print krta ha
    // cout <<"Back = " << ch.back() << endl; // back function last element ko print krta ha    
    // cout <<"At3 = "<< ch.at(3) <<endl; // at function kisi bhi index ka element print krta ha
//     return 0;
// }


// memory are of two types stack and heap
//Static vs Dynamic allocation
// Stack memory is used for static allocation, where the size of the array is fixed at compile time.
// Static allocation means size of array is fixed at compile time
// Dynamic allocation means size of array can be changed at runtime
// Heap memory is used for dynamic allocation, where the size of the array can change at runtime.
// Vectors are dynamically allocated arrays, meaning their size can change during program execution.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> vec;
    // vec.push_back(3);
    // vec.push_back(5);
    // vec.push_back(4);
    // vec.push_back(1);
    // vec.pop_back();
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;
    // for(int i:vec){
    //     cout << i << " ";
    // }
    // cout << end;
    // vector<int>vec1 = {1,2,3,4,5};
    // vector<int>vec2 (vec1);
    // for(int i: vec2){
    //     cout << i << " ";
    // } 

    // erase & insert are expensove O(n)


}
// tell the single number 
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int ans = 0;
//     vector<int> vec={4,1,2,1,2};
//     for(int i: vec){
//         ans = ans ^ i;
//     }
//     cout << ans;
//     return 0;
// }
