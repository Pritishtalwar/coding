#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // int num = 1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout << j+1<<" ";
    //     }
    //     cout << endl;
    // }


    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout << i+1<<" ";
    //     }
    //     cout << endl;
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=i;j>=0;j--){
    //         cout<<j+1<<" ";
    //     }
    //     cout << endl;
    // }

    // int num = 1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //      cout << endl;
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout << " ";
    //     }
    //     for(int j = 0;j<n-i;j++){
    //         cout << i+1;
    //     }
    //     cout << endl;
    // }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<i+1;j++){
            cout << j+1;
        }
        for(int j=i-1;j>=0;j--){
            cout << j+1;
        }
        cout << endl;
    }
    return 0;
}