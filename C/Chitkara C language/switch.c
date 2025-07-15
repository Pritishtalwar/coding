// #include <stdio.h>

// int main(){
//     char a;
//     printf("Enter a character: ");
//     scanf("%c", &a);
//     switch(a){
//         case 'a' : case 'A':
//             printf("Vowel");
//             break;
//         case 'e': case 'E':
//             printf("Vowel");
//             break;
//         case 'i': case 'I':
//             printf("Vowel");
//             break;
//         case 'o': case 'O':
//             printf("Vowel");
//             break;
//         case 'u': case 'U':
//             printf("Vowel");
//             break;
//         default:
//             printf("Consonant");        
//     }
//     return 0;
// }

#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter three numbers: ", a, b, c);
    scanf("%d %d %d", &a, &b, &c);
    switch(1){
        case 1:
        if(a>b && a>c){
            printf("A is greater");
        }
        else if(b>a && b>c){
            printf("B is greater");
        }
        else if(c>b && c>a){
            printf("C is greater");
        }
        else{
            printf("All are equal");
        }
    }
    return 0;
}