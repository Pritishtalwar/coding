// // * gives value at address
// // & gives address of the variable 
// // #include <stdio.h>

// // int main(){   
// //     int x;
// //     int *ptr;
    
// //     ptr = &x;//x is the address of ptr
// //     *ptr = 0;//value at ptr = 0
    
// //     printf("x = %d\n", x);
// //     printf("*ptr = %d\n", *ptr);
    
// //     *ptr += 5;
// //     printf(" x = %d\n", x);
// //     printf(" *ptr = %d\n", *ptr);
    
// //     (*ptr)++;
// //     printf(" x = %d\n", x);
// //     printf(" *ptr = %d\n", ptr);
// //     return 0;
// // }

// // pointer to pointer is a variabke which stores memory address of another pointer
// #include <stdio.h>

// int main(){
//     float price = 100;
//     float *ptr = &price;
//     float **pptr = &ptr;


//     return 0;
// }

#include <stdio.h>

int main(){
    
    int i=3;
    printf("%u\n", *(&i));
    return 0;
}