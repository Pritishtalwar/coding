// #include<iostream>
// using namespace std;

// // int fact(int n) {
// //     if (n == 0 || n == 1) {
// //         return 1;
// //     }
// //     return n * fact(n - 1);
// // }

// // int powerofn(int n, int power) {
// //     if(power == 0) {
// //         return 1;
// //     }
// //     return n * ans(n, power - 1);
// // }

// void print(int n){
//     if (n == 0) {
//         return;
//     }
//     cout << n << " ";
//     print(n - 1);
// }

// int main() {
//     // int n;
//     // cin >> n;
//     // cout << fact(n) << endl;

//     // int n;
//     // int power;
//     // cin >> n >> power;
//     // cout << powerofn(n,power) << endl;

//     int n;
//     cin >> n;
//     print(n);
// }

// #include <iostream>
// using namespace std;

// void reach(int s, int d) {
//      if(s == d) {
//         cout << "Reaches"<< endl;
//         return ;
//     }
//     s++;
//     reach(s, d);
// }

// int main(){
//     int s=1, d=10;
//     reach(s, d);
// }

// #include<iostream>
// using namespace std;

// int fibo(int n){
//     if(n == 0) return 0;
//     if(n == 1) return 1;
//     return fibo(n-1) + fibo(n-2);
// }

// int main(){
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++){
//         cout<< fibo(i)<< " ";
//     }
// }

// count ways to reach nth stairs
// dp neeeded
// int count(long long n){
//     if(n<0) return 0;
//     if(n == 0) return 1;
//     return count(n-1) + count(n-2);
// }


//Say digits 412 => four one two
// #include <iostream>
// using namespace std;

// void sayDigit(int n, string arr[]) {
//     if(n == 0) {
//         return ;
//     }
//     int digit = n % 10;
//     n = n / 10;
    
//     sayDigit(n, arr);
//     cout << arr[digit] <<" ";
// }

// int main() {
//     string arr[10] = {"zero", "one", "two", "three", "four", 
//                             "five", "six", "seven", "eight", "nine"};
//     int n;
//     cin >> n;
//     sayDigit(n, arr);
// }

// recursion with binary search

// #include <iostream>
// using namespace std;

// bool is(int arr[], int size){
//     if(size == 0 || size == 1) {
//         return true;
//     }
//     if(arr[0] > arr[1]) {
//         return false;
//     }
//     else{
//         bool remaining = is(arr + 1, size - 1);
//         return remaining;
//     }
// }

// int main(){
//     int size;
//     cin >> size;
//     int arr[size];
//     for(int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
//     if(is(arr, size)) {
//         cout << "Sorted" << endl;
//     } else {
//         cout << "Not Sorted" << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int sum(int arr[], int size){
//     if(size == 0) {
//         return 0;
//     }
//     if(size == 1) {
//         return arr[0];
//     }
//     return arr[size - 1] + sum(arr, size - 1);

// int main(){
//     int arr[] = {3,2,5,1,6};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<< "Sum of array is: " << sum(arr, size) << endl;
// }


// // Search in array using recursion
// #include <iostream>
// using namespace std;

// bool search(int arr[], int size, int k){
//     if(size == 0) {
//         return false;
//     }
//     if(arr[0] == k){
//         return true;
//     }
//     else{
//         return search(arr+1,size-1,k);
//     }
// }

// int main(){
//     int arr[] = {3,2,5,1,6};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int k;
//     cin >> k;
//     if(search(arr, size, k)) {
//         cout << "Found" << endl;
//     } else {
//         cout << "Not Found" << endl;
//     }
// }

//binary search using recursion
// #include<iostream>
// using namespace std;

// void print(int arr[], int s, int e) {
//     cout << "Array: ";
//     for(int i = s; i <= e; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// bool search(int arr[], int s, int e, int k) {
//     print(arr, s, e);
//     if(s>e) return false; // base case: element not found
    
//     int mid = s + (e - s) / 2;
    
//     if(arr[mid] == k){
//         return true;
//     }
//     if(arr[mid] < k){
//         return search(arr,mid+1,e,k);
//     }else{
//         return search(arr,s,mid-1,k);
//     }
// }

// int main(){
//     int arr[] = {2,4,6,10,13};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int k;
//     cin >> k;
//     cout << "Present or not " << search(arr, 0, size - 1, k) << endl;
// }

//recursion with string
// #include <iostream>
// using namespace std;

// void reverse(string& name, int i, int j){
//     if(i>j) return ;

//     swap(name[i], name[j]);
//     i++;
//     j--;

//     reverse(name, i, j);
// }

// int main(){
//     string name = "babbar";
//     int i = 0;
//     int j = name.length() - 1;
//     reverse(name, i, j);
//     cout << name << endl;
// }

//palindrome of string

// #include <iostream>
// using namespace std;    

// bool checkP(string& name, int i, int j) {
//     if(i >= j) return true; 

//     if(name[i] != name[j]) return false; 
//     else{
//         return checkP(name, i + 1, j - 1); // recursive call
//     }
// }

// int main(){
//     string name = "abcdedcba";
//     cout << endl;

//     bool isP = checkP(name, 0, name.length() - 1);
//     if(isP) {
//         cout << "Palindrome" << endl;
//     } else {
//         cout << "Not Palindrome" << endl;
//     }
// }


// #include <iostream>
// using namespace std;

// int sq(int a, int b){
//     if(b==0){
//         return 1;
//     } 
//     return a * sq(a, b - 1);
// }

// int main() {
//     int a, b;
//     cin >> a >> b;
//     cout << sq(a, b) << endl;
// }

// sort array
// #include <iostream>
// using namespace std;

// void sort(int arr[],int n){
//     if(n<=1){
//         return ;
//     }
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i], arr[i+1]);
//         }
//     }
//     sort(arr, n - 1);
// }

// int main(){
//     int arr[5] = {5, 2, 1, 4, 3};

//     sort(arr, 5);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//merge sort
// #include<iostream>
// using namespace std;

// void merge(int *arr, int s, int e) {
//     int mid = s + (e - s) / 2;

//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     int *first = new int[len1];
//     int *second = new int[len2];

//     int k = s;
//     for(int i=0; i<len1; i++){
//         first[i] = arr[k++];
//     }

//     k = mid + 1;
//     for(int i=0;i<len2;i++){
//         second[i] = arr[k++];
//     }

//     int index1 = 0;
//     int index2 = 0;
//     k = s;

//     while(index1 < len1 && index2 < len2) {
//         if(first[index1] < second[index2]) {
//             arr[k++] = first[index1++];
//         }
//         else{
//             arr[k++] = second[index2++];
//         }
//     }

//     while(index1 < len1){
//         arr[k++] = first[index1++];
//     }
//     while(index2 < len2){
//         arr[k++] = second[index2++];
//     }
// }

// void mergeSort(int *arr, int s, int e) {
//     if(s >= e) {
//         return ;
//     }

//     int mid = s + (e - s) / 2;

//     mergeSort(arr,s,mid);
//     mergeSort(arr,mid+1,e);

//     merge(arr, s, e);
// }

// int main() {
//     int arr[5] = {7,5,6,1,2};
//     int n = 5;
//     mergeSort(arr, 0, n-1);
//       for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }

// quick sort

// #include<iostream>
// using namespace std;

// int partition(int arr[], int s, int e) {
//     int pivot = arr[e];
//     int i = s - 1;

//     for(int j = s; j < e;j++){
//         if(arr[j] < pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     } 
//     swap(arr[i+1], arr[e]);
//     return i+1;
// }

// void quickSort(int arr[], int s, int e){
//     if(s >= e) return ;

//     int p = partition(arr,s,e);
    
//     quickSort(arr, s , p-1);
    
//     quickSort(arr,p+1, e);
// }

// int main(){
//     int arr[] = {10, 7,8 ,9,1,0};
//     int n =  sizeof(arr) / sizeof(arr[0]);

//     quickSort(arr,0, n - 1);

//     cout << "Sorted array: ";
//     for(int i=0;i<n ; i++){
//         cout << arr[i] << " ";
//     }
// }


// Recursionss - Subsets / Subsequence of string
// class Solution{
// private:
//     void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){
//         if(index >= nums.size()) {
//             ans.push_back(output);
//             return ;
//         }
//         solve(nums,output,index+1,ans);
        
//         int element = nums[index];
//         output.push_back(element);
//         solve(nums,output,index+1,ans);

//     }

// public:
//     vector<vector<int>> subsets(vector<int> &nums){
//         vector<vector<int>> ans;
//         vector<int> output;
//         int index = 0;
//         solve(nums,output,index,ans);
//         return ans;
//     }
// };

 