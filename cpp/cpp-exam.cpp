// 1 Find next greater elementWe are given a circular array, print the next greater number for every element. If it is not foundprint -1 for that number. To find the next greater number for element Ai , start from index i + 1and go uptil the last index after which we start looking for the greater number from the startingindex of the array since array is circ

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> nextG(vector<int>& nums){
//     int n = nums.size();
//     vector<int> res(n, -1);
//     stack<int> st;
//     for(int i=0;i<2*n; i++){
//         int idx = i%n;
//         while(!st.empty() && nums[st.top()] < nums[idx]){
//             res[st.top()] = nums[idx];
//             st.pop();
//         }
//         if(i<n) st.push(idx);
//     }
//     return res;
// }

// int main() {
//     vector<int> arr = {5,7,1,2,6,0};
//     vector<int> ans = nextG(arr);
//     for(int i: ans) cout<<i<<" ";
// }

// . Nearly sorted arrayGiven an array of N elements, where each element is at most K away from its target position,devise an algorithm that sorts in O(N log K) time
#include<bits/stdc++.h>
using namespace std;

void sortK(vector<int> &arr, int k){
    int n = arr.size();

    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0; i<=k && i<n; i++){
        pq.push(arr[i]);
    }

    int idx = 0;

    for(int i=k+1; i<n;i++) {
        arr[idx++] = pq.top();
        pq.pop();

        pq.push(arr[i]);
    }
    while(!pq.empty()){
        arr[idx++] = pq.top();
        pq.pop();
    }
}


int main() {
    vector<int> arr = {6, 5, 3, 2, 8, 10, 9};
    int k = 3;

    sortK(arr, k);

    for (int x : arr) cout << x << " ";
    return 0;
}