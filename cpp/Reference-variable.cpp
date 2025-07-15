// #include<iostream>
// using namespace std;

// void update1(int n){
//     n++;
// }
// void update2(int& n){
//     n++;
// }

// int main() {
//     int i=5;

//     //ref var
//     // int &j = i;
//     // cout << i << endl;
//     // i++;
//     // cout << i <<endl;
//     // j++;
//     // cout << i << endl;
//     // cout << j << endl;

//     int n = 5;
//     cout<<n<<endl;
//     update1(n);
//     cout<<n<<endl;
//     update2(n);
//     cout<<n<<endl;
// }

// program start => memory 
// memory two types stack and heap
// stack choti memory hai
// heap badi memory hai
// stack memory is used for static memory allocation
// array ko memory stack s alot hoti hai but agr voh zada bada hua memory toh system crash ho jata hai
// heap memory is used for dynamic memory allocation

// #include<iostream>
// using namespace std;

// int get(int *arr, int n){
//     int sum = 0;
//     for(int i=0; i<n; i++) {
//         sum += arr[i];
//     } 
//     return sum;
// }

// int main() {
//     int n;
//     cin >> n;

//     int* arr = new int[n];

//     for(int i=0; i<n ;i++) {
//         cin >> arr[i];
//     }

//     int ans = get(Arr, n);
//     cout<<ans<<endl;


//     while(true){
//         int i=5;
//     }

//     while (true)
//     {
//         int* ptr = new int;
//     } 
    
// }



// Dynamic memory allocation in 2d array
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int **arr = new int*[n];

//     // 2d array is an array of pointers
//     // each pointer points to an array of integers pointer mein array of integers ka address store hota hai
//     // so we need to allocate memory for each row of the 2d array
//     for(int i=0;i<n;i++) { 
//         arr[i] = new int[n];
//     }

//     for(int  i=0;i<n;i++) {
//     for(int j=0;j<n;j++) {
//         cin >> arr[i][j];
//     }

//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n;j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
//     return  0;
// }

// for row n Column

#include <iostream>
using namespace std;        

int main(){
    int r;
    cin >> r;
    int c;
    cin >> c;


    int ** arr = new int*[r];
    for(int i=0;i<r;i++){
        arr[i] = new int[c];
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0;i<r;i++){
        delete[] arr[i];
    }
    delete[] arr;

}