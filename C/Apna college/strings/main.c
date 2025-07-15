// q47 =create a string  firstName & lastName to stor destails of user & print all the characters using a loop

// #include<stdio.h>
// void printString(char arr[]);

// intt main() {
//     char name[50];
//     scanf("%s", name);
//     printf("Your name is %s", name);
//     return 0;

// }

// void printString(char arr[]) {
//     for(int i=0; arr[i] != '\0'; i++) {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }


// #include<stdio.h>

// void printString(char arr[]);

// int main() {
//     char name[50];
//     scanf("%s", name);
//     printf("Your name is %s", name);
//     return 0;
// }

// void printString(char arr[]) {
//     for(int i=0; arr[i] != '\0'; i++) {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }
// q48 ask the user to enter their first nme and print it back to them 
//also try their full name
// //1st part
// #include<stdio.h>
// void printString(char arr[]);

// int main() {
//     char firstName[50];
//     scanf("%s", firstName);
//     printf("Your name is %s", firstName);
//     return 0;
// }
// void printString(char arr[]) {
//     for(int i=0; arr[i] != '\0'; i++) {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }

// #include<stdio.h>

// void printFirstname(char arr[]);

// int main() {
//     char firstName[50];
//     scanf("%s", firstName);
//     printf("Your name is %s", firstName);
//     return 0;
// }
// void printFirstname(char arr[]){
//     for(int i=0; arr[i] != '\0'; i++) {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }

// #include<stdio.h>

// void first(char arr[]);
// int main() {
//     char first[2];
//     scanf("%s", first);
//     printf("Your name is %s", first);
//     return 0;
// }

// void first(char arr[]) {
//     for (int i=0; arr[i] != 0; i++) {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }
// full name
// #include<stdio.h>

// void printString(char arr[]);

// int main() {
//     char str[100];
//     // gets(str);
//     // puts(str);

//     fgets(str, 100, stdin);
//     puts(str);

//     return 0;
// }

// void printString(char arr[]) {
//     for(int i=0; arr[i] != 0; i++) {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }

// #include<stdio.h>

// void printString(char arr[]);

// int main() {
//     char *canChange = "Hello World";
//     puts(canChange);
//     canChange = "Hello World 2";
//     puts(canChange);    
//     return 0;
// }

// void printString(char arr[]) {
//     for (int i=0; arr[i] != 0; i++) {
//         printf("%c", arr[i]);

//     }
//     printf("\n");
// }

//q49 Make a program that inputs user's name & print its length
#include<stdio.h>

void printString(char arr[]);
int countLength(char arr[]);

int main() {
    char name[100];
    fgets(name, 100, stdin);
    printf("Length is: %d", countLength(name));
    return 0;
}
int countLength(char arr[]){
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++) {
        count++;
    }
    return count-1;
}

void printstring(char arr[]){
    for (int i=0; arr[i] != 0; i++) {
        printf("%c", arr[i]);
    }
}