// #include <stdio.h>
// #include <string.h>

// int is_palindrome(const char* str) {
//     int length = strlen(str);
//     for (int i = 0; i < length / 2; i++) {
//         if (str[i] != str[length - i - 1]) {
//             return 0;
//         }
//     }
//     return 1; 
// }

// int main() {
//     const char* str = "madam";
//     if (is_palindrome(str)) {
//         printf("%s is a palindrome\n", str
//     } else {
//         printf("%s is not a palindrome\n", str);
//     }
//     return 0;
// }

#include <stdio.h>

int main(){
    char ch[75];
    printf("Enter a character: ");
    scanf("%s", &ch);
    int count = 0;
    for(char x : ch){
        if(ch == 'a' || ch== 'e' || ch== 'i' || ch== 'o' || ch== 'u' || ch== 'A' || ch== 'E' || ch== 'I' || ch== 'O' || ch== 'U'){  
            count++;
        }
    }
    printf("%d", count);
    return 0;
}