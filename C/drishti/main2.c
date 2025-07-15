// #include <stdio.h>

// int main() {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b); 
//     printf("%d\n", a|b); // or
//     printf("%d\n", a&b); // and
//     printf("%d\n", a^b); // xor
//     printf("%d\n", a<<b); // left shift
//     return 0;
// }

#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap\n a=%d, b=%d\n", a, b);
    // int a= b;
    // int b= a;
    printf("after swap\n a=%d, b=%d\n",  b, a);
    return 0;
}