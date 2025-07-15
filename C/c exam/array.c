// // #include <stdio.h>

// // int main(){
// //     int arr[7], size=6, element, position;
// //     printf("Enter 6 numbers: ");
// //     for(int i=0;i<size;i++){
// //         scanf("%d", &arr[i]);
// //     }
    
// //     printf("Enter en element: ");
// //     scanf("%d", &element);
// //     printf("Enter a position: ");
// //     scanf("%d", &position);
    
// //     if(position > size || position < 0){
// //         printf("invalid");
// //     } 

// //     for(int i=0;i<size;i++){
// //         printf("%d ", arr[i]);
// //     }
// //     printf("\n");
// //     for(int i=size;i>position;i--){
// //         arr[i] = arr[i + 1];
// //     }
// //     arr[position] = element;
// //     // size++;

// //     printf("Update array: ");
// //     for(int i=0;i<size;i++){
// //         printf("%d ", arr[i]);
// //     }
// //     printf("\n");

// //     return 0;
// // }

//to find trans
// #include <stdio.h>

// int main(){
//     int r, c;
//     scanf("%d %d", &r, &c);
//     int arr[r][c];
//     int trans[c][r];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//         scanf("%d", &arr[i][j]);
//         }
//     }
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             trans[j][i] = arr[i][j];
//         }
//     }
//     printf("\n");
//     for(int i=0;i<c;i++){
//         for(int j=0;j<r;j++){
//             printf("%d ",trans[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//fnd largest and second largest in an array

// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     int l = arr[0], s=arr[1];
//     if(s>l){
//         int temp = l;
//         s=l;
//         l=temp;
//     }
//     for(int i=2;i<n;i++){
//         if(arr[i]>l){
//             s =l;
//             l=arr[i];
//         }else if(arr[i] > s && arr[i] != l){
//             s = arr[i];
//         }
//     }
//     printf("Largest: %d\n", l);
//     printf("Second Largest: %d\n", s);

//     return 0;
// }

// average of marks of 3 subject for each student

// #include <stdio.h>

// struct student{
//     char name[20];
//     int roll;
//     float marks[5];
//     float avg;
// };

// int main(){
//     int n;
//     scanf("%d", &n);
//     struct student s[n];
//     for(int i=0;i<n;i++){
//         scanf("%s %d", s[i].name, &s[i].roll);
//         for(int j=0;j<5;j++){
//             scanf("%f", &s[i].marks[j]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         float total = 0;
//         for(int j=0;j<5;j++){
//             total+=s[i].marks[j];
        
//         }
//         s[i].avg = total/5;
//     }
//     for(int i=0;i<n;i++){
//         printf("Name: %s, Roll: %d, Average: %.2f\n", s[i].name, s[i].roll, s[i].avg);
//     }
//     return 0;
// // }
// #include <stdio.h>
// #include <string.h>

// int main(){
//     char s[11];
//     char s2[10];
//     char result[222];
//     scanf("%s", s);
//     scanf("%s", s2);
//     int i=0,j=0;
//     while(s[i]!='\0'){
//         result[i] = s[i];
//         i++;
//     }
//     while(s2[j]!='\0'){
//         result[i] =s2[j];
//         i++;
//         j++; 
//     }
//     result[i] = '\0';
//     printf("%s\n", result);

// }

// #include <stdio.h>
// struct student{
//     char name[20];
//     float marks[3];
//     float total;
// };
// int main(){
//     int n;
//     scanf("%d", &n);
//     struct student s[n];
//     for(int i=0;i<n;i++){
//         scanf("%s", s[i].name);
//         for(int j=0;j<3;j++){
//             scanf("%f", &s[i].marks[j]);
//             }
//     }
//     for(int i=0;i<n;i++){
//         float sum = 0;
//         for(int j=0;j<3;j++){
//             sum += s[i].marks[j];
//         }
//         s[i].total = sum;
//     }
//     for(int i=0;i<n;i++){
//         printf("Name: %s, Total Marks: %.2f\n", s[i].name, s[i].total);
//     }
//     return 0;
// // }

// #include <stdio.h>

// struct student {
//     char name[20];
//     float marks[5];
//     float total;
// };

// int main() {
//     int n;
//     scanf("%d", &n);

//     struct student s[n];

//     // Input: name and 3 marks per student
//     for (int i = 0; i < n; i++) {
//         scanf("%s", s[i].name);
//         for (int j = 0; j < 3; j++) {
//             scanf("%f", &s[i].marks[j]);
//         }
//     }

//     // Calculate total marks
//     for (int i = 0; i < n; i++) {
//         float sum = 0;
//         for (int j = 0; j < 3; j++) {
//             sum += s[i].marks[j];
//         }
//         s[i].total = sum;
//     }

//     // Output: name and total marks
//     for (int i = 0; i < n; i++) {
//         printf("Name: %s, Total Marks: %.2f\n", s[i].name, s[i].total);
//     }

//     return 0;
// }


#include <stdio.h>

int main(){
    char a[20], b[20], result[50];
    scanf("%s", a);
    scanf("%s", b);
    int i=0, j=0;
    while(a[i] != '\0'){
        result[i] = a[i];
        i++;
    }
    while(b[j] != '\0'){
        result[i] = b[j];
        i++;
        j++;
    }
    result[i] = '\0';
    printf("%s\n", result);
    return 0;
}