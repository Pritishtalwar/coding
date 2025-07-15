// and
/*
*; 1 only when both no are 1
*/

// #include <stdio.h>

// int main(){
//     int a, b;
//     printf("Enter: ");
//     scanf("%d %d", &a, &b);
//     printf("%d", a&b);

//     return 0;
// }

// or
/*
+; 0 only both are 0
*/

// #include <stdio.h>

// int main(){
//     int a=7, b=4;
//     printf("%d", a|b);
//     return 0;
// }

/* nor operator 
~
// */
// #include <stdio.h>

// int main(){
//     int a=7;
//     printf("%d", ~a);
//     return 0;
// }

/*
left shift operator
when bits shifted left then trailing positions are filled with zero
*/
// left shift is  equivalent to multiplication by 2^rightOperand.

// #include <stdio.h>

// int main(){
//     int  a=3;
//     // int n;
// ek ek position left shift krega.
// 0000 0011= 0000 0110 
//     // printf("Enter: ");
//     // scanf("%d", &n);
//     printf("%d" , a<<1);
//     return 0;

// }


// #include <stdio.h>

// int main(){
//     int a, b;
//     printf("Enter a&b: ");
//     scanf("%d %d", &a, &b);
//     printf("%d", a<<b);
//     return 0;
// }

/*
right shift operator 
>>
when bits are shifted right then leading positions are filled with zeros
right shift is equivalent to division by 2^right operand
*/

// #include <stdio.h>

// int main(){
//     // var = 3 
//     /*
//     3=0000 0011= 0000 001 
//     */
//     int n=3;
//     printf("%d", n>>1);
    
//     return 0;
// }


/* 
XOR OPERATOR
Inclusive or operator either a is 1 or b is 1 or both are then the output is 1
Inclusing both
0 0 0
0 1 1
1 0 1
1 1 1

Exclusive or operator either a is 1 or b is 1 then the output is 1 but when both a and b are 1 then output is 0
Excluding both
0 0 0
0 1 1
1 0 1
1 1 0

Result of XOR is 1 when two bits are different otherwise the result is 0.
0 0 0
0 1 1
1 0 1
1 1 0

    0 1 1 1
    0 1 0 0
==  0 0 1 1
*/

// #include <stdio.h>

// int main(){
//     int a, b;
//     printf("Enter: ");
//     scanf("%d %d", &a, &b);
//     printf("%d", a^b); 
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a, b;
//     printf("Enter two no: ");
//     scanf("%d %d", &a, &b);
//     printf("a=%d\n b=%d\n",a, b );
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     printf("a=%d\n b=%d\n",a, b );

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int num, pos;
//     printf("Enter: ");
//     scanf("%d", &num);
//     for(pos = 0;(num & 1) == 0; pos++){
//         num >>=1;
//     }
//     printf("%d", pos);
//     return 0;
// }

#include <stdio.h>

int main(){
    int n, count;
    printf("Enter: ");
    scanf("%d", &n);
    for(count=0; (n&1) == 0; count++){
        n = n>>1;
    }
    printf("%d\n", count);
    return 0;
}