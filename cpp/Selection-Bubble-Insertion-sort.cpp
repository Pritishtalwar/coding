#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
//Selection sort
    for(int i=0;i<n-1;i++){
        int min = i

        for(j)
    }
//Bubble Sort
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] =arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//Insertion sort
    // for(int i=1;i<n;i++){
    //     int temp = arr[i];
    //     int j=i-1;
    //     for(;j>=0;j--){
    //         if(arr[j]>temp){
    //             arr[j+1] = arr[j];
    //         }else{
    //             break;
    //         }
    //     }
    //     arr[j+1] = temp;
    // }
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
}


