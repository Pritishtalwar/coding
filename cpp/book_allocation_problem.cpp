// #include<iostream>
// #include<vector>
// using namespace std;

// bool isPossible(vector<int> arr, int n, int m, int mid) {
//     int studentCount = 1;
//     int pageSum = 0;

//     for(int i = 0; i < n; i++){
//         if (arr[i] > mid) {
//             return false;
//         }

//         if(pageSum + arr[i] <= mid) {
//             pageSum += arr[i];
//         } else {
//             studentCount++;
//             if (studentCount > m) {
//                 return false;
//             }
//             pageSum = arr[i];
//         }
//     }
//     return true;
// }

// int allocateBooks(vector<int> arr, int n, int m) {
//     if(m > n) return -1;

//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum += arr[i];
//     }

//     int start = 0, end = sum;
//     int ans = -1;

//     while(start <= end) {
//         int mid = start +(end-start) / 2;

//         if(isPossible(arr, n, m,mid)) {
//             ans = mid;
//             end = mid - 1;
//         } else {
//             start = mid + 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int> books = {10,20,30,40};
//     int n = books.size();
//     int m = 2;

//     int result = allocateBooks(books,n,m);

//     if(result != -1) {
//         cout<<"Minimum of the maximum pages assigned is: " << result << endl;
//     } else {
//         cout << "Book allocation not possible!"<< endl;
//     }
//     return 0;
// }

// painters partition problem
