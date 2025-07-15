// to rotate elements of an array
// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     int k;
//     scanf("%d", &k);
//     k=k%n;

//     int temp[n];
//     for(int i=0;i<n;i++){
//         temp[i] =  arr[n - k + i];
//     }
//     for(int i=k;i<n;i++){
//         temp[i] = arr[i - k];
//     }
//     for(int i=0;i<n;i++){
//         arr[i] = temp[i];
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


// count majority
// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n]; 
//     int freq[1001] = {0};
//     for(int i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//         freq[arr[i]]++;
//     }
//     int max = 0;
//     int w = arr[0];
//     for(int i=0;i<n;i++){
//         if(freq[arr[i]] > max){
//             max = freq[arr[i]];
//             w= arr[i];
//         }
//     } 
//     if(max > n/2){
//         printf("%d", w);
//     }
//     else{
//         printf("No majority element");
//     }return 0;
// }

//palindrome array
// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     int pal = 1;
//     for(int i =0;i<n/2;i++){
//         if(arr[i] != arr[n - i -1]){
//             pal = 0;
//         }
//     }
//     if(pal == 1){
//         printf("Yes");
//     }
//     else{
//         printf("No");
//     }
    
//     return 0;

// }

#include <stdio.h>
#include <string.h>

int main(){
    char str[200];
    scanf("%s", str);
    str[strcspn(str,"\n")] = '\0';
    int n = strlen(str);
    int pal = 1;
    for(int i=0;i<n;i++){
        if(str[i] != str[n-i-1]){
            pal = 0;
        }
    }
    if(pal == 1){
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}