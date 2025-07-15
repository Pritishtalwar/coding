// macros, global variables, inline functions, default arguments in C++
// This program calculates the area of a circle using a macro for PI,

// #include<iostream>
// using namespace std;

// #define PI 3.14

// int main() {

//     int r = 5;

//     double area = PI * r * r;
//     cout << "Area of circle with radius " << r << " is: " << area << endl;
// }

// #inline function

#include <iostream>
using namespace std;

inline int getMax(int &a, int &b) {
    return (a > b) ? a : b;
}

int main() {

    int a = 1, b = 2;
    int ans = 0;

    ans = getMax(a, b);
    cout << ans << endl;
    a = a + 3;
    b = b + 1;

    ans = getMax(a, b);
    cout << ans << endl;
}