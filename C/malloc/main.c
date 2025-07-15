// MALLOC MEIN GARBAAGE VALUE AATA HAI AUR CALLOC MEIN 0 SE INITIALIZE HOTA HAI
// malloc aur calloc dono hi dynamic memory allocation ke liye use hote hain
#include <stdio.h>
#include <stdlib.h>

int main(){
    //use of malloc jitna size likha hoga utna hi memory allocate karegaagr input 3 ka aur output mein zaada hora then ek garbage value aa jwgi
   
    /*
    int* ptr;;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    ptr = (int*)malloc(3*sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter the value of %d element: ", i+1);
        scanf("%d", &ptr[i]);
    }
    
    for(int i=0; i<n;i++){
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }
    */

   // use of calloc 
    int* ptr;;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    ptr = (int*)calloc(n, sizeof(int)); // calloc mein jitna size likha hoga utna hi memory allocate karega aur jitne bhi elements hain un sabko 0 se initialize karega
    for(int i=0;i<n;i++){
            printf("Enter the value of %d element: ", i+1);
            scanf("%d", &ptr[i]);
        }
        for(int i=0; i<n;i++){
            printf("The new value at %d element is: %d\n", i, ptr[i]);
        }


    //use f realloc

    // int* ptr;
    // int n;
    // printf("Enter the number of elements: ");
    // scanf("%d", &n);
    printf("Enter the size of new array you want to create: ");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int)); // realloc mein jitna size likha hoga utna hi memory allocate karega aur jitne bhi elements hain un sabko 0 se initialize karega

    for(int i=0;i<n;i++){
            printf("Enter the value of %d element: ", i+1);
            scanf("%d", &ptr[i]);
        }
        for(int i=0; i<n;i++){
            printf("The value of %d element is: %d\n", i, ptr[i]);
        }

    free(ptr); // free function se memory ko free karte hain jo bhi memory allocate kiya hai usko free karne ke liye use hota hai
    return 0;
}