#include <stdio.h>

int calculatesum(int arr[], int size) {
    int sum =0;
    for(int i=0;i<size;i++){
        sum = sum +arr[i];
    }
    return sum;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int arr[n];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("Sum of arr is: %d", calculatesum(arr, size));
    return 0;
}