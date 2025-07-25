// #include<iostream>
// #include<string>
// using namespace std;

// class Teacher{
//     //properties / attributes
// private:
//     double salary;
// public:
//     string name;
//     string dept;
//     string subject;
//     //non paramerised
//     // Teacher() {
//     //     dept = "Computer Science\n";
//     // }

//     //parameterised
//     Teacher(string name, string dept, string subject, double salary) {
//         this -> name = name;
//         this -> dept = dept;
//         this -> subject = subject;
//         this -> salary = salary;
//     }
    
//     // copy constructor
//     Teacher(Teacher &orgbj) {
//         cout << "I am custom copy constructor." << endl;
//         this -> name = orgbj.name;
//         this -> dept = orgbj.dept;
//         this -> subject = orgbj.subject;
//         this -> salary = orgbj.salary;
//     }

//     //methods / member functions
//     void changeDept(string newDept) {
//         dept = newDept;
//     }

//     void getInfo() {
//         cout << "name == " << name << endl;
//         cout << "subject == " << subject << endl;
//         cout << "dept == " << dept << endl;
//         cout << "salary == " << salary << endl;
//     }

//     // //setter
//     // void setSalary(double s){
//     //     salary = s;
//     // }
//     // //getter
//     // double getSalary(){
//     //     return salary;
//     // }
// };

// class subjects{
// public:
// };

// int main() {
//     Teacher t1("Shradha", "CSE", "C++", 25000);
//     // Teacher t2;
//     t1.getInfo();

//     cout << endl << "Next" << endl << endl;

//     // Teacher t2(t1); //default copy constructor -invoke
//     Teacher t2(t1); //custom copy constructor -invoke
//     t2.getInfo();
//     // // cin >> t1.name;
//     // t1.name = "rahul";
//     // t1.subjects = "C++";
//     // // t1.dept = "CSE";
//     // t1.setSalary(25000); 

//     // // cout << t1.name << endl;  
//     // cout << t1.dept<< endl;  
//     // // cout << t1.getSalary() << endl; 
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// class Student {
// public:
//     string name;
//     double *cgpaPtr;
    
//     Student(string name, double cgpa){
//         this -> name = name;
//         cgpaPtr = new double;
//         *cgpaPtr = cgpa;
//     }

//     Student(Student &obj) {
//         this -> name = obj.name;
//         *cgpaPtr = obj.cgpaPtr;
//     }

//     void getInfo(){
//         cout << "name : " << name << endl;
//         cout << "cgpa : " << *cgpaPtr << endl;
//     }
// };

// int main() {
//     Student s1("rahul kumar", 9.5);
//     Student s2(s1);
//     s2.getInfo();
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// class Student {
//     public:
//         string name;
//         double* cgpaPtr;

//         Student(string name, double cgpa) {
//             this->name = name;
//             cgpaPtr = new double;
//             *cgpaPtr = cgpa;
//         }

//         //destructor
//         ~Student() {
//             cout << "Hi, I delete everything\n";
//             delete cgpaPtr;//memory heap kahi aari memory bnake chode di uss tarf koi point nhi  kr raha and voh memory waste ho gyi
//         }

//         void getInfo() {
//             cout << "name : " << name << endl;
//             cout << "cgpa : " << *cgpaPtr << endl;
//         }
// };

// int main(){
//     Student s1("Rahul ", 9);
//     s1.getInfo();
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// class Person{
//     public:
//         string name;
//         int age;

//         Person(string name, int age){
//             this->name = name;
//             this->age = age;
//     }
// };

// class student : public Person{
// public:
//     int rollno;

//     student(string name, int age, int rollno) : Person(name, age){
//         this->rollno = rollno;
//     }

//     void getInfo() {
//         cout << "Name " << name << endl; 
//         cout << "age " << age << endl; 
//         cout << "rollno " <<rollno  << endl; 
//     }
// };

// int main(){
//     student s1("Rahul yadav", 21,93);
//     s1.getInfo();
//     cout << s1.name;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// class person{
// public:
//     string name;
//     int roll;
//     person(string name, int roll){
//         this->name = name;
//         this->roll = roll;
//     }
// };

// class student : public person{
//     public:
//         int age;
//     student(string name, int roll, int age) : person(name, roll){
//         this->age = age;
//     }
// };

// class grad : public student{
//     public:
//         string research;
//     grad(string name, int roll, int age, string research) : student(name, roll, age){
//         this->research = research;
//     }
//         void getinfo(){
//             cout << "Name " << name << endl;
//             cout << "Roll " << roll << endl;
//             cout << "age " << age << endl;
//             cout << "research " << research << endl;

//         }
// };

// int main(){
//     grad g1("Tony", 25, 1,"ml");
//     g1.getinfo();
// }

// multi inheritance 
// #include<iostream>
// #include<string>
// using namespace std;

// class student{
//     public:
//         string name;
//         int rollno;
//     student(string name, int rollno){
//         this->name = name;
//         this->rollno = rollno;
//     }
// };

// class teacher{
//     public:
//         string subject;
//         double salary;
//     teacher(string subject, double salary){
//         this->subject = subject;
//         this->salary = salary;
//     }
// };

// class TA : public student, public teacher{
//     public:
//     TA(string name, int rollno, string subject, double salary) : student(name, rollno), teacher(subject, salary){}
    
//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Roll No: " << rollno << endl;
//         cout << "Subject: " << subject << endl;
//         cout << "Salary: " << salary << endl;
//     }

// };

// int main() {
//     TA t1("Rahul", 249, "Maths", 50000);
//     t1.display();
// }

//hierarchy
// #include<iostream>
// #include<string>
// using namespace std;

// class Person {
//     public:
//         string name;
//         int age;
// };

// class student : public Person{
//     public:
//         int rollno;
// };

// class Teacher : public Person{
//     public:    
//         string subject;
// };


//hybrid
// sabka sanjha


//Polymorphism

// #include<iostream>
// #include<string>
// using namespace std;

// class Print{
//     public:
//         void show(int x) {
//             cout << "int : " << x << endl;
//         }

//         void show(char ch) {
//             cout << "char : " << ch << endl;
//         }
// };

// int main() {
//     Print p1;
//     p1.show('lun');
//     return 0;
// }

//Abstraction
#include<iostream>
#include<string>
using namespace std;

class Shape{
    virtual void draw() = 0;
};

class circle : public Shape{
    public:
        void draw() {
            cout << "Drawing a circle\n";
        }
};

int main() {
    Shape s1;
    circle c1;
    return 0;
}