#include <stdio.h>

int main(){
    int arr[] = {2,4,5,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *start = arr;
    int *end = arr + n - 1;
    
    // Reverse array using pointers
    for(; start < end; start++, end--){
        int temp = *start;
        *start = *end;
        *end = temp;
    }
    
    // Print array using pointers
    for(int *ptr = arr; ptr < arr + n; ptr++){
        printf("%d ", *ptr);
    }
    
    return 0;
}
