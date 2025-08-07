// // Arrays are data structures that can hold multiple values of the same type. They are useful for storing collections of data that can be accessed using an index.
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max = arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     cout << max;
// }

// Arrays are data structures that can hold multiple values of the same type. They are useful for storing collections of data that can be accessed using an index.
//pass by value mein copy of the array is made, while 
//pass by reference allows the function to modify the original array(basically the address) addres pass krte jab bhi address hotacopy mein jake chnge kr sakte ho.arrays are pass by refernece always implicitly automatically 
/*
primitiive data types are int, char, float, double, bool, etc.primitive means simple or basic data types that are built into the programming language.
Non-primitive data types are derived from primitive data types and include arrays, structures, classes, etc. Non-primitive data types can hold multiple values and can be more complex in nature.
Arrays can be one-dimensional or multi-dimensional.
array are non primitive data types that can hold multiple values of the same type.
Arrays are fixed in size, meaning that once they are created, their size cannot be changed.
*/
// #include <iostream>
// using namespace std;

// void change(int arr[],int size){
//     cout << "in function\n";
//     for(int i=0; i<size; i++){
//         arr[i] = 2*arr[i];
//     }
// }

// int main(){
//     int arr[] = {1, 2, 3};

//     change(arr, 3); 
//     cout << "in main\n";
//     for(int i=0; i<3; i++){
//         cout << arr[i] << " ";
//     }

// }

// #include<iostream>
// using namespace std;

// int fund(int arr[], int n,int t){
    
//     for(int i=0;i<n;i++){
//         if(arr[i] == t){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int t;
//     cin>>t;
//     cout << "The element "<< "found at " << fund(arr, n,t)<<" ";
// }

// #include<iostream>
// using namespace std;

// int reverse(int arr[], int n){
//     for(int i=n-1;i>=0;i--){
//         cout << arr[i]<<" ";
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     reverse(arr,n);

//     return 0;
// }

// to find whther a no is power of 2

// #include<iostream>
// #include<vector>
// using namespace std;

// bool ispower(int n){
//     return n>0 && (n & (n-1)) == 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i =0;i<n;i++){
//         cin >> arr[i];
//     }
//     for(int i: arr) {
//         if(ispower(i)){
//             cout << i << " power of 2 " << endl;
//         }
//         else{
//             cout << i <<" not power of 2 ca"<< endl;
//         }
//     }

//     return 0;
// }

// alter swap

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i< n;i++){
//         cin >> arr[i];
//     }
//     for(int i=0;i+1<n;i+=2){
//         swap(arr[i], arr[i+1]);
//     }
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// find unique element
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int> vec(n);
//     for(int i=0;i<n;i++){
//         cin >> vec[i];
//     }
//     int freq[1001] = {0};
//     for(int i=0;i<n;i++){
//         freq[vec[i]]++;
//     }
//     for(int i=0;i<n;i++){
//         if(freq[vec[i]] == 1){
//             cout << vec[i] << " ";
//         }
//     }
//     return 0;
// }

// //better way use this ^
// #include<iostream>
// #include<vector>

// using namespace std;

// int find(vector<int>vec, int n){
//     int ans = 0;
//     for(int i=0;i<n;i++){
//         ans = ans^vec[i];
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> vec(n);
//     for(int i=0;i<n;i++){
//         cin >> vec[i];
//     }
//     cout << find(vec, n);
// }

// to check if the occurence of each no is unique or not print true other wise false

// #include<iostream>
// #include<unordered_map>
// #include<unordered_set>
// #include<vector>
// using namespace std;

// bool freq(vector<int>& vec){
//     unordered_map<int,int>freqmap;
//     for(int i:vec){
//         freqmap[i]++;
//     }
//     unordered_set<int>seenfreq;
//     for(auto&pair: freqmap){
//         if(seenfreq.count(pair.second)){
//             return false;
//         }
//         seenfreq.insert(pair.second);
//     }
//     return true;
// }

//find the no of duplicates in an array
// #include<iostream>
// #include<unordered_map>
// #include<unordered_set>
// #include<vector>
// using namespace std;

// int dup(vector<int> &arr){
//     unordered_map<int,int>freq;
//     for(int i:arr){
//         freq[i]++;
//     }
//     unordered_set<int>seen;
//     for(auto&pair: freq){
//         if(seen.count(pair.second)){
//             return pair.first;
//             }
//             seen.insert(pair.second);
//             }
//             return -1;  
//             }


// int main(){
//     int n;
//     cin >> n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout <<dup(arr);

// }

// find the duplicate array 
// #include <iostream>
// #include <vector>
// using namespace std;

// int dup(vector<int>& arr){
//     int ans = 0;
//     int n = arr.size();

//     for(int i = 0;i < n; i++) {
//         ans = ans ^ arr[i];
//     }
//     for(int i = 1;i < n; i++) {
//         ans = ans ^ i;
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin >>n;
//     vector<int>arr(n);

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
    
//     cout << dup(arr) << " ";
// }


//reverse an array
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     for(int i=0;i<n/2;i++){
//         swap(arr[i], arr[n-i-1]);
//     }
//     for(int i=0;i<n;i++){
//         cout << arr[i]<< " ";
//     }
// }

// 2d arrays   

