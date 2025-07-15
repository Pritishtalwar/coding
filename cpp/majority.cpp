// return pair in sorted array with target sum
// #include<iostream> 
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >>arr[i];
//     }
//     int t;
//     cin>>t;
//     int a, b;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i] + arr[j] == t){
//                 a = arr[i], b= arr[j];
//             }
//         }
//     }
//     if(a<b){
//         cout<<a << " " << b;
//     }else{
//         cout<<b<<" "<<a;
//     }
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> target(vector<int> arr,int t){
//     vector<int> ans;
//     for(int i=0; i < arr.size(); i++){
//         for(int j= i+1; j < arr.size(); j++){
//             if(arr[i] + arr[j] == t){
//                 ans.push_back(arr[i]);
//                 ans.push_back(arr[j]);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i =0;i<n;i++){
//         cin >> arr[i];
//     }
//     int t;
//     cin >> t; 
//     for(int i: target(arr, t)){
//         cout << i<<endl;;
    
//     }
//     }


// majority element

// #include<iostream>
// #include<vector>
// using namespace std;

// int majority(vector<int>& nums){
//     int n = nums.size();

//     for(int val : nums) {
//         int freq = 0;

//         for(int el : nums) {
//             if(el == val) {
//                 freq++;
//             }
//         }
//         if(freq > n/2){
//             return val;
//         }
//     }
// }

// int main(){
//     int n;
//     cin >>n;
//     vector<int> nums(n);
//     for(int i=0;i<n;i++){
//         cin >> nums[i];
//     }
//     cout << majority(nums);
// }

#include<iostream>
#include<vector>
using namespace std;

// int majority(vector<int>& arr){
//     int n= arr.size();
    
//     for(int i: arr){
//     int freq = 0;
//         for(int j: arr){
//             if(j == i){
//                 freq++;
//             }
//         }
//         if(freq > n/2){
//             return i;
//         }
//     }
//     return -1;
// }

int majority(vector<int> &arr){
    int n = arr.size();
    int freq = 0, ans = 0;
    for(int i=0;i<n;i++){
        if(freq == 0){
            ans = arr[i];
        }
        if(ans == arr[i]) {
            freq++;
        } else{
            freq--;
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int result = majority(arr);
    if(result != -1){
        cout << result<<endl;
    }
    else{
        cout << "No majority"<<endl;
    }
}

