// reverse an array 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void reverse(vector<int> &vec,int n){
//     // for(int i=0;i<n/2;i++){
//         // swap(vec[i], vec[n-i-1]);
//     // }
//     reverse(vec.begin(), vec.end());
//     return vec;
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> vec(n);
//     for(int i=0;i<n;i++){
//         cin >> vec[i];
//     }
//     reverse(vec, n);
//     for(int i=0;i<n;i++){
//         cout << vec[i]  << " ";
//     }

// }

//Merge two sorted arrays
// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(vector<int> &vec1 , int n, vector<int> &vec2, int m, vector<int> &vec3){
//     int i=0,j=0;
//     while(i<n && j<m){
//         if(vec1[i] < vec2[j]){
//             vec3.push_back(vec1[i++]);
//         }else{
//             vec3.push_back(vec2[j++]);
//         }
//     }
//     while (i<n)
//     {
//         vec3.push_back(vec1[i++]);
//     }
//     while(j<m){
//         vec3.push_back(vec2[j++]);
//     }    

// }
// int print(vector<int> &vec3){
//     for(int i=0;i<vec3.size();i++){
//         cout << vec3[i] << " ";
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> vec1(n);
//     for(int i=0;i<n;i++){
//         cin >> vec1[i];
//     }
//     int m;
//     cin >> m;
//     vector<int> vec2(m);
//     for(int i=0;i<m;i++){
//         cin >> vec2[i];
//     }
//     vector<int> vec3;
    
//     merge(vec1,n,vec2,m,vec3);
//     print(vec3);
//     return 0;
// }

// to merge array into single first 
//nums1 = [1,2,3,0,0,0] num2 = [2,4,5];=>nums1 = [1,2,2,3,4,5]

// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(vector<int>& nums1, int n, vector<int>& nums2, int m){
//     int i = n-1;
//     int j = m-1;
//     int k = m+n-1;
//     while(i>=0 && j>=0){
//         if(nums1[i]>nums2[j]){
//             nums1[k--] = nums1[i--];
//         }
//         else{
//             nums1[k--] = nums2[j--];
//         }
//     }
//     while(j>=0){
//         nums1[k--] = nums2[j--];
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> nums1;
//     for(int i=0;i<n;i++){
//         cin >> nums1[i];
//     }
//     int m;
//     cin >> m;
//     vector<int> nums2;
//     for(int i=0;i<m;i++){
//         cin >> nums2[i];
//     }
//     merge(nums1,n,nums2,m);
//     for(int i: nums1){
//         cout << i << " ";
//     }
    
// }

//move zeros


// #include<iostream>
// #include<vector>
// using namespace std;

// void move(vector<int> &nums){
//     int i=0;
//     for(int j=0;j<nums.size();j++){
//         if(nums[j] != 0){
//             swap(nums[j], nums[i]);
//             i++;
//         }
//     }    
// }

// int main(){
//     vector<int> nums={0,1,0,3,12};

//     move(nums);
//     for(int i=0;i<nums.size();i++){
//         cout << nums[i] << " ";
//     }
// }

// rotate an array
// #include<iostream>
// #include<vector>
// using namespace std;

// void rotate(vector<int>& nums, int key) {
//     vector<int>temp(nums.size());
//     for(int i=0;i<nums.size();i++){
//         temp[(i+key)%nums.size()] = nums[i];
//     }
//     nums = temp;
// }

// int main() {
//     vector<int> nums = {1,2,3,4,5,6,7};
//     int key;
//     cin >> key;
//     rotate(nums,key);
//     for(int i=0;i<nums.size();i++){
//         cout << nums[i] <<" ";
//     }
// }

//check if array is sorted and rotated
// #include<iostream>
// #include<vector>
// using namespace std;

// bool  check(vector<int>& nums){
//     int count = 0;
//     int n = nums.size();
//     for(int i=1;i<n;i++){
//         if(nums[i-1]>nums[i]){
//             count++;
//         }
//     }
//     if(nums[n-1]>nums[0]){
//         count++;
//     }
//     return count<=1;
// }

// int main(){
//     vector<int> nums = {3,4,5,1,2};
//     if(check(nums)){
//         cout<<"Yes";
//     }else{
//         cout<<"No";
//     }
// }

// To add two arrays
#include<iostream>
#include<vector>

using namespace std;

vector<int>reverse(vector<int> v){
    int s = 0,e=v.size()-1;
    while(s<e){
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int>findarraysum(vector<int>& a, int n, vector<int>& b, int m){
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    vector<int> ans;
    while(i >= 0 && j >= 0){
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0) {
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0) {
        int sum = b[j] + carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        j--;
    }
    while(carry != 0) {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }

    return reverse(ans);
}

int main(){
    vector<int> v1 = {1,2,3,4};
    vector<int> v2 = {6};
   vector<int> result = findarraysum(v1, v1.size(), v2, v2.size());

    for (int digit : result) {
        cout << digit;
    }
    cout << endl;    
}
