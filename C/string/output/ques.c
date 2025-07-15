// #include<stdio.h>
// #include<string.h>

// int main() {
//     char str[200];
//     fgets(str, 200, stdin);
    
//     str[strcspn(str, "\n")] = 0; // Remove newline character if present
//     int len = strlen(str);

//     for(int i=len-1;i>=0;i--){
//         printf("%c", str[i]);
//     }
    
//     return 0;
// // }

// #include <stdio.h>

// int main(){
//     char str[200];
//     fgets(str, 200, stdin);
//     char t;
//     scanf("%c", &t);
//     for(int i=0; str[i]!='\0';i++){
//         if(str[i] == t){
//             printf("Yes\n");
//             printf("%d\n", i);
//             break;
//         }
//     }
//     return 0;
// }


#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n], int freq[n]; 
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for(int i=0;i<n;i++){
        if(freq[i] == -1) {
            int count = 1;
            for(int j = i+1; j<n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;
                }
            }
        }
    }
    return 0;
}