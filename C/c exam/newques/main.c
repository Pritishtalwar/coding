// // any kind of rotation
// #include <stdio.h>

// void rotate(int arr[], int n, int k) {
//     k = k%n;
//     int temp[n];
//     for(int i=0;i<k;i++){
//         temp[i] = arr[n-k+i];
//     }
//     for(int i=k;i<n;i++){
//         temp[i] = arr[i-k];

//     }
//     for(int i=0;i<n;i++){
//         arr[i] = temp[i];
//     }
// }

// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     int k;
//     scanf("%d", &k);

//     rotate(arr, n, k);
//     printf("towards right rotation\n");
//     for(int i = 0; i < n; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     printf("\n");
//     printf("towards down rotation\n");
//     for(int i = 0; i < n; i++){
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }

// to find the frequency of each element in an array
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n], freq[1000] = {0};
    for(int i=0;i<n;i++){
        scanf("%D", &arr[i]);
        freq[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<i;j++){
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
        if(count == 0) {
            printf("%d %d\n", arr[i], freq[arr[i]]);
        }
    }
    return 0;
}