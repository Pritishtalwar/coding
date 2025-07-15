// #include <stdio.h>
// #include <string.h>

// int main(){
//     char a[50], b[50];
//     puts("Enter: ");
//     gets(a);
//     strcpy(b, a);
//     strrev(b);
//     puts(b);

//     int i=0;
//     i = strcmp(a, b);
//     if(i==0){
//         printf("String is pal");
//     } else{
//         printf("String is not pal");

//     }
//     return 0;
// }

// reverse a string
// #include <stdio.h>
// #include <string.h>

// int main(){
//     char a[50];
//     fgets(a, sizeof(A), stdin);
//     int len = strlen(A);
//     if(a[len - 1] == '\n') {
//         a[len - 1] = '\0';
//         len--;
//     }
//     for(e)
//     return 0;
// }

//palin
#include <stdio.h>
#include <string.h>

int main(){
    char str[200];
    fgets(str, 200, stdin);
    str[strcspn(str, "\n")]='\0';

    int s=0;
    int e=strlen(str) - 1;
    int p =1;
    while(e>s){
        if(str[s]!=str[e]){
            p = 0;
            break; 
        }
        s++;
        e--;
    }
    if(p) printf("Yes");
    else printf("No");
    return 0;
}