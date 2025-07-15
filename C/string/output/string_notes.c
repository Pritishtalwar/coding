 // strings using pointers
/*
in pointer we can change the value but in char arr we cannot 
*/

// #include <stdio.h>

// int main(){
//     char *canchange = "Hello World";
//     puts(canchange);
//     canchange = "Hello";    
//     puts(canchange);

//     char cannotchange[] = "hey Bitches";
//     puts(cannotchange);
//     cannotchange = "bitches";
//     return 0;
// }


//count length of sentence
// #include <stdio.h>

// int countlength(char arr[]);

// int main(){
//     char name[50];
//     fgets(name, 50, stdin);
//     printf("The length is: %d", countlength(name));
//     return 0;
// }

// int countlength(char arr[]){
//     int count = 0;
//     for(int i=0;arr[i] != '\0'; i++){
//         count++;
//     }
//     return count-1;
// }


//string function library
// #include <stdio.h>
// #include <string.h>

// int main(){
//     char name[50] = "shradha";
//     char new[50]="rahul";
//     // int length = strlen(name);
//     // printf("The lenght is %d\n", length);//strlen use
//     // strcpy(new, name);//strcpy pehla jiss mein copy krke dalna
//     // puts(new);
//     // puts(strcat(name, new)); //concatenates first string with second string
//     // printf("%d",strcmp(name, new));//strcmp compares two string
    
//     return 0;
// }

//take input string from the user using %c
// #include <stdio.h>
// #include <string.h>

// int main(){
//     char str[50];
//     char ch;
//     int i = 0;

//     // the next five lines act like gets or fgets
//     while(ch != '\n') {
//         scanf("%c", &ch);
//         str[i] = ch;
//         i++;
//     }
//     str[i-1] = '\0';
//     puts(str);
//     printf("\n%d", strlen(str));
//     return 0;
// }

//find the salted form of a password entere by user if the salt is 123 and added at the end
// #include <stdio.h>
// #include <string.h>

// int main(){
//     char ch[100];
//     fgets(ch, 100, stdin);
    
//     ch[strcspn(ch, "\n")] = '\0';

//     char salt[] = "123";
//     char new[200];
    
//     strcpy(new, ch);
//     strcat(new, salt);
    
//     puts(new);
//     return 0;
// } 

// #include <stdio.h>
// #include <string.h>

// void salting(char pwd[]);

// int main(){
//     char pwd[100];
//     scanf("%s", pwd);    
//     salting(pwd);
//     return 0;
// }

// void salting(char pwd[]){
//     char salt[] = "123";
//     char new[200];
//     strcpy(new, pwd);
//     strcat(new, salt);
//     puts(new);
// }

// waf named slice, which takes a string & returns a sliced string from index n to m
// #include <stdio.h>
// #include <string.h>

// void slice(char str[], int n, int m);

// int main(){
//     int n, m;
//     scanf("%d %d", &n, &m);
//     char name[221] = "slice";
//     slice(name, n, m);
//     return 0;
// }

// void slice(char str[], int n, int m){
//     for(int i=n;i<=m;i++){
//         printf("%c", str[i]);
//     }
//     return 0;
// }

// doing it in another method of making new str
// #include <stdio.h>

// void slice(char name[],int  n,int m);

// int main(){
//     int n, m;
//     scanf("%d %d", &n, &m);
//     char name[]="Hello world";
//     slice(name, n, m);
//     return 0;
// }

// void slice(char name[],int  n,int m){
//     char new[200];
//     int j=0;
//     for(int i=n;i<=m;i++, j++){
//         new[j] = name[i];
//     }
//     new[j] = '\0';
//     printf("%s", new);
// }

// waf to count the occurenece of vowels
// #include <stdio.h>
// #include <string.h>

// int vowels(char str[]);

// int main(){
//     char str[50];
//     fgets(str, 50, stdin);
//     int vowelcount = vowels(str);
//     printf("%d", vowelcount);
//     return 0;
// }

// int vowels(char str[]){
//     int i=0;
//     int count =0;
//     while(str[i]!='\0'){
//         if(str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U'){
//             count++;
//         }
//         i++;
//     }
//     return count;
// }

// check if given character is present in a string or not
// #include <stdio.h>
// #include <string.h>

// int main(){
//     char str[200];
//     fgets(str, 200, stdin);
//     char g;
//     scanf("%c", &g);

    
//     int found = 0;
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i] == g){
//             found = 1;
//             break;
//         }
//     }
// if(found) printf("Yes");
// else printf("No");
//     return 0;
// }


//  wap to convert all lowercase vaowels to uppercase in a string
// #include <stdio.h>

// void convert(char str[]);

// int main(){
//     char str[200];
//     fgets(str, 100, stdin);
//     convert(str);
//     printf("%s", str);
//     return 0;
// }

// void convert(char str[]){
//     for(int i=0;str[i]!='\0';i++){
//         switch(str[i]) {
//             case 'a' : str[i] = 'A'; break;
//             case 'e' : str[i] = 'E'; break;
//             case 'i' : str[i] = 'I'; break;
//             case 'o' : str[i] = 'O'; break;
//             case 'u' : str[i] = 'U'; break;
//         }
//     }
// }

//wap to print the highest frequency character in a string
#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

char getHighestFrequnceyChar(char str[]) {
    int freq[ASCII_SIZE] = {0};
    int i, maxFreq = 0;
    char maxChar;

    for(i = 0;str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }
    for(i=0;i<ASCII_SIZE;i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }
    return maxChar;
}

int main(){
    char str[400];
    char maxChar;

    printf("Enter: ");
    gets(str);

    maxChar = getHighestFrequencyChar(str);
    
    printf("Char with highest frequency: %c\n", maxChar);
    
    return 0;
}