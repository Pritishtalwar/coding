// #include <stdio.h>

// int main(){
//     printf("Hello World");
//     printf("n\n \n");
//     printf("Hello World\n");
//     return 0;
// }
// nn


// nn

// #include <stdio.h>

// int main(){
    
//     return 0;
// }

//variables literals
// #include <stdio.h>

// int main(){
//     int x;
//     x=5;
//     x=8;
//     printf("%d", x);
//     return 0;
// }

//arithemetic operatos
// #include <stdio.h>

// int main(){
//     int x=5;
//     int y=2;
//     printf("%d\n", x+y);
//     printf("%d\n", x-y);
//     printf("%d\n", x*y);
//     printf("%d\n", x/y);
//     printf("%d\n", x%y);
//     return 0;
// }

//float data type
// #include <stdio.h>

// int main(){
//     float x, y;
//     printf("%.2f", 3.14/3.54 );
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     float r;
//     printf("Enter the radius of the sphere: ");
//     scanf("%f", &r);
//     // float v=4*3  
//     printf("%f", 4*3.14*r*r*r/3);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int r;
//     printf("Enter the radius of the sphere: ");
//     scanf("%d", &r);
//     printf("Area of circle is %.2f\n", 3.14*r*r);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     float x1=54;
//     float x2=99;
//     float x3=89;
//     float x4=55;
//     float x5=94;
//     printf("%.2f\n", (x1+x2+x3+x4+x5)/5);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int p,r,t;
//     printf("Enter the principal amount: ");
//     scanf("%d", &p);
//     printf("Enter the rate of interest: ");
//     scanf("%d", &r);
//     printf("Enter the time period: ");
//     scanf("%d", &t);
//     printf("Simple interest is %d", p*r*t/100);   
//     return 0;
// } 
// #include <stdio.h>

// int main(){
//     int p, q;
//     printf("Enter the value of p and q: ");
//     scanf("%d %d", &p, &q);
//     printf("p = %d  q = %d", p, q);
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int a, b;
//     printf("Enter the value of a and b: ");
//     scanf("%d %d", &a, &b);
//     if(a>b){
//         printf("%d", a/b);
//     } else{
//         printf("b is greater than a");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     float x=5.7;
//     printf("%f\n", x);
//     int y = x;
//     printf("%d\n", y);
//     printf("%f\n", (x-y));
//     return 0;
// }

//hierarchy operators
//left to right ha rule 
/*
2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8
yeh solve krenge
(2*3)/4 = 6/4= 1 
4/4 = 1
8 - 2 = 6
5/8 = 0
1+1+6-2+0 = 8
preferenece order left to right ha 
*/
// #include <stdio.h>

// int main(){
//     printf("%d", 2*3/4+4/4+8-2+5/8);
//     return 0;
// }

// 0
// 2
// 0
// 2

/*
ques
int main() {
    int i = 2, j = 3, k, l;
    float a, b;
    k = i / j * j;
    l = j / i * i;
    a = i / j * j;
    b = j / i * i;
    printf("%d %d %f %f", k, l, a, b);
    }
    */
// #include <stdio.h>
   
// int main(){
//     int i = 2, j = 3, k, l;
//     float a, b;
//     k = i / j * j;
//     l = j / i * i;
//     a = i / j * j;
//     b = j / i * i;
//     printf("%d %d %f %f", k, l, a, b);
        
       
//     return 0;
// }

// char data type
// #include <stdio.h>

// int main(){
//     char ch = '#';
//     printf("%c", ch);
//     return 0;
// }


// ASCII VALUES
/*
A-Z = 65-90
!= 33
@=64
#=35
$=36
%=37
^=94
&=38
*=42
(=40
)=41

a-z = 97-122 
// */
// #include <stdio.h>

// int main(){
//     char c = 'a';
//     char h = 'A';
//     printf("%d\n", c);
//     printf("%d\n", h);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     short a=30*1000+2768;
//     printf("%d", a);
//     return 0;
// }

/*
int x = 3;
float y= 3.14;
char ch = 'A';
short z; short ke chhota dabba ha;
short bhi int ki tarah hi hota ha yeh sirf -32768 to +32767 tak ki value store kr skta ha. isska size 2 bytes hota ha.
long x; long int ki tarah hota ha yeh 4 bytes ka hota ha. issme 2^31 se -2^31-1 tak ki value store kr skte ha.
*/

#include <stdio.h>

int main(){
    printf("%d", 4 + 2 % - 8);
    return 0;
}