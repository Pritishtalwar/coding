// #include<iostream>
// #include<climits>
// using namespace std;

// // bool ispresent(int arr[][3], int t, int row,int column){
// //     for(int i=0;i<row;i++){
// //         for(int j=0;j<column;j++){
// //             if(arr[i][j] == t){
// //                 return true;
// //             }
// //         }
// //     }
// //     return false;
// // }
// // void rows(int arr[][3], int row, int column){
// //     for(int i=0;i<row;i++){
// //         int sum = 0;
// //         for(int j=0;j<column;j++){
// //             sum += arr[i][j];
// //         }
// //         cout << sum << " ";
// //     }
// // }
// // void columns(int arr[][3], int row, int column){
// //     for(int j=0;j<column;j++){
// //         int sum = 0;
// //         for(int i=0;i<row;i++){
// //             sum += arr[i][j];
// //         }
// //         cout << sum << " ";
// //     }
// // }
// int largestrowsum(int arr[][3], int row, int column){
//     int maxi = INT_MIN;
//     int num = -1;

//     for(int i=0;i<row;i++){
//         int sum = 0;
//         for(int j=0;j<column;j++){
//             sum+=arr[i][j];
//         }
//         if(sum >  maxi){
//             maxi =  sum;
//             num = i;
//         }
//     }

//     cout << "the maximum sum is "<< maxi<<endl;
//     cout << "the maximum sum index is "<< num<<endl;
//     return num;
// }
// int main(){
//     int arr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin >> arr[i][j];
//         }
//     }
//     for(int i=0 ;i <3;i++){
//         for(int j=0;j<3;j++){
//             cout << arr[i][j]<< " ";
//         }
//         cout << endl;
//     }
//     // cout<<endl<< "Row-Wise sum"<<endl;
//     // rows(arr,3,3);
//     largestrowsum(arr,3,3);
//     // cout<<endl<< "column-Wise sum"<<endl;
//     // columns(arr,3,3);
//     // cout << "Enter element to search" << endl;
//     // int t;
//     // cin >> t;
//     // if(ispresent(arr, t,3,3)){
//     //     cout <<"Element found";
//     // }else{
//     //     cout <<"Not found";
//     // }
// }

//print like a wave  
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> wavePrint(vector<vector<int>> arr, int n, int m){
//     vector<int> ans;
//     for(int j=0;j<m;j++){
//         if(j & 1) {//odd index -> bottom to top
//             for(int i=n-1;i>=0;i--){
//                 ans.push_back(arr[i][j]);
//             }
//         }
//         else{
//             for(int i=0;i<n;i++){
//                 ans.push_back(arr[i][j]);
//             }
//         }
//     }
//     return ans;
// }

// int main(){
//     int n,m;
//     cin >> n >> m;
//     vector<vector<int>> arr(n, vector<int>(m));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//         cin >> arr[i][j];
//         }
//     }
//     cout <<"Wave print is: ";
//     for(int v: wavePrint(arr,n,m)){
//         cout << v << " ";
//     }
//     return 0;
// }

//spiral print  #include<iostream>
// #include<vector>
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> ans;
//         int row = matrix.size();
//         int column = matrix[0].size();

//         int count = 0;
//         int total = row*column;

//         int startr=0;
//         int startc = 0;
//         int endr = row-1;
//         int endc = column-1;

//         while(count<total){ 
//             //print first row
//             for(int i=startc; count < total && i <= endc;i++){
//                 ans.push_back(matrix[startr][i]);
//                 count++;
//             }
//             startr++;
//             //print last column
//             for(int i=startr; count < total && i <= endr;i++){
//                 ans.push_back(matrix[i][endc]);
//                 count++;
//             }
//             endc--;            
//             //print last row
//             for(int i=endc; count < total && i >= startc;i--){
//                 ans.push_back(matrix[endr][i]);
//                 count++;
//             }
//             endr--;
//             //print first column
//             for(int i=endr; count < total && i >= startr;i--){
//                 ans.push_back(matrix[i][startc]);
//                 count++;
//             }
//             startc++;            
//         }
//         return ans;
//     }
// };

// rotate by 90 degree
// #include <iostream>
// #include <vector>

// class solution {
//     public:
//     void rotate(vector<vector<int>> & matrix) {
//         int n = matrix.size();
//         // Transpose the matrix
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 std::swap(matrix[i][j], matrix[j][i]);
//             }
//         }               
//         // Reverse each row
//         for (int i = 0; i < n; i++) {
//             int start = 0, end = n - 1;
//             while (start < end) {
//                 std::swap(matrix[i][start], matrix[i][end]);
//                 start++;
//                 end--;
//             }
//         }

//     }
// };

//binary search in 2d array
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//     vector<int> ans;
//     int n = matrix.size();
//     int m = matrix[0].size();

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             ans.push_back(matrix[i][j]);
//         }
//     }
//     int s = 0;
//     int e = n*m-1;
//     while(s<=e){
//         int mid = s + (e-s)/2;
//         if(ans[mid] == target){
//             return true;
//         }
//         else if(ans[mid]<target){
//             s=mid+1;
//             }
//         else if(ans[mid]>target){
//                 e=mid-1;
//         }
        
//     }
//     return false;
//     }   
    

// };

//binary search in 2d array optimized inc dec upar ho

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();

    for(int i=0;i<n;i++){
        
    int s = 0;
    int e = m-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(matrix[i][mid] == target){
            return true;
        }
        else if(matrix[i][mid]<target){
            s=mid+1;
            }
        else if(matrix[i][mid]>target){
                e=mid-1;
        }
    }
    }
    return false;
    }   
    
};