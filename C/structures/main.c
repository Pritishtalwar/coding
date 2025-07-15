// //roll no is long long int kyuki normal mein bit overflow ho jata hai
// #include<stdio.h>
// #include<string.h>

// struct student {
//     char name[200];
//     long long int roll_no;
//     float cgpa;
// };

// int main(){
//     struct student s1;
//     strcpy(s1.name, "John Doe");
//     s1.roll_no = 2410991593;
//     s1.cgpa = 8.2;

//     printf("Name: %s\n", s1.name);
//     printf("Roll No: %lld\n", s1.roll_no);
//     printf("CGPA: %.2f\n", s1.cgpa);
//     return 0;
// }

//wap to store data of 3 students
// #include <stdio.h>
// #include <string.h>

// struct student {
//     char name[200];
//     long long int roll;
//     float cgpa;
// };

// int main(){
//     struct student s1;
//     strcpy(s1.name, "john");
//     s1.roll = 2410991594;
//     s1.cgpa = 9.9;

//     printf("Details of student 1:\n");
//     printf("\n");
//     printf("Name: %s\n", s1.name);
//     printf("Roll No: %lld\n", s1.roll);
//     printf("CGPA: %.2f\n", s1.cgpa);
    
//     struct student s2;
//     strcpy(s2.name, "raghav");
//     s2.roll = 2411998191;
//     s2.cgpa = 9.8;
    
//     printf("Details of student 2:\n");
//     printf("\n");
//     printf("Name: %s\n", s2.name);
//     printf("Roll No: %lld\n", s2.roll);
//     printf("CGPA: %.2f\n", s2.cgpa);
    
//     struct student s3;
//     strcpy(s3.name, "jjsjsav");
//     s3.roll = 2411992321;
//     s3.cgpa = 9.8;
    
//     printf("Details of student 3:\n");
//     printf("\n");
//     printf("Name: %s\n", s3.name);
//     printf("Roll No: %lld\n", s3.roll);
//     printf("CGPA: %.2f\n", s3.cgpa);
    
//     return 0;
// }


// benefits of structures
/*
1. saves us from creating too many variables
2. good data management && organization
*/

/*
Array of structures

pehle data type structure ka naam fir quantity just like array

struct student ECE[100];
struct student COE[100];
struct student IT[100];
*/

// #include <stdio.h>
// #include <string.h>

// struct  student {
//     int roll;
//     float cgpa;
//     char name[200];
// };

// int main(){
//     struct student ece[100];
//     ece[0].roll = 1664;
//     ece[0].cgpa = 9.8;
//     strcpy(ece[0].name, "John Doe");  
//     printf("Roll No: %d\n", ece[0].roll);
//     printf("CGPA: %.2f\n", ece[0].cgpa);
//     printf("Name: %s\n", ece[0].name);
//     printf("\n");
    
//     struct student coe[100];
//     coe[0].roll = 1665;
//     coe[0].cgpa = 9.7;
//     strcpy(coe[0].name, "Jane Doe");
//     printf("Roll No: %d\n", coe[0].roll);
//     printf("CGPA: %.2f\n", coe[0].cgpa);
//     printf("Name: %s\n", coe[0].name);
//     printf("\n");

//     struct student it[100];
//     it[0].roll = 1666;
//     it[0].cgpa = 9.6;
//     strcpy(it[0].name, "Jim Doe");  
//     printf("Roll No: %d\n", it[0].roll);
//     printf("CGPA: %.2f\n", it[0].cgpa);
//     printf("Name: %s\n", it[0].name);
//     return 0;
// }

// kathe krenge;
// #include <stdio.h>

// struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// };

// int main(){
//     struct student s1 = {1091, 9.8, "John Doe"};
//     printf("Roll No: %d\n", s1.roll);
//     return 0;
// }

/*
pointers to structures*
struct stuent s1;
struct student *ptr;
ptr = &s1;
*/


// #include <stdio.h>

// struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// };

// int main(){
//     struct student s1 = {1999, 9.2, "shjsjsk"};
//     printf("Roll No: %d\n", s1.roll);
    
//     struct  student *ptr = &s1; 
//     printf("Roll No: %d\n", (*ptr).roll);
//     printf("Roll No: %d\n", ptr->roll);
//     printf("CGPA: %f\n", ptr->cgpa);
//     printf("Name: %s\n", ptr->name);
//     // (*ptr).roll == ptr->roll
//     return 0;
// }

/*
passing structure to function
void printInfo(struct student s1);
*/

// #include <stdio.h>

// struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// };

// void printInfo(struct student s1);

// int main(){
//     struct student s1 = {1992, 9.8, "John Doe"};
//     s1.roll = 1555;
//     printInfo(s1);
//     printf("\n");
//     printf("Roll No: %d\n", s1.roll);
//     return 0;
// }

// void printInfo(struct student s1){
//     printf("Roll No: %d\n", s1.roll);
//     printf("CGPA: %f\n", s1.cgpa);
//     printf("Name: %s\n", s1.name);
//     printf("\n");
//     s1.roll = 1603;
//     printf("Roll No: %d\n", s1.roll);
// }

// sturcturs are call by value any change done in function will not be reflected in main function

/*
typedef Keyword

used to create an alias (nickname) for a data type

typefef  struct ComputerEngineeringStudent{
int roll;
float cgpa;
char name[100];
} coe;

coe student1;
*/

// #include <stdio.h>
// #include <string.h>

// typedef struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// } stu;

// typedef struct ComputerEngineeringStudent{
//     int roll;
//     float cgpa;
//     char name[100];
// } coe;

// int main(){
//     coe s1;
//     s1.roll = 1999;
//     s1.cgpa = 9.8;
//     strcpy(s1.name, "John Doe");
//     printf("Roll No: %d\n", s1.roll);
//     printf("CGPA: %f\n", s1.cgpa);
//     printf("Name: %s\n", s1.name);
//     return 0;
// }


// wap Enter Address(house no, block, city, state of 5 people)

// #include <stdio.h>
// #include <string.h>

// struct people{
//     int house;
//     char block[100];
//     char city[200];
//     char state[200];
// };

// int main(){
//     struct people p1, p2, p3, p4, p5;
    
//     p1.house;
//     printf("Enter house no of p1: ");
//     scanf("%d", &p1.house);
//     p1.block;
//     printf("Enter block of p1: ");
//     scanf("%s", p1.block);
//     p1.city;
//     printf("Enter city of p1: ");
//     scanf("%s", p1.city);
//     p1.state;
//     printf("Enter state of p1: ");
//     scanf("%s", p1.state);

    
//     p2.house;
//     printf("Enter house no of p2: ");
//     scanf("%d", &p2.house);
//     p2.block;
//     printf("Enter block of p2: ");
//     scanf("%s", p2.block);
//     p2.city;
//     printf("Enter city of p2: ");
//     scanf("%s", p2.city);
//     p2.state;
//     printf("Enter state of p2: ");
//     scanf("%s", p2.state);

//     p3.house;
//     printf("Enter house no of p3: ");
//     scanf("%d", &p3.house);
//     p3.block;
//     printf("Enter block of p3: ");
//     scanf("%s", p3.block);
//     p3.city;
//     printf("Enter city of p3: ");
//     scanf("%s", p3.city);
//     p3.state;
//     printf("Enter state of p3: ");
//     scanf("%s", p3.state);

//     p4.house;
//     printf("Enter house no of p4: ");
//     scanf("%d", &p4.house);
//     p4.block;
//     printf("Enter block of p4: ");
//     scanf("%s", p4.block);
//     p4.city;
//     printf("Enter city of p4: ");
//     scanf("%s", p4.city);
//     p4.state;
//     printf("Enter state of p4: ");
//     scanf("%s", p4.state);

//     p5.house;
//     printf("Enter house no of p5: ");
//     scanf("%d", &p5.house);
//     p5.block;
//     printf("Enter block of p5: ");
//     scanf("%s", p5.block);
//     p5.city;
//     printf("Enter city of p5: ");
//     scanf("%s", p5.city);
//     p5.state;
//     printf("Enter state of p5: ");
//     scanf("%s", p5.state);


//     printf("\n");
//     printf("\n");
    
//     printf("Details of p1:\n");
//     printf("House No: %d\n", p1.house);
//     printf("Block: %s\n", p1.block);    
//     printf("City: %s\n", p1.city);
//     printf("State: %s\n", p1.state);
//     printf("\n");
//     printf("Details of p2:\n");
//     printf("House No: %d\n", p2.house);
//     printf("Block: %s\n", p2.block);    
//     printf("City: %s\n", p2.city);
//     printf("State: %s\n", p2.state);
//     printf("\n");
//     printf("Details of p3:\n");
//     printf("House No: %d\n", p3.house);
//     printf("Block: %s\n", p3.block);    
//     printf("City: %s\n", p3.city);
//     printf("State: %s\n", p3.state);
//     printf("\n");
//     printf("Details of p4:\n");
//     printf("House No: %d\n", p4.house);
//     printf("Block: %s\n", p4.block);    
//     printf("City: %s\n", p4.city);
//     printf("State: %s\n", p4.state);
//     printf("\n");
//     printf("Details of p5:\n");
//     printf("House No: %d\n", p5.house);
//     printf("Block: %s\n", p5.block);    
//     printf("City: %s\n", p5.city);
//     printf("State: %s\n", p5.state);

//     return 0;
// } 

/*
Vectors

they are geometrical entities that have both a magnitude and a direction
2D vectors both x and y coordinates
3D vectors x, y and z coordinates
4D vectors x, y, z and w coordinates
4D vectors are used in computer graphics to represent points in 3D space with an additional component for perspective


*/

// create a structure to store vectors. The make a function to add two vectors.

// #include <stdio.h>

// struct vector{
//     int x;
//     int y;
// };  

// void sum(struct vector v1, struct vector v2, struct vector v3){
//     v3.x = v1.x + v2.x;
//     v3.y = v1.y + v2.y;
//     printf("Sum of Vectors: (%d, %d)\n", v3.x, v3.y);
//     return 0;
// }

// int main(){
//     struct vector v1 = {5, 10};
//     struct vector v2 = {3, 7};
//     struct vector v3 = {0};
//     sum(v1, v2, v3);


//     // we have to make a function to add two vectors
//     // struct vector v3;
//     // v3.x = v1.x + v2.x;

//     // v3.y = v1.y + v2.y;
//     // printf("Vector 1: (%d, %d)\n", v1.x, v1.y);
//     // printf("Vector 2: (%d, %d)\n", v2.x, v2.y);
//     // printf("Vector 3: (%d, %d)\n", v3.x, v3.y);
//     // printf("Sum of Vectors: (%d, %d)\n", v1.x + v2.x, v1.y + v2.y);
//     // printf("Sum of Vectors: (%d, %d)\n", v3.x, v3.y);
    
//     return 0;
// }

// Create a structure to store compolex numbers. (use arrow operator)

// #include <stdio.h>
// #include <math.h>

// struct complex{
//     int real;
//     int imag;
// };

// int main(){
//     struct complex n1 = {6, 8};
//     struct complex *ptr= &n1;
//     printf("Real part = %d\n", ptr->real);
//     printf("Imaginary part = %d\n", ptr->imag);
     
//     printf("Magnitude = %f\n", sqrt(ptr->real * ptr->real + ptr->imag * ptr->imag));
//     return 0;
// }

// You have to store the marks of 30 students in class.
// What will you use?

// a. array of 10 floats  ✅ use dono kr sakte but smart approach wil be to use array of 30 floats
// b. structure

// make a structure to store bank acciount information of a customer of ABC Bank. Also, make an alias for it

// #include <stdio.h>

// typedef struct Bank {
//     int account_no;
//     char name[100];
// } acc;

// int main(){
//     acc a1 = {123, "John Doe"};
//     acc a2 = {124, "raghu sh"};
//     acc a3 = {125, "kdmd cm"};
//     printf("Account No of 1: %d\n", a1.account_no);
//     printf("Name of 1: %s\n", a1.name);
//     printf("Account No of 2: %d\n", a2.account_no);
//     printf("Name of 2: %s\n", a2.name);
//     printf("Account No of 3: %d\n", a3.account_no);
//     printf("Name of 3: %s\n", a3.name);

//     return 0;
// }

/*
Homework set

Make a system that can store information of all students, teachers & staff of your college in the form of structures.

You can also make them into a c Project with other functionalities like cgpa calculation of students, storing attendence etc.accumulate_minimal_n

*/

// #include <stdio.h>
// #include <string.h>

// #define MAX 100

// struct students{
//     char name[100];
//     int roll;
//     int attendence;
//     float cgpa;
// };

// struct teachers{
//     char name[100];
//     int id;
//     int attendence;
//     char subject[100];
// };

// struct staff {
//     char name[100];
//     int id;
//     int attendence;
//     char department[100];
// };

// struct Student students[Max];
// struct Teacher teachers[Max];
// struct Staff staffMembers[Max];

// int studentCount = 0, teacherCount = 0, staffCount = 0;

// void addStudent() {
//     if(StudentCount >= MAX) {
//         printf("Student list is full.\n");
//         return;
//     }
//     printf("Enter student name: ");
// }
// int main(){
    
//     return 0;
// }

#include <stdio.h>

struct student{
    char name[100];
    int roll;
    float marks[3];
    float avg;
};

int main(){
    int n;
    scanf("%d", &n);
    struct student s[n];
    for(int i=0;i<n;i++){
        scanf("%s  %d", s[i].name, &s[i].roll);
        for(int j=0;j<3;j++){
            scanf("%f", &s[i].marks[j]);
        }
    }  
    for(int i=0;i<n;i++){
        float total = 0;
        for(int j=0;j<3;j++){
            total += s[i].marks[j];
        }
        s[i].avg = total / 3;
    }
    for(int i=0;i<n;i++){
        printf("Name: %s, Roll: %d, Average Marks: %.2f\n", s[i].name, s[i].roll, s[i].avg);
    }
    return 0;
}