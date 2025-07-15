// #include<iostream>
// using namespace std;

// int main(){
//     int arr[6] = {3,5,7,8,2,1};
//     int t;
//     cin >> t;
//     int found = 0;
//     for(int i=0;i<6;i++){
//         if(arr[i] == t){
//             found = 1;
//         }
//     }
//     if(found){
//         cout << "Found";
//     }else{
//         cout << "Not Found";
//     }
// }

// binary search mid = (low + high) / 2 mide nikalna uss se compariosn krna but yeh dhyan rakhna array should be in increasing order
// mid mein (low + high )/2 ki jagah low + (high-low)/2 kra same value jo boht zaada ussmein issue aa sakta
// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key){
//     int start = 0;
//     int end = size - 1;

//     int mid = start + (end - start) / 2;

//     while(start <= end){
//         if(arr[mid] == key){
//             return mid;
//     }
//     if(key > arr[mid]) {
//         start = mid + 1;
//     }
//     else{
//         end = mid - 1;
//     }
//     mid = start + (end - start)/2;

//     }
//     return -1;
// }

// int main(){
//     int even[6] = {2,4,6,8,12,18};
//     int odd[5] = {3,8,11,4,16};

//     int evenIndex = binarySearch(even, 6, 12);
//     cout << "Index of 12 is " << evenIndex << endl;

//     int oddIndex = binarySearch(odd,5,16);
//     cout << "Index of 16 is " << oddIndex<<endl;
// }

//first and last position of an elemnt in an array
// #include<iostream>
// using namespace std;

// int firstOcc(int arr[], int n, int key){

//     int s = 0, e = n - 1;
//     int mid = s + (e - s) / 2;
//     int ans = -1;
//     while(s <= e){

//         if(arr[mid] == key){
//             ans = mid;
//             e = mid - 1;
//         }
//         else if(key > arr[mid]){
//             s = mid + 1;
//         }
//         else if(key < arr[mid]){
//             e = mid - 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// int lastOcc(int arr[], int n, int key){

//     int s = 0, e = n - 1;
//     int mid = s + (e - s) / 2;
//     int ans = -1;
//     while(s <= e){

//         if(arr[mid] == key){
//             ans = mid;
//             s = mid + 1;
//         }
//         else if(key > arr[mid]){
//             s = mid + 1;
//         }
//         else if(key < arr[mid]){
//             e = mid - 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }



// int main(){
//     int even[5] = {1,3,3,3,5};
//     cout << "First occurenece of 3 is at index "<<firstOcc(even, 5, 3)<<endl;;
//     cout << "Last occurenece of 3 is at index "<<lastOcc(even, 5, 3)<<endl;
//     return 0;
// }


//find total no of occurence
// #include<iostream> 
// #include<vector>
// using namespace std;

// int first(vector<int>& arr, int n, int k){
//     int s=0,e=n-1,mid=s+(e-s)/2,ans =-1;
//     while (s<=e)
//     {
//         if(arr[mid] == k){
//             ans = mid;
//             e=mid-1;
//         }
//         else if(k>arr[mid]){
//             s = mid +1;
//         }
//         else if(k<arr[mid]){
//             e = mid -1;
//         }  
//         mid = s + (e-s)/2;
//     }
//     return ans;
    
// }

// int last(vector<int>& arr, int n, int k){
//     int s=0,e=n-1,mid=s+(e-s)/2,ans =-1;
//     while (s<=e)
//     {
//         if(arr[mid] == k){
//             ans = mid;
//             s=mid+1;
//         }
//         else if(k>arr[mid]){
//             s = mid +1;
//         }
//         else if(k<arr[mid]){
//             e = mid -1;
//         }  
//         mid = s + (e-s)/2;
//     }
//     return ans;
    
// }

// int main(){
//     vector<int>arr={0,1,2,2,2,3,4};
//   int firstIndex = first(arr, 7, 2);
//     int lastIndex = last(arr, 7, 2);

//     int count = 0;
//     if (firstIndex != -1 && lastIndex != -1) {
//         count = lastIndex - firstIndex + 1;
//     }

//     cout << "Total occurrences of " << 2 << ": " << count << endl;
    
// }

// //peak index in mountain array
// #include<iostream>
// using namespace std;

// // int peak(int arr[], int n){
// //     int s=0,e=n-1,mid = s+(e-s)/2;
// //     while(s<e){
// //         if(arr[mid] < arr[mid+1]){
// //             s = mid+1;
// //         }
// //         else{
// //             e=mid;
// //         }
// //         mid = s+(e-s)/2;
// //     }
// //     return s;
// // }


// int peak(int arr[], int n){
//     int s=0,e=n-1;
//     int mid = s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]<arr[mid+1]){
//             s= mid+1;
//         }else{
//             e=mid;
//         }
//         mid = s+(e-s)/2;
//     }
//     return e;//we can write eithe s or e
// }
// int main(){
//     int arr[7] = {0,1,2,3,2,1,0};
//     cout << peak(arr, 7); 
// }

//find pivot in an array

// #include<iostream>
// using namespace std;

// int getPivot(int arr[], int n) {

//     int s=0,e=n-1;
//     int mid = s+(e-s)/2;
//     while(s < e){
//         if(arr[mid] >= arr[0]){
//             s = mid + 1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return e; 
// }

// int main(){

//     int arr[5] = {8, 10, 17, 3, 1};
    
//     cout << "Pivot is "<< getPivot(arr, 5) << endl;


// }

//Search in a rotated sorted array

// #include<iostream>
// #include<vector>
// using namespace std;

// int getpivot(vector<int>& arr, int n){
//     int s=0,e=n-1;
//     int mid = s+(e-s)/2;
//     while(s<e){
//         if(arr[mid] >= arr[0]){
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return s;
// }

// int search(vector<int>& arr, int n, int k){
//     int s=0,e=n-1;
//     int mid = s+(e-s)/2;
//     while(s<=e){
//         if(arr[mid] == k){
//             return mid;
//         }

//         if(k > arr[mid]){
//             s=mid+1;
//         }
//         else {
//             e=mid-1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return -1;
// }
// int find(vector<int>& arr, int n){
//     int s = 
// }

// int main(){
//     vector<int>arr = {8,10,17,3,1};

// }


//square root using binary search
#include<iostream>
using namespace std;

int sqrt(int x){
    int s=0,e=x;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        long long sq = 1LL*mid*mid;
        if(sq == x){
            return mid;
        }  
        if(sq<x){
            ans = mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
}
// this removes integer part but for float parrt do diff

int main(){
    int num;
    cin >> num;
    cout << "Sqaure root of "<< num <<" is "<< sqrt(num) <<endl;
}