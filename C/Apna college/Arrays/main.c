// #include<stdio.h>

// int main() {
//     // int marks1 = 97;
//     // int marks2 = 98;
//     // int marks3 = 99; 

//     int marks[3];// size se bada nahi likhna jo ki 3 se bada nhi jana

//     printf("Enter phy: ");
//     scanf("%d", &marks[0]);
    
//     printf("Enter chem: ");
//     scanf("%d", &marks[1]);
    
//     printf("Enter math: ");
//     scanf("%d", &marks[2]);

//     printf("phy = %d, chem = %d, math = %d" ,marks[0], marks[1], marks[2]);

//     // int marks[] = {97, 98, 89};
//     return 0;
// }

// wap to enter 3 items and print their final cost
// #include<stdio.h>

// int main(){
//     float price[3];
//     printf("Enter the first: ");
//     scanf("%f", &price[0]);
    
//     printf("Enter the second: ");
//     scanf("%f", &price[1]);
    
//     printf("Enter the third: ");
//     scanf("%f", &price[2]);

//     printf("Final cost = %f", price[0] + price[1] + price[2]+(price[0] + price[1] + price[2])*0.18);
    
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     float price[3];
//     printf("Enter the first: ");
//     scanf("%f", &price[0]);
    
//     printf("Enter the second: ");
//     scanf("%f", &price[1]);
    
//     printf("Enter the third: ");
//     scanf("%f", &price[2]);

//     printf("Total price 1: %f\n", price[0] + (0.18*price[0]));
//     printf("Total price 1: %f\n", price[1] + (0.18*price[1]));
//     printf("Total price 1: %f\n", price[2] + (0.18*price[2]));
    
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int age = 22;
//     int *ptr = &age;

//     printf("ptr = %u\n", ptr);
//     ptr++;
//     printf("ptr = %u\n", ptr);
//     ptr--;
//     printf("ptr = %u\n", ptr);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int age = 56; 
//     int _age = 67;
//     int *ptr = &age;
//     int *_ptr = &_age;

//     printf("%u\n", ptr);
//     printf("%u\n", _ptr);
//     printf("Difference = %u\n", ptr-_ptr);
//     _ptr = &age;
//     printf("%u\n", _ptr);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int age = 22; 
//     char _age = 67;
//     int *ptr = &age;
//     int *_ptr = &_age;

//     printf("%u\n", ptr);
//     printf("%u\n", _ptr);
//     printf("Difference = %u\n", ptr-_ptr);
//     _ptr = &age;
//     printf("%u\n", _ptr);
//     return 0;
// }

#include<stdio.h>


int main() {
    int aadhar[5];

    int *ptr = &aadhar[0];
    for(int i=0; i<10; i++) {
        printf("%d index : ", i);
        scanf("%d", (ptr + i));
    }
    for(int i=0; i<10; i++) {
        printf("%d index = %d\n", i, *(ptr + i), aadhar[i]); 
    }
    return 0;
}