// #include<iostream>
// #include<cstring>
// using namespace std;
// class employee{
//   private:
//   int sal;
//   public:
//   char name[200];
//   int gpa;
//   void setSal(int s){
//       sal = s;
//   }
//   int getSal(){
//       return sal;
//   }
// }; 
// int main(){
//     employee e1;
//     e1.setSal(80000);
//     strcpy(e1.name, "Prat");
//     e1.gpa = 10;
//     cout << e1.getSal()<< endl;
//     cout << e1.name << endl;
// }
// #include<iostream>
// using namespace std;

// class Hero {
//     private:
//     int health;

//     public:
//     char level;

//     Hero(){
//         cout << "Simple constructor called" << endl;
//     }
    
//     // Parameterized constructor
//     Hero(int health, char level) {
//         this->health = health;
//         this->level = level;
//     }
    
//     void print(){
//         cout << "Health: " << health << " Level: " << level << endl;
//     }

//     void setHealth(int h){
//         health = h;
//     }
//     int getHealth(){
//         return health;
//     }
//     void setLevel(char l){
//         level = l;
//     }
//     char getLevel(){
//         return level;
//     }
// };

// int main() {
//     Hero suresh(70, 'c');
//     suresh.print();
//     Hero r(suresh); // Copy constructor
//     r.print();
//     // ritesh.health = suresh.health;


//     // //static memory allocation
//     // Hero a; 
//     // cout << "Level : "<< a.level << endl;
//     // cout << "Health : " << a.getHealth() << endl;
    
//     // //dynamically
//     // Hero *b = new Hero;
//     // b->setLevel('A');
//     // b->setHealth(100);
//     // cout <<"Level is "<< (*b).level << endl;
//     // cout << "Health is " << (*b).getHealth() << endl;

//     // cout << "Level is " << b->level << endl;
//     // cout << "Health is  " << b->getHealth() << endl;
//     // Hero h1;

//     // h1.setHealth(100);
//     // h1.setLevel('A');

//     // cout << h1.getHealth() <<  endl;
//     // cout << h1.getLevel() << endl;
// } 
//encapsulation wrapping up data members and functions capsule mein data members aur functions hote h in short class mein data members aur functions hote h 
// why encapsulation is used?
// =>data hinding/ information hiding == encapsulation se hum data ko hide kar sakte h agr humne private ban dia toh usse hum cdekh nhi sakte na change kr sakte 
// =>code reusability


//Inheritance
// what is inheritance?
// =>it is a process in which one class acquires the properties of another class 

// #include<iostream>
// using namespace std;

// class Human {
//     public:
//     int height;
//     int weight;
//     int age;

//     public:
    
// void setHeight(int h) {
//         this->height = h;
//     }
// void setWeight(int w) {
//         this->weight = w;
//     }
// void setAge(int a) {
//         this->age = a;
//     }
// int getHeight(){
//     return this->height;
//     }
// int getWeight(){
//     return this->weight;
//     }
// int getAge() {
//     return this->age;
//     }
// };

// class male: public Human {
//     public:
//     string color;

//     void attack() {
//         cout << "Attacking with fists!" << endl;
//     }
// };

// int main() {
//     male m1;
    // m1.setAge(25);
    // m1.setWeight(65);
    // m1.setHeight(180);
    // m1.color = "Brown";
    // cout << m1.color << endl;
    // cout << m1.getHeight() << endl;
    // cout << m1.getWeight() << endl;
    // cout << m1.getAge() << endl;
    // m1.attack();    

    // cout << m1.age << endl;    
    // cout << m1.weight << endl;
    // cout << m1.height << endl;
    // cout << m1.color << endl;
    // m1.attack();
    // m1.setWeight(70);
    // cout << m1.weight << endl;
    // cout << m1.getAge() << endl;
      
    // return 0;
// }
//Types of inheritance
// 1. Single Inheritance
// 2. Multiple Inheritance
// 3. Multilevel Inheritance
// 4. Hierarchical Inheritance
// 5. Hybrid Inheritance

// single inheritance simple ek se dusre mein jaise human mein hoti bas simole clean
// #include<iostream>
// #include<string>
// using namespace std;

// class Animal {
//     public:
//     int age;
//     int weight;

//     public:
//     void speak() {
//         cout <<"Speaking " << endl;
//     }
// };

// class Dog: public Animal {
//     public:
//     string breed;

//     void bark() {
//         cout << "Barking" << endl;
//     }
//     string setBreed(string b) {
//         breed = b;
//         return breed;
//     }
//     string getBreed() {
//         return breed;
//     }
// };

// int main() {
//     Dog d1;
//     d1.breed = "Bulldog";
//     d1.speak();
//     d1.bark();
//     d1.age = 5;
//     cout << "Dog Breed: " << d1.getBreed() << endl;
//     return 0;
// }

//Multilevel Inheritance
// multiple levels mein inheritance a->b->c
// #include<iostream>
// #include<string>
// using namespace std;

// class Animal {
//     public:
//     int age;
//     int weight;

//     void speak() {
//         cout << "Speaking" << endl;
//     }
//     void setAge(int a){
//         age = a;
//     }
//     int getAge() {
//         return this -> age;
//     }
//     void setWeight(int w){
//         weight = w;
//     }
//     int getWeight() {
//         return this -> weight;
//     }
// };

// class Dog: public Animal{

// };

// class German: public Dog{

// };

// int main(){
//     German g1;
//     g1.setAge(5);
//     g1.setWeight(20);
//     cout << "Age: " << g1.getAge() << endl;
//     cout << "Weight: " << g1.getWeight() << endl;
//     g1.speak();
//     return 0;
// }

//Multiple Inheritance
// ek ha a ek ha b fir aayi c voh kehti dono k properties le lo

// #include<iostream>
// using namespace std;

// class A{
//     public:
//     void displayA() {
//         cout << "Display A" << endl;
//     }
// };
// class B{
//     public:
//     void displayB() {
//         cout << "Display B" << endl;
//     }
// };

// class C:public A, public B {
//     public:
//     void displayC() {
//         cout << "Display C" << endl;
//     }
// };

// int main() {
//     C obj;
//     obj.displayA();
//     obj.displayB();
//     obj.displayC();
//     return 0;
// }

//Hierarchical Inheritance
// ek class parent class ki tarah serve for more than one child class
// #include<iostream>
// #include<string>
// using namespace std;

// class A {
//     public:
//     void func1() {
//         cout << "Function 1 from class A" << endl;
//     }
// };
// class B: public A {
//     public:
//     void func2() {
//         cout << "Function 2 from class B which is from A" << endl;
//     }
// };
// class C: public A {
//     public:
//     void func3() {
//         cout << "Function 3 from class C which is from A" << endl;
//     }
// };

// int main(){
//     A obja;
//     B objb;
//     C objc;
//     obja.func1();
//     objb.func1();
//     objb.func2();
//     objc.func1();
//     objc.func3();
// }

//Hybrid Inheritance
// combination of more than one type of inheritance
// #include<iostream>
// #include<string>    
// using namespace std;

// class A{
//     public:
//     void funca(){
//         cout << "Function A" << endl;
//     }
// };
// class D{
//     public:
//     void funcd() {
//         cout << "Function D" << endl;
//     }
// };
// class B: public A{
//     public:
//     void funcb(){
//         cout << "Function B from a " << endl;
//     }
// };
// class C: public A, public D{
//     public:
//     void funcc(){
//         cout << "Function C from a && d " << endl;
//     }
// };

// int main(){
//     A objA;
//     B objB;
//     C objC;
//     D objD;
//     objA.funca();
//     objB.funca();  
//     objB.funcb();
//     objC.funca();  
//     objC.funcd();
//     objC.funcc();
//     objD.funcd();

//     return 0;
// }

// //Inheritance ambiguity
// basically ja ek a ha and b ha c ko dono ki properties dedi and c ko run ki hum chahte ha ki c ka object ban jaye jiss mein a and b ho 4
// #include<iostream>
// using namespace std;

// class A {
// public:
//     void funcA() {
//         cout << "Function of A" << endl;
//     }
// };

// class B {
// public:
//     void funcB() {
//         cout << "Function of B" << endl;
//     }
// };

// // C inherits from both A and B
// class C : public A, public B {
// };

// int main() {
//     C obj;

//     // Accessing functions of both A and B using C's object
//     obj.funcA();  // Function of A
//     obj.funcB();  // Function of B

//     return 0;
// }

//Polymorphism == poly means many phism means form => means existing in multiple forms  
// jaise hum ek object ko different ways se use kar sakte ha real world jaise aapke father voh husband ha papa ha bete ha bhai h
// type = compile time, run time 
// compile time jab compile krte tab pta chlta 
// yeh aage do type function overloading and operator overloading

// function overloading means same function name but different parameters
// dono same  paramete diff jaise ek int toh ek double ya string anything
// void ko int krne ka bhi fayda nhi hota
//operator overloading means same operator but different operations
// jaise + ka use hum int mein bhi karte ha aur string mein bhi karte jaise + add krta but hum usse use kr rahe kisi aur cheez vaste jaise koi language or koi aur io=operation krna jaise - * /

// // Function overloading example
// #include<iostream>
// using namespace std;

// class A{
//     public:
//     void func(int a) {
//         cout << "Function with int parameter: " << a << endl;
//     }
//     void func(double b) {
//         cout << "Function with double parameter: " << b << endl;
//     }
// };

// int main(){
//     A obj1;
//     obj1.func(5);        // Calls the int version
//     obj1.func(3.14);     // Calls the double version
//     return 0;
// }

// Operator overloading example
// #include<iostream>
// using namespace std;

// class B{
//     public:
//     int a;
//     int b;
    
//     public:
//     int add() {
//         return a+b;
//     }

//     void operator+ (B &obj) {
//         int value1 = this -> a;
//         int value2 = obj.a;
//         cout << "Addition of two objects: " << value1 - value2 << endl;
//     }
// };

// int main() {
//     B obj1, obj2;

//     obj1.a = 4;
//     obj2.a = 7;

//     obj1 + obj2;
// }

//Run time Polymorphism
#include

// abstraction implementation hiding eg-> 