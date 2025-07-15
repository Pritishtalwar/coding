// #include<stdio.h>
// int max(int a, int b, int c, int d) {
//     int max = a;
//     if (b>max){
//         max = b;
//     }
//     if (c>max){
//         max = c;
//     }
//     if (d>max){
//         max = d;
//     }
//     return max;
// }

// int main() {
//     int a, b, c, d;
//     printf("Enter four numbers: ");
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     printf("%d\n", max(a, b, c, d));
// }

// #include <stdio.h>

// int main(){
//     int time=20;
//     // method 1
// //     if (time<18){
// //         printf("Good day.");
// //     } else{
// //         printf("Good evening.");
// // }
// // method 2
//     (time <18) ? printf("Good day.") : printf("Good evening.");
//     return 0;
// }   
// #include <stdio.h>

// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     num>=0 ?printf("Positive") : printf("Negative");
//     return 0;
// }

// #include <stdio.h>

// int main() {
//   int day = 4;
  
//   switch (day) {
//     case 1:
//       printf("Monday");
//       break;
//     case 2:
//       printf("Tuesday");
//       break;
//     case 3:
//       printf("Wednesday");
//       break;
//     case 4:
//       printf("Thursday");
//       break;
//     case 5:
//       printf("Friday");
//       break;
//     case 6:
//       printf("Saturday");
//       break;
//     case 7:
//       printf("Sunday");
//       break;
//   }
    
//   return 0;
// }

// #include <stdio.h>

// int main(){
//     int i;
//     for (i=0; i<5; i++) {
//         printf("%d\n", i);
//     }
//     return 0;
// }

#include <stdio.h>

int main(){
    for (int i=0; i<5; i++) {
        printf("Outer: %d\n", i);
        for (int j=0; j<5; j++) {
            printf("Inner: %d\n", j);
        }
    }
    return 0;
}