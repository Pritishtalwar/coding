//array = a datastructure that can store many values of the same data types
// #include <stdio.h>

// int main(){
//     double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0,30.0};
//     // printf("%d bytes\n", sizeof(prices));
//     for(int i =0;i< sizeof(prices) / sizeof(prices[0]);i++){
//         printf("$%.2lf\n", prices[i]);
//     }
//     return 0;
// }

//2d array = an array, where each element is an entire array useful if you need a matrix, grid, or table or date
// #include <stdio.h>

// int main(){
//     // int numbers[2][3] = {
//     //     {1,2,3},
//     //     {4,5,6}
//     //   };
//     int numbers[2][3];

//     numbers[0][0] = 1;
//     numbers[0][1] = 2;
//     numbers[0][2] = 3;
//     numbers[1][0] = 4;
//     numbers[1][1] = 5;
//     numbers[1][2] = 6;
    
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ", numbers[i][j]);
//     }
//     printf("\n");

// }
// return 0;}

// #include <stdio.h>
// #include<string.h>

// int main(){
//     char cars[][10] = {"Mustang","lamb","corvette","camero"};
//     strcpy(cars[0], "Tesla");
//     for(int i=0;i<sizeof(cars)/sizeof(cars[0]); i++){
//         printf("%s\n", cars[i]);
//     }
//     return 0;
// }
//swap two values of variables
// #include <stdio.h>
// #include<string.h>

// int main(){
//     char x[] = "water";
//     char y[] = "lemonade";
//     char temp[15];

//     strcpy(temp, x);
//     strcpy(x, y);
//     strcpy(y, temp);

//     printf("x = %s\n", x);
//     printf("y = %s\n", y);
//     return 0;
// }

//sort the elements of an array
// #include <stdio.h>
// void sort(int arr[], int size){
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]= temp;
//             }
//         }
//     }
// }
// void printArr(int arr[], int size){
//     for(int i=0;i<size;i++){
//         printf("%d ", arr[i]);
//     }
// }
// int main(){
//     int arr[9]= {};
//     printf("Enter: ");
//     for(int i=0;i<9;i++){
//         scanf("%d", &arr[i]);
//     }
//     int size = sizeof(arr)/sizeof(arr[0]);
//     sort(arr, size);
//     printArr(arr, size);
//     return 0;
// }

// for char

// #include <stdio.h>
// void sort(char array[], int size){
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-1;j++){
//             if(array[j]>array[j+1]){
//                 char temp = array[j];
//                 array[j]=array[j+1];
//                 array[j+1]= temp;
//                 }
// }}
//     }
// void printArray(char array[], int size){
//     for(int i=0;i<size;i++){
//     printf("%c ", array[i]);
//     }
// }
// int main(){
//     char array[] = {'g','f','a','b','c','d','e'};
//     int size = sizeof(array)/sizeof(array[0]);
//     sort(array, size);
//     printArray(array, size);
//     return 0;
// }

//structures
// #include <stdio.h>
// void display1(int);
// void display2(int *);
// int main(){
//     int i;
//     int marks[] = {55, 65, 75, 78, 78, 90};
//     for(i=0;i<6;i++)
//     display1(marks[i]);
//     printf("\n");
//     for(i=0;i<=6;i++)
//     display2 (&marks[i]);   
//     return 0;
// }

// void display1(int m){
//     printf("%d ", m);
// }

// void display2(int *n){
//     printf("%d ", *n);
// }

// #include <stdio.h>

// int main(){
//     int i=3, *x;
//     float j= 1.5, *y;
//     char k = 'c', *z;
//     printf("Value of i = %d\n", i);
//     printf("Value of j = %f\n", j);
//     printf("Value of k = %c\n", k);
//     x = &i; y= &j; z = &k;
//     printf("Original address in i = %u\n", x);
//     printf("Original address in j = %u\n", y);
//     printf("Original address in k = %u\n", z);
//     x++ ; y++; z++;
//     printf("New Original address in i = %u\n", x);
//     printf("New Original address in j = %u\n", y);
//     printf("New Original address in k = %u\n", z);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[] = {10, 20, 30, 45, 67, 56, 74};
//     int i = 4, *j, *k, *x, *y;
//     j = &i;
//     j = j + 9;
//     k = k - 3;
//     x = &arr[1];
//     y = &arr[5];
//     printf("%d\n", y-x);
//     j = &arr[4];
//     k = (arr + 4);
//     if(j == k)
//     printf("The twoo pointers point to the same location.\n");
//     else
//     printf("The two pointers point to different location.\n");

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int num[] = {24, 34, 12, 44, 56,17};
//     int i, *j;
//     j = &num[0];
//     for(i=0;i<=5;i++){
//         printf("Address = %u element = %d\n", j, *j);
//         j++;
//     }
//     return 0;
// }

// #include <stdio.h>
// void display1(int*, int);
// void display2(int[], int);
// int main(){
//     int num[] = {24, 34, 12, 44, 56, 17};
//     display1(&num[0], 6);
//     display2(&num[0], 6);
//     return 0;
// }
// void display1(int *j,int n){
//     int i; 
//     for(i=0;i<=n;i++)

// {
//     printf("element = %d\n", *j);
//     j++;
// }

// }
// void display2(int j[], int n){
//     int i;
//     for(i=0;i<=n;i++)
//     printf("element = %d\n", j[i]);
// }

// #include <stdio.h>

// int main(){
//     int num[] = {12, 4, 5, 1, 9, 13, 11, 19, 54, 34};
//     int i, t;
//     for( i=0;i<=9;i= i+2){
//         t=num[i];
//         num[i] = num[i + 1];
//         num[i + 1] = t;
//     }
//     for(i=0;i<=9;i++)
//     printf("%d\n", num[i]);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[25];
//     int i;
//     int pos=0,neg=0,ev=0,odd=0;
//     printf("Enter 25 numbers: ");
//     for(i=0;i<25;i++){
//         scanf("%d", &arr[i]);
//     }
//     for(i=0;i<25;i++){
//         if(arr[i]>0){
//             pos++;
//         // printf("Positive");
//         }
//         else if(arr[i]<0){
//             neg++;
//         // printf("Negative");
//         }
//         if(arr[i]%2==0){
//             ev++;
//         // printf("Even");
//         }
//         else if(arr[i] %2!=0){
//             odd++;
//         // printf("Odd");
//         }
//     }
//     printf("Positive= %d\n", pos);
//     printf("Negative= %d\n", neg);
//     printf("Even= %d\n", ev);
//     printf("Odd= %d\n", odd);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr1[5], arr2[5], i, j;
//     printf("Enter: ");
//     for(i=0;i<5;i++){
//         scanf("%d", &arr1[i]);
//     }for(i=0,j=4;i<=4;i++,j--){
//         arr2[j] = arr1[i];
//     }
//     for(i=0;i<5;i++){
//         printf("%d ", arr2[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int arr[10], i;
//     printf("nter: ");
//     for(i=0;i<10;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<4;i++){
//         printf("arr[%d] and arr[%d] are",i, 10-(i+1));
//         if (arr[i] == arr[10-(i+1)])
//         printf("Equal\n");
//         else
//         printf("Unequal\n");
//     }
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int arr[10],i,n;
//     printf("Enter: ");
//     for(i=0;i<10;i++){
//         scanf("%d", &arr[i]);
//     }
//     n=*arr;
//     for(i=0;i<10;i++){
//         if(*(arr+i)<n)
//             n=*(arr+i);
//     }
//     printf("%d", n);
//     return 0;
// }

