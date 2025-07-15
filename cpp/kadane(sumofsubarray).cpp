// to print subarray
//  #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k = i;k<=j;k++){
//                 cout << arr[k];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
    
// }


// to print max sum subarray
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n); // Correct declaration

//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     int maxSum = INT_MIN; // keeps track of max sum
    
//     for(int i = 0; i < n; i++){
//         int curr = 0;// keeps track of the current sum
//         for(int j = i; j < n; j++){
//             curr += arr[j];
//             maxSum = max(curr, maxSum);
//         }
//     }
//     cout << "max subarray sum = " << maxSum << endl;
// }

// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int maxs = INT_MIN;
//     for(int i=0;i<n;i++){
//         int cur = 0;
//         for(int j=i;j<n;j++){
//             cur += arr[j];
//             maxs = max(cur, maxs);
//         }
//     }
//     cout <<"Max sum is "<< maxs<<endl;
//     return 0;
// }

// // kadane's algo

#include<iostream> 
#include<vector> 
#include<climits> 
using namespace std;

int kadane(vector<int> &arr) {
    int maxs = INT_MIN;
    int current = 0;

for(int i=0;i<arr.size();i++){
    current = max(arr[i], current + arr[i]);
    maxs = max(maxs, current);
}
return maxs;
}

int main(){
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << kadane(arr) << endl;
} 