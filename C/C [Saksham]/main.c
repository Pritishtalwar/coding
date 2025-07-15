// preprocessor directive

// int main() {
//     printf("hello world");
//     return 0;       //this shows zero errors
// }

        //  the excecution in c is done line by line.
        //  ';' is a type of full stop.
        //  C is a case sensitive language.

        //  ----------- VARIABLES ------------
        //   Some imp rules:-
        //   1. they are case sensitive
        //   2. first character is alphabet or '_'
        //   3. no comma/blank space
        //   4. no other symbol other than '_'

        //   it can be changed anytime.(i.e. value can be updated)
        //   name of the variable should be meaningful.

// int main(){
//     int number=25;
//     char star='*';
//     int age=22;
//     float pi=3.14;
//     int final_price=350;
//     return 0;
// }

//           ----------- DATATYPES -------------

// int main(){
//     int age=22;
//     float pi=3.14;
//     char hashtag='#';
//     return 0;
// }

//           ------------ CONSTANTS -----------
//           types:-
//           1. integer constants- 1, 2, 3, -1, -6
//           2. real constants- 1.0, 2.0, -2.4, -3.14
//           3. character constants- 'a', 'b', '#', '&','A'

//           ---------- KEYWORDS -----------
//           reserved words that have special meaning to the compiler
//           total 32 keywords in C.
//           eg. int, return, float, char, const, if, else, do

//           ----------- OUTPUT -----------

// int main(){
//     printf("hello C");
//     printf("hello C");
//     printf("hello C");
//     printf("hello C");
//     return 0;
// }

//   output-- hello Chello Chello Chello C

// int main(){
//     printf("hello C \n");
//     printf("hello C \n");
//     printf("hello C \n");
//     printf("hello C \n");
//     return 0;
// }

//   output-- hello C 
//            hello C 
//            hello C
//            hello C

// int main(){
//     int age=18;
//     float pi=3.14;
//     char star='*';
//     printf("star looks like %c \n",star);
//     printf("value of pi is %f \n",pi);
//     printf("age is %d \n",age);
//     return 0;
// }

//              to print some cases the syntx is as follows:-
//              1. integers:-
//                 printf("age is %d",age)
//              2. real numbers:-
//                 printf("value of pi is %f",pi)
//              3. characters:-
//                 printf("star looks like %c",star)

//              here %d %f and %c are called format specifiers... and printf is a library fuction...

//             -----------INPUT------------

//             for taking input we use scanf() function of C.....
//             scanf("%d",&age)
//             here %d is format specifier that of what type of input we are taking from the user...
//             &age is the variable in which we will store the same value...
//             here "&" is basically the address...

// int main(){
//     int age;
//     printf("enter a number:");
//     scanf("%d",&age);
//     printf("your age is: %d",age);
//     return 0;
// }

// int main(){
//     int a,b;
//     printf("enter first number:");
//     scanf("%d",&a);
//     printf("enter second number:");
//     scanf("%d",&b);
//     int sum = a+b;
//     printf("sum of numbers is: %d",sum);
//     return 0;
// }

//             ----------COMPILATION----------
//             a computer program that translates C code into a machine code...

//             ----------QUESTIONS-----------
//             --Q-1-- write a program to calculate the area of a square?--
// int main(){
//     float side;
//     printf("enter side of the square:");
//     scanf("%f",&side);
//     printf("area of the square is: %f", side*side);
//     return 0;
// }

//             --Q-2-- write aa program to calculate area of circle?--
// int main(){
//     float pi=3.14;
//     float radius;
//     printf("enter the radius of the circle:");
//     scanf("%f",&radius);
//     printf("area of circle is: %f",pi*radius*radius);
//     return 0;
// }

//             --Q-3-- write a program to find perimeter of a rectangle?--
// int main(){
//     float length,breadth;
//     printf("enter length of the rectange:");
//     scanf("%f",&length);
//     printf("enter breadth of the rectange:");
//     scanf("%f",&breadth);
//     printf("perimeter of rectange is: %f",2*(length+breadth));
//     return 0;
// }

//             --Q-4-- write a program to find cube of a number n?--
// int main(){
//     float n;
//     printf("enter a number n:");
//     scanf("%f",&n);
//     printf("cube the number is: %f",n*n*n);
//     return 0;
// }

//             ------------INSTRUCTIONS-------------
//             these are statements in a program...
//             Types:-
//             1. type declaration instructions
//                declare var before using it...
//                eg.
//                     valid examples
//                   int a=22;
//                   float b=3.56;
//                   char c='*';
//                   int d=1,e;
//                   int a,b,c;
//                   a=b=c=1;
//                     invalid examples
//                   int a=b=c=1;
//             2. arithmetic instructions
//                single variable on the LHS...
//                arthemetic operators in C are - +,-,*,%,/
//                int   op int   -> float
//                int   op float -> float
//                float op float -> float

//                arethemetic precedence:-
//                  *,/,%
//                    |
//                   +,-
//                    |
//                    =
//                if same precedence then move left to right..
//                eg.
//                   a+b;
//                   here '+' is operator and 'a','b' are operands...
//                   int a=1,b=2;
//                   int sum=a+b;
//             3. control instructions
//                used to determine flow of program...
//                   a. sequence control
//                      one after the other in a line.
//                   b. decision control
//                      if else conditional statements.
//                   c. loop control
//                      for while loops in C.
//                   d. case control
//                      we assign different cases to the work.                   

// int main(){
//     int a=1;
//     int b=a;
//     int c=b*5;
//     int e,h,g;
//     e=h=g=2;
//     printf("%d",a);
//     printf("%d",b);
//     printf("%d",c);
//     printf("%d",g);
//     printf("%d",e);
//     printf("%d",h);
//     return 0;
// }

// int main(){
//     int a=2;
//     int b=4;
//     int sum=a+b;
//     printf("%d",sum);
//     return 0;
// }

// #include<math.h>
// int main(){
//     int b=4,c=2;
//     int power=pow(b,c);
//     printf("%d",power);
//     return 0;
// }

// int main(){
//     int a=3;
//     float a1=3.0;
//     int b=2;
//     printf("%d \n",a/b);
//     printf("%f",a1/b);
//     return 0;
// }

// int main(){
//     int a=(int) 1.999999;
//     printf("%d",a);
//     return 0;
// }

//             --Q-5-- write a program to solve the following arthemetic equations?--
// int main(){
//     printf("%d \n",5*2-2*3);
//     printf("%d \n",5*2/2*3);
//     printf("%d \n",5*(2/2)*3);
//     printf("%d \n",5+2/2*3);
//     return 0;
// }

//             -----------OPERATORS-------------
//             a. arithmetic operators
//             b. relational operators
//             c. logical operators
//             d. bitwise operators
//             e. assignment operators
//             f. ternary operators(conditional)

//             ----------ARITHMETIC OPERATORS----------
//                arthemetic operators in C are - +,-,*,%,/
//                int   op int   -> float
//                int   op float -> float
//                float op float -> float

//                arethemetic precedence:-
//                  *,/,%
//                    |
//                   +,-
//                    |
//                    =
//                if same precedence then move left to right..

//             ----------RELATIONAL OPERATORS----------
//             ==    equal to
//             >,>=  greater than and greater than equal to
//             <,<=  less than and less than equal to
//             !=    not equal to
//             also in C true=1 and false=0

// int main(){
//     printf("%d \n",4==4);
//     printf("%d \n",4==2);
//     return 0;
// }

//             ----------LOGICAL OPERATORS----------
//             && AND
//             || OR
//             !  NOT

// int main(){
//     printf("%d \n",4==4&&3==3);
//     printf("%d \n",4==2&&2==2);
//     printf("%d \n",4==3||2==3);
//     printf("%d \n",4==2||2==2);
//     printf("%d \n",!(4==2));
//     printf("%d \n",!(4==4));
//     return 0;
// }

//             ---------OPERATOR PRECEDENCE---------
//             priority   operator
//                1          !
//                2        *,/,%
//                3         +,-
//                4       <,<=,>,>=
//                5         ==,!=
//                6          &&
//                7          ||
//                8          =

//             ----------ASSIGNMENT OPERATOR----------
//             =    a=b(puts value of b into a)
//             +=   a+=b(same as a=a+b)
//             -=   a-=b(same as a=a-b)
//             =   a=b(same as a=a*b)
//             /=   a/=b(same as a=a/b)
//             %=   a%=b(same as a=a%b) 
//             they just make long expressions small...

//             --Q-6-- write a program to check if a number is divisible by 2 or not?--

// int main(){
//     int x;
//     printf("enter a number:");
//     scanf("%d",&x);
//     if(x%2==0){
//         printf("number is divisible by 2");
//     }
//     else{
//        printf("number not divisible by2");
//     }
//     return 0;
// }

// int main(){
//     int x;
//     printf("enter a number");
//     scanf("%d",&x);
//     printf("%d",x%2==0);
//     return 0;
// }

//             --Q-7-- write a program to check if a number is odd or even?--

// int main(){
//     int x;
//     printf("enter a number:");
//     scanf("%d",&x);
//     if(x%2==0){
//         printf("number is even");
//     }
//     else{
//        printf("number is odd");
//     }
//     return 0;
// }

// int main(){
//     int x;
//     printf("enter a number");
//     scanf("%d",&x);
//     printf("%d",x%2==0);
//     return 0;
// }

//             --Q-8-- is it valid int x;int y=x;?--


// int main(){
//     int x=8;int y=x;
//     printf("%d",y);
//     return 0;
// }

//             --Q-9-- write a program to check the following?--
//                                     is sunday and is snowing 
//                                     is monday or is raining
//                                     a number is greater than 9 and less than 100

// int main(){
//     int is_sunday=1;
//     int is_snowing=1;
//     printf("%d \n",is_sunday && is_snowing);
//     int is_monday=1;
//     int is_raining=1;
//     printf("%d \n",is_monday || is_raining);
//     int x;
//     printf("enter a number:");
//     scanf("%d",&x);
//     printf("%d",x>9 && x<100);
//     return 0;
// }

//             --Q-10-- write a program to print the average of three numbers?--

// int main(){
//     int a,b,c;
//     printf("enter 1st number:\n");
//     scanf("%d",&a);
//     printf("enter 2nd number:\n");
//     scanf("%d",&b);
//     printf("enter 3rd number:\n");
//     scanf("%d",&c);
//     printf("average of numbers is: %f",(float)(a+b+c)/3);
//     return 0;
// }

//              -------------CONDITIONAL STATEMENTS-------------
//              two types of conditional statements:-
//              1. if else
//              2. switch 

//              if else
//              nested if-else condition are allowed...
//              eg.
//                 if(condition){
//                    do if something is true
//                 }
//                 else if(condition){
//                    do if something is true
//                 }
//                 else{
//                    do if something is false
//                 }
//                 if -else if- else
//                 here if one condition is true then other conditions are not checked...
//                 if -if- if
//                 here all conditions are checked one after the other...

// int main(){
//     int age;
//     printf("enter your age:");
//     scanf("%d",&age);
//     if(age>=18){
//         printf("person is an adult\n");
//     }
//     else{
//         printf("person is not an adult\n");
//     }
//     printf("thankyou")
//     return 0;
// }

//              -----------CONDITONAL OPERATOR----------
//              ternary operator:-     for placement can be asked...
//              condition?dosomething if true: do something if false;

// int main(){
//     int age;
//     printf("enter your age:");
//     scanf("%d",&age);
//     age>=18?printf("person is an adult"):printf("person is not an adult");
//     return 0;
// }

//              switch
//              cases can be in any order...
//              nested switch are allowed...
//              eg.
//                  switch(number){
//                  case C1: do something
//                        break;
//                  case C2: do something
//                        break;
//                  default: do something
//                  }

// int main(){
//     int day;
//     printf("enter day (1-7):");
//     scanf("%d",&day);
//     switch(day){
//         case 1 : printf("monday");
//                  break;
//         case 2 : printf("tuesday");
//                  break;
//         case 3 : printf("wednesday");
//                  break;
//         case 4 : printf("thursday");
//                  break;
//         case 5: printf("friday");
//                  break;
//         case 6 : printf("saturday");
//                  break;
//         case 7 : printf("sunday");
//                  break;
//         default : printf("not a valid day");
//     }
//     return 0;
// }

//             --Q-11-- write a program to check if a student is pass or fail?--

// int main(){
//     int marks;
//     printf("enter marks of student: \n");
//     scanf("%d",&marks);
//     if(marks>=33){
//         printf("student has passed the exam \n");
//     }
//     else{
//         printf("student has failed in the exam \n");
//     }
//     return 0;
// }

//             --Q-12-- predict the output of following?--
//                      throw error
//                      x is equall to 1
//                      x is not equall to 1

// int main(){
//     int x=2;
//     if(x=1){
//         printf("x is equall to 1");
//         printf("%d",x)
//     }
//     else{
//         printf("x is not equall to 1");
//     }
//     return 0;
// }

//  Output---- x is equall to 1 and x=4

//             --Q-12-- write a program to find if a character entered by user is upper case or not?--

// int main(){
//     char ch;
//     printf("enter a character");
//     scanf("%c",&ch);
//     if(ch>='a' && ch<='z'){
//         printf("it is a lower case letter");
//     }
//     else if(ch>='A' && ch<='Z'){
//         printf("it is upper case letter");
//     }
//     else{
//         printf("not an english letter");
//     }
//     return 0;
// }

//             --Q-13-- write a program to check if a given number is a natural number?--

// int main(){
//     float number;
//     printf("enter a number");
//     scanf("%f",&number);
//     if(number>=1 && (int)number==number){
//         printf("it is a natural number");
//     }
//     else{
//         printf("it is not a nautral number");
//     }
//     return 0;
// }

//             ----------LOOP CONTROL INSTRUCTION----------
//             if we want to do a task again and again then we use loops...
//             types:-
//             1. for
//             2. while
//             3. do while
//             they are same thing but only syntax is different...

//             for loop:-
//             for(initialization;condition;updation){do soemthing}
//             i++ means first use value of i then increment it and  store it...
//             ++i means first increase it then use it...

//             special things:-
//             increment operator and decrement operator
//             loop counter can be int float or even character
//             infinite loop (don't create it creates error)

//             operators
//             ++i pre increment 
//             i++ post incremnet
//             --i pre decrement
//             i-- post decrement

// int main(){
//     int num;
//     printf("enter a number");
//     scanf("%d",&num);
//     for(int i=0;i<=num;i+=1){
//         printf("hi \n");
//     }
//     return 0;
// }

//             --Q-14-- write a program to write all digits from 0 to 10?--

// int main(){
//     for(int i=0;i<=10;i+=1){
//         printf("%d ",i);
//     }
//     return 0;
// }

// int main(){
//     for(int i=10;i>=0;i-=1){
//         printf("%d \n",i);
//     }
//     return 0;
// }

// int main(){
//     for (float i=1.0;i<=10.0;i++){
//         printf("%f \n",i);
//     }
//     return 0;
// }

// int main(){
//     for (char ch='a';ch<='z';ch++){
//         printf("%c ",ch);
//     }
//     return 0;
// }

// int main(){  //infinite loop
//     for(int i=1; ;i++){
//         printf("hi \n");
//     }
//     return 0;
// }

//              while loop:-
//              while(condition){ do something}

// int main(){
//     int i=1;
//     while(i<=10){
//         printf("%d \n",i);
//         ++i;
//     }
//     return 0;
// }

//             --Q-15-- write a program to print the numbers from 0 to n, if n is given by user?--

// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     int i=1;
//     while(i<=n){
//         printf("%d",i);
//         i++;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("%d",i);
//     }
//     return 0;
// }

//               do while loop:-
//               it is while loop that executes at least one time necessarily...
//               do{ do something}while(condition);

// int main(){
//     int i=5;
//     do{
//         printf("%d",i);
//         i++;
//     }while(i<=1);
//     return 0;
// }

//             --Q-16-- write a program to print the sum of first n natural numbers also print them in reverse order?--

// int main(){
//     int n;
//     printf("enter number n here:");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     printf("%d \n",sum);
//     for(int j=n;j>=1;j--){
//         printf("%d ",j);
//     }
//     return 0;
// }

// int main(){
//     int n;
//     printf("enter number n here:");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=1, j=n;i<=n && j>=1;i++,j--){
//         sum+=i;
//         printf("%d \n",j);
//     }
//     printf("%d \n",sum);
//     return 0;
// }

//             --Q-17-- write a program to print the table of an number input by the user?--

// int main(){
//     int n;
//     printf("enter the number whose table u wnat to print:");
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){
//         printf("%d X %d = %d \n",n,i,n*i);
//     }
//     return 0;
// }

//             break statement:-
//             exit the loop

// int main(){
//     for (int i=0;i<+5;i++){
//         if(i==3){
//             break;
//         }
//         printf("%d \n",i);
//     }
//     printf("end \n");
//     return 0;
// }

//             --Q-18-- write a program for keep taking numbers as input from the user until user enters an odd number?--

// int main(){
//     for (int i=1; ;i++){
//         int n;
//         printf("enter a number: ");
//         scanf("%d",&n);
//         if(n%2==0){
//             printf("%d\n",n);
//         }
//         else{
//             break;
//         }
//     }
//     printf("you entered odd number");
//     return 0;
// }

//             --Q-19-- write a program that keeps taking numbers as input from user until user enters a number which is divisible by 7?--

// int main(){
//     for (int i=1; ;++i){
//         int n;
//         printf("enter a number: ");
//         scanf("%d",&n);
//         if (n%7!=0){
//             printf("%d \n",n);
//         }
//         else{
//             break;
//         }
//     }
//     printf("you entered a number divisible by 7.");
//     return 0;
// }

//               continue statement:-
//               skips the next iteration...

// int main(){
//     for (int i=1;i<=5;i++){
//         if (i==3){
//             continue;
//         }
//         printf("%d \n",i);
//     }
// }

//             --Q-20-- write a program to print all the numbers from 1 to 10 except 6?--

// int main(){
//     for (int i=1;i<=10;i++){
//         if (i==6){
//             continue;
//         }
//         printf("%d \n",i);
//     }
// }

//             --Q-21-- write a program to print all th odd numbers between 5 to 50?--

// int main(){
//     for (int i=5;i<=50;i++){
//         if (i%2==0){
//             continue;
//         }
//         printf("%d \n",i);
//     }
// }

//             --Q-22-- write a program to print the factorial of a number n?--

// int main(){
//     int n;
//     printf("enter number whose factorial you want:");
//     scanf("%d",&n);
//     int factorial=1;
//     for (int i=n;i>=1;i--){
//         factorial*=i;
//     }
//     printf("%d",factorial);
//     return 0;
// }

//             --Q-23-- write a program tom print reverse of table of n?--

// int main(){
//     int x;
//     printf("enter a number:");
//     scanf("%d",&x);
//     for (int i=10;i>=1;i--){
//         printf("%d X %d = %d \n",x,i,x*i);
//     }
//     return 0;
// }

//             --Q-24-- write a program to calculate the sum of all numbers between 5 to 50 including them?--

// int main(){
//     int sum=0;
//     for (int i=5;i<=50;i++){
//         sum+=i;
//     }
//     printf("%d",sum);
//     return 0;
// }

//             --Q-25-- write a program tom print the star pattern?--

// int main(){
//     char star='*';
//     int x;
//     printf("enter a number:");
//     scanf("%d",&x);
//     for (int i=1;i<=x;i++){
//         for (int j=1;j<=x;j++){
//             printf("%c",star);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//             --Q-26-- write a program to check if a number is prime or not?--

// int main(){
//     int x;
//     printf("enter a number:");
//     scanf("%d",&x);
//     int factors=0;
//     for (int i=1;i<=x;i++){
//         if (x%i==0){
//             factors+=1;
//         }
//     }
//     if (factors==2){
//         printf("%d is a prime number",x);
//     }
//     else{
//         printf("%d is not a prime numner",x);
//     }
//     return 0;
// }

//             --Q-27-- write a program to prime numbers in a range?--

// int main(){
//     int x;
//     printf("enter the starting of range:");
//     scanf("%d",&x);
//     int y;
//     printf("enter the end of range:");
//     scanf("%d",&y);
//     for (int i=x;i<=y;i++){
//         int factors=0;
//         for (int j=1;j<=i;j++){
//             if (i%j==0){
//                 factors+=1;
//             }
//         }
//         if (factors==2){
//             printf("%d \n",i);
//         }
//     }
//     return 0;
// }

//                  --------------FUNCTION AND RECRUSION-------------
//                  it si block of code that preforms a particular task...
//                  take argument(input parameters) -> do work -> return result
//                  it can be used multiple times...
//                  it increases code reuseabiltiy...
//                  syntax 1:-
//                  function prototype or function declaration...
//                  void printhello();
//                  here void is return type...
//                  here void means it does not return any value...
//                  printhello is the name of the fuction...

// void printhello();

//                  syntax 2:-
//                  function definition...

// void printhello(){
//     printf("hello");
// }

//                  syntax 3:-
//                  function call...

// int main(){
//     printhello();
//     return 0;
// }

//                  combing the above three syntax...

// void printhello();    // function declartion function prototype

// void printhello(){
//     printf("hello");  // function definition
// }
// int main(){
//     printhello();     // function call 
//     return 0;
// }

//             --Q-28-- write a program with 2 functions one to print hello and other to print good bye?--

// void hello();
// void bye();

// void hello(){
//     printf("hello \n");
// }
// void bye(){
//     printf("good bye");
// }
// int main(){
//     hello();
//     bye();
//     return 0;
// }

//             --Q-29-- write a program and write a function that prints namaste if user is indian and bonjour if the user is french?--

// void namaste();
// void bonjour();

// int main(){
//     printf("enter f for french and i for indian:");
//     char nation;
//     scanf("%c",&nation);
//     if (nation == 'i'){
//         namaste();
//     }
//     else{
//         bonjour();
//     }
//     return 0;
// }
// void namaste(){
//     printf("namaste");
// }
// void bonjour(){
//     printf("bonjour");
// }

//                  Properties :-
//                  execuition always starts from main...
//                  a function gets called directly or indirectly from main...
//                  there can be multiple functions in a program...

//                 function types:-
//                 1. library function:-
//                    special functions inbuilt in C...
//                    scanf(),printf()
//                 2. user-defined:-
//                    declared and defined by programer...
 
//                 passing argumnets:-
//                 functions can take values anf give some values...
//                 i.e            parameters        return values
//                 eg.
//                    void printhello();   this prints something
//                    void printtable(int n);   this prints a table
//                    int sum(int a, int b);    this returns a value

// int sum(int a,int b);

// int main(){
//     int a,b;
//     printf("enter first number: ");
//     scanf("%d",&a);
//     printf("enter second number: ");
//     scanf("%d",&b);
//     int s=sum(a,b);
//     printf("sum of two numbers is: %d",s);
//     return 0;
// }
// int sum(int a,int b){
//     return a+b;
// }

// void table(int n);
// int main(){
//     int n;
//     printf("enter a number whose table you wnat to print: ");
//     scanf("%d",&n);
//     table(n);   // argument/ actual parameter
//     return 0;
// }
// void table(int n){  //parameter / formal parameter
//     for (int i=1;i<=10;i++){
//         printf("%d X %d = %d \n",n,i,n*i);
//     }
// }

//                arguments:-
//                values that are passed in function call...
//                used to send value...
//                actual parameter...

//                parameters:-
//                values in function declaration and definition...
//                used to receive value...
//                formal parameters...

//                note:-
//                function can only return 1 value at a time...
//                changes to parameters in a function don't change the values in calling function...
//                (because copy of argumnets is passed to the function)

// void price(float n);
// void price(float n){
//     n=n+(0.18*n);
//     printf("final price is: %f \n",n);
// }
// int main(){
//     float n;
//     printf("enter price of the item:");
//     scanf("%f",&n);
//     price(n);
//     printf("orignal price is: %f",n);
//     return 0;
// }

//             --Q-30-- write a program to use library functions to calculate the square of a number given by user?--

// #include<math.h>
// int main(){
//     int x;
//     printf("enter a number:");
//     scanf("%d",&x);
//     printf("square of number is: %d",(int)pow(x,2));
//     return 0;
// }

//             --Q-31-- write a program and write a function to calculate area of a square , a circle and a retangle?--

// void square(int side);
// void circle(int radius);
// void rectangle(int len, int bre);
// int main(){
//     int side,radius,len,bre;
//     printf("enter the side of square: ");
//     scanf("%d",&side);
//     printf("enter the radius of circle: ");
//     scanf("%d",&radius);
//     printf("enter the length of rectange: ");
//     scanf("%d",&len);
//     printf("enter the breadth of rectange: ");
//     scanf("%d",&bre);
//     square(side);
//     circle(radius);
//     rectangle(len,bre);
//     return 0;
// }
// void square(int side){
//     printf("area of square is: %d \n",side*side);
// }
// void circle(int radius){
//     printf("area of circle is: %f \n",(float)3.14*radius*radius);
// }
// void rectangle(int len,int bre){
//     printf("area of rectange is: %d \n",len*bre);
// }

//                 -----------RECURSION------------
//                 when a function calls itself, it's called recursion...

//             --Q-32-- write a program to print hello world five times?--

// void hello(int count);
// int main(){
//     hello(5);
//     return 0;
// }

// // recursive function
// void hello(int count){
//     if(count==0){
//         return;
//     }
//     printf("hello world \n");
//     hello(count-1);
// }

//             --Q-33-- write a program to print sum of first n natural numbers?--

// int sum(int n);
// int main(){
//     int n;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     printf("sum is: %d",sum(n));
//     return 0;
// }
// int sum(int n){
//     if (n==1){
//         return 1;
//     }
//     int summ=sum(n-1);
//     int summm=summ+n;
//     return summm;
// }

//             --Q-34-- write a program to print factorial of n?--

// int factorial(int n);
// int main(){
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     printf("factorial is: %d",factorial(n));
//     return 0;
// }
// int factorial(int n){
//     if (n==1){
//         return 1;
//     }
//     int fact=factorial(n-1);
//     int factN=fact*n;
// }

//                properties of recursion:-
//                anything that can be done with iteration, can be done with recursion and vice versa...
//                recursion can sometimes give the most simple solution...
//                base case is the condition which stops recursion...
//                iteration has infinite loop and recursion has stack overflow...

//             --Q-35-- write a program to convert celsius to fahrenheit?--

// float fahrenheit(float celsius);
// int main(){
//     float celsius;
//     printf("enter temp in celsius here: ");
//     scanf("%f",&celsius);
//     printf("temp in fahrenheit is: %f",fahrenheit(celsius));
//     return 0;
// }
// float fahrenheit(float celsius){
//     float temp=(celsius*1.8)+32;
//     return temp;
// }

//             --Q-36-- write a program to calculate percentage of a student from marks in science, mayh and sanskrit?--

// float avg(float science,float math,float sanskrit);
// int main(){
//     float science,math,sanskrit;
//     printf("enter marks of science: ");
//     scanf("%f",&science);
//     printf("enter marks of math: ");
//     scanf("%f",&math);
//     printf("enter marks of sanskrit: ");
//     scanf("%f",&sanskrit);
//     printf("avg of marks is: %f",avg(science,math,sanskrit));
//     return 0;
// }
// float avg(float science,float math,float sanskrit){
//     float average =(science+math+sanskrit)/3;
//     return average;
// }

//             --Q-37-- write a program to print n terms of fibonacci sequence?--

// int fibonacci(int n);
// int main(){
//     int n;
//     printf("enter number till you want fibonacci serie: ");
//     scanf("%d",&n);
//     printf("fibonacci is: %d ",fibonacci(n));
//     return 0;
// }
// int fibonacci(int n){
//     if (n==0 || n==1){
//         if (n==0){
//             return 0;
//         }
//         if(n==1){
//             return 1;
//         }
//     }
//     int fib1=fibonacci(n-1);
//     int fib2=fibonacci(n-2);
//     int fibn=fib1+fib2;
//     return fibn;
// }

//             --Q-38-- write a program to find sum of digits of a number?--

// #include <math.h>
// int sum(int number);
// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     printf("Sum of digits is: %d\n", sum(number));
//     return 0;
// }
// int sum(int number) {
//     if (number == 0) {
//         return 0;
//     }
//     return (number % 10) + sum(number / 10);
// }

//             --Q-39-- write a program to find square root of a number?--

// float root(float x);
// int main(){
//     float n;
//     printf("enter a number:");
//     scanf("%f",&n);
//     printf("square root is: %f",root(n));
//     return 0;
// }
// #include<math.h>
// float root(float n){
//     return pow(n,0.5);
// }

//             --Q-40-- write a program to print hot and cold dpending on the temperature of the room?--

// void temp(float x);
// int main(){
//     float x;
//     printf("enter the temperature: ");
//     scanf("%f",&x);
//     temp(x);
//     return 0;
// }
// void temp(float x){
//     if (x<=25){
//         printf("it is cold");
//     }
//     else{
//         printf("it is hot");
//     }
// }

//             --Q-41-- write a program to make your own pow function?--

// int power(int x,int y);
// int main(){
//     int x,y;
//     printf("enter the number here:");
//     scanf("%d",&x);
//     printf("enter the power here: ");
//     scanf("%d",&y);
//     printf("required answer is: %d",power(x,y));
//     return 0;
// }
// int power(int x,int y){
//     if (y==0){
//         return 1;
//     }
//     int pow1=power(x,y-1);
//     int pow=x*pow1;
//     return pow;
// }

//                  --------------POINTERS-------------
//                  a variable that stores the memory address of another variable...
//                  syntax
//                  int age=22;
//                  int*ptr=&age; "*" value at address "&" address of
//                  int_age=*ptr;

// int main(){
//     int age=22;
//     int *ptr=&age;
//     int _age=*ptr;
//     printf("%u \n",&age);
//     printf("%u \n",ptr);
//     printf("%u \n",&ptr);
//     printf("%d",age);
//     printf("%d",*ptr);
//     printf("%d",*(&age));
//     return 0;
// }

//                   declaring pointers:-
//                   int *ptr;
//                   char *ptr;
//                   float *ptr;

//                   format specifier:-
//                   printf("%p",&age);
//                   printf("%p",ptr);
//                   printf("%p",&ptr);
//                   printf("%d",age);
//                   printf("%d",*ptr);
//                   printf("%d",*(&age));