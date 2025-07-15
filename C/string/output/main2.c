// #include <stdio.h>
// #include <string.h>

// int main(){
//     int i;
//     char name[] ="kinsmen";
//     i=0;
//     while(name[i] != '\0')
//     {
//         printf("%c", name[i]);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }

// using pointers
// #include <stdio.h>

// int main(){
//     char name[] = Kinsman;
//     char *ptr;
//     ptr = name;
//     while(*ptr != '\0'){
//         printf("%c", *ptr);
//         ptr++;
//     }
//     printf("\n");
//     return 0;
// }


//gets
// #include <stdio.h>

// int main(){
//     char name[25];
//     printf("Enter: ");
//     scanf("%[^\n]s", name);
//     int i;
//     i=0;
//     while(name[i] != '\0'){
//         printf("%c", name[i]);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }


//use of strlen and %s
// #include <stdio.h>
// #include <string.h>

// int main(){
//     char arr[] = "Bomboozled";
//     int len1, len2;
//     len1 = strlen(arr);
//     len2 = strlen("Humpty Dumpty");
//     printf("String = %s Length = %d\n", arr, len1);
//     printf("String = %s Length = %d\n", "Humpty Dumpty", len2);
//     return 0;
// }

// doing it func xtrlen
// #include <stdio.h>
// #include <string.h>
// int xstrlen(char *);

// int main(){
//     char arr[] = "Bamboozled";
//     int len1, len2;
//     len1 = xstrlen(arr);
//     len2 = xstrlen("Humpty Dumpty");
//     printf("string = %s Length = %d\n", arr, len1);
//     printf("string = %s Length = %d\n", "Humpty Dumpty", len2);
//     return 0;
// }

// int xstrlen(char *s){
//     int length = 0;
//     while(*s != '\0'){
//         length++;
//         s++;
//     }
//     return(length);
// }


//use of strcpy
// #include <stdio.h>
// #include <string.h>

// int main(){
//     char source[] = "Sayonara", target[20];
//     strcpy(target, source);//copy source into target
//     printf("Source string = %s\n", source);
//     printf("Target string = %s\n", target);
//     return 0;
// }

// // using functions
// #include <stdio.h>
// #include <string.h>

// void xstrcpy(char* , char*);

// int main(){
//     char source[]="Sayonara", target[20];
//     xstrcpy(target, source);
//     printf("Source string = %s\n", source);
//     printf("Target string = %s\n", target);
//     return 0;
// }
// void xstrcpy(char *t , char *s){
//     while(*s != '\0'){
//         *t = *s; s++; t++;
//     }
//     *t = '\0';
// }