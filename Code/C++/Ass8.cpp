// FUNCTION OVERLOADING //
//CALCULATOR CLASS
// #include<iostream>
// using namespace std;
// class Calculator{
//     int a,b,c;
//     float n1,n2;
// public:
//     void input(){
//         cout<<"Enter 3 integers: "<<endl;
//         cin>>a>>b>>c;
//         cout<<"Enter 2 float values: "<<endl;
//         cin>>n1>>n2;
//     }
//     int add(int,int){
//         return a+b;
//     }
//     int add(int,int,int){
//         return a+b+c;
//     }
//     float add(float,float){
//         return n1+n2;
//     }
//     void calculate(){
//         cout<<"Addition of 2 integers: "<<add(a,b)<<endl;
//         cout<<"Addition of 3 integers: "<<add(a,b,c)<<endl;
//         cout<<"Addition of 2 floating point numbers: "<<add(n1,n2)<<endl;
//     }
// };
// int main(){
//     Calculator obj;
//     obj.input();
//     obj.calculate();
//     return 0;
// }

//Area Class
// #include<iostream>
// using namespace std;
// class Area{
// public:
//     float calculate(float radius){
//         return 3.14*radius*radius;
//     }
//     float calculate(int length,int breadth){
//         return length*breadth;
//     }
//     float calculate(double base,double height){
//         return 0.5*base*height;
//     }
// };
// int main(){
//     Area obj;
//     float radius;
//     int length,breadth;
//     double base,height;
//     cout<<"Enter radius: ";
//     cin>>radius;
//     cout<<"Area of circle: "<<obj.calculate(radius)<<endl;
//     cout<<"Enter length and breadth: "<<endl;
//     cin>>length>>breadth;
//     cout<<"Area of rectangle: "<<obj.calculate(length,breadth)<<endl;
//     cout<<"Enter base and height: "<<endl;
//     cin>>base>>height;
//     cout<<"Area of triangle: "<<obj.calculate(base,height)<<endl;
//     return 0;
// }

//Print Data
// #include<iostream>
// using namespace std;
// class PrintData{
//     int x;
//     float y;
//     string s;
//     public:
//     void input(){
//     cout<<"Enter a integer: ";
//     cin>>x;
//     cout<<"Enter a float: ";
//     cin>>y;
//     cout<<"Enter a string: ";
//     cin>>s;
//     }
//     void print(int){
//         cout<<"Integer: "<<x<<endl;
//     }
//     void print(float){
//         cout<<"Float: "<<y<<endl;
//     }
//     void print(string){
//         cout<<"String: "<<s<<endl;
//     }
// };
// int main(){
//     PrintData pd;
//     int x; float y; string s;
//     pd.input();
//     pd.print(x);
//     pd.print(y);
//     pd.print(s);
//     return 0;
// }

//Employee class
// #include<iostream>
// using namespace std;
// class Employee{
//     string ename;
//     int eid;
//     int salary;
//     public:
//     void setData(string name,int id){
//         cout<<"Enter Employee Name: ";
//         cin>>ename;
//         cout<<"Enter Employee ID: ";
//         cin>>eid;
//         salary=0;
//     }
//     void setData(string name,int id,int sal){
//         cout<<"Enter Employee Name: ";
//         cin>>ename;
//         cout<<"Enter Employee ID: ";
//         cin>>eid;
//         cout<<"Enter Employee Salary: ";
//         cin>>salary;
//     }
//     void display(){
//         cout<<"Employee Name: "<<ename<<endl;
//         cout<<"Employee ID: "<<eid<<endl;
//         cout<<"Employee Salary: "<<salary<<endl;
//     }
// };
// int main(){
//     string n;
//     int id,s;
//     Employee e;
//     e.setData(n,id);
//     e.display();
//     e.setData(n,id,s);
//     e.display();
//     return 0;
// }

//Volume class
// #include<iostream>
// using namespace std;
// class Volume{
//     int side,length,breadth,height;
//     float radius,rheight;
//     public:
//     void input(){
//         cout<<"Enter side of cube: ";
//         cin>>side;
//         cout<<"Enter length,breadth and height of cuboid: "<<endl;
//         cin>>length>>breadth>>height;
//         cout<<"Enter radius and height of cylinder: "<<endl;
//         cin>>radius>>rheight;
//     }
//     int volume(int side){
//         return side*side*side;
//     }
//     int volume(int length,int breadth,int height){
//         return length*breadth*height;
//     }
//     float volume(float radius,float height){
//         return 3.14*radius*radius*height;
//     }
//     void display(){
//         cout<<"Volume of cube: "<<volume(side)<<endl;
//         cout<<"Volume of cuboid: "<<volume(length,breadth,height)<<endl;
//         cout<<"Volume of cylinder: "<<volume(radius,rheight)<<endl;
//     }
// };
// int main(){
//     Volume v;
//     v.input();
//     v.display();
//     return 0;
// }

//String1 Class
// #include<iostream>
// #include<cstring>
// using namespace std;
// class string1{
//     int length;
//     char *buffer;
//     public:
//     string1(){
//         length=0;
//         buffer=new char[1];
//         buffer[0]='\0';
//     }
//     string1(char *str){
//         length=strlen(str);
//         buffer=new char[length+1];
//         strcpy(buffer,str);
//     }
//     string1(string1 &s){
//         length=s.length;
//         buffer=new char[length+1];
//         strcpy(buffer,s.buffer);
//     }
//     ~string1(){
//         delete[] buffer;
//     }
//     void display(){
//         cout<<"Length: "<<length<<endl;
//         cout<<"String: "<<buffer<<endl;
//     }
// };
// int main(){
//     char str[]="Soumay";
//     string1 s1;
//     string1 s2(str);
//     string1 s3(s2);
//     s1.display();
//     s2.display();
//     s3.display();
//     return 0;
// }

// Constant Object
//Student Class
// #include<iostream>
// using namespace std;
// class Student{
//     string name;
//     int rollno;
//     public:
//     Student(string n,int r){
//         name=n;
//         rollno=r;
//     }
//     void display() const{
//         cout<<"Name: "<<name<<endl;
//         cout<<"Roll Number: "<<rollno<<endl;
//     }
// };
// int main(){
//     const Student s("Soumay",101);
//     s.display();
//     return 0;
// }

//Class Product
// #include<iostream>
// using namespace std;
// class Product{
//     string name;
//     float price;
//     public:
//     Product(string n,float p){
//         name=n;
//         price=p;
//     }
//     float getPrice() const{
//         return price;
//     }
// };
// int main(){
//     const Product p("Laptop",50000);
//     cout<<"Price: "<<p.getPrice()<<endl;
//     return 0;
// }

//BOOK CLASS
// #include<iostream>
// using namespace std;
// class Book{
//     string title;
//     public:
//     Book(string t){
//         title=t;
//     }
//     void getTitle() const{
//         cout<<"Book Title:"<<title<<endl;
//     }
//     void setTitle(string t){
//         title=t;
//     }
// };
// int main(){
//     const Book b("JUNGLE BOOK");
//     b.getTitle();
//     return 0;
// }

//Design a class Car with speed and mileage. Demonstrate the use of a const object to only view details.
// #include<iostream>
// using namespace std;
// class Car{
//     int speed;
//     double mileage;
//     public:
//     Car (int speed ,double mileage){
//         this->speed = speed;
//         this->mileage = mileage;
//     }
//     void view() const{
//         cout<<" ///DETAILS OF A CAR/// "<<endl;
//         cout<<"Speed of the car: "<<speed<<endl;
//         cout<<"Mileage of the car: "<<mileage;
//     }
// };
// int main(){
//     const Car c(90 ,12.4);
//     c.view();
// }

//A class Employee contains id and salary. Show how a const object restricts access only to const functions.
// #include<iostream>
// using namespace std;
// class Employee{
//     int id;
//     float salary;
//     public:
//     Employee(int i,float s){
//         id=i;
//         salary=s;
//     }
//     void display() const{
//         cout<<"Employee ID: "<<id<<endl;
//         cout<<"Salary: "<<salary<<endl;
//     }
//     void changeSalary(float s){
//         salary=s;
//     }
// };
// int main(){
//     const Employee e(11,70000);
//     e.display();
//    // e.changeSalary(60000);  // Error
//     return 0;
// }

//Static Member in Class
//Create a class Bank with a static data member interestRate. Write functions to set and display interest rate. Show that it is shared among all objects.

// #include<iostream>
// using namespace std;
// class Bank{
//     static float interestRate;
//     public:
//     void setRate(float r){
//         interestRate=r;
//     }
//     void display(){
//         cout<<"Interest Rate: "<<interestRate<<"%"<<endl;
//     }
// };
// float Bank::interestRate;
// int main(){
//     Bank b1,b2;
//     b1.setRate(5.5);
//     b1.display();
//     b2.display();
//     b1.setRate(7.5);
//     cout<<"After changing rate:"<<endl;
//     b1.display();
//     b2.display();
//     return 0;
// }

//A class Counter has a static member to keep track of the number of objects created. Demonstrate it by creating multiple objects
// #include<iostream>
// using namespace std;
// class Counter{
//     static int count;
//     public:
//     Counter(){
//         count++;
//     }
//     void display(){
//         cout<<"Number of objects: "<<count<<endl;
//     }
// };
// int Counter::count=0;
// int main(){
//     Counter c1,c2,c3;
//     c3.display();
//     return 0;
// }

//A class Company has employee name and salary, but a static member companyName. Show that all employees share the same company name.
// #include<iostream>
// using namespace std;
// class Company{
//     string empname;
//     float sal;
//     static string compname;
//     public:
//     Company(){
//        this-> empname = empname;
//        this-> sal = sal;
//        this-> compname= compname;
//     }
//     void input(){
//         cout<<"Enter employee name:";
//         cin>>empname;
//         cout<<"Enter employee salary:";
//         cin>>sal;
//         cout<<"Enter company name:";
//         cin>>compname;
//     }
//     void display(){
//         cout<<"Employee Name: "<<empname<<endl;
//         cout<<"Salary: "<<sal<<endl;
//         cout<<"Company Name: "<<compname<<endl;
//     }
// };
// string Company::compname;
// int main(){
//     Company c;
//     c.input();
//     c.display();
//     return 0;
// }

//STUDENT CLASS
// #include<iostream>
// using namespace std;
// class Student{
//     static int totalStudents;
//     public:
//     Student(){
//         totalStudents++;
//     }
//     void display(){
//         cout<<"Total No. of students: "<<totalStudents<<endl;
//     }
// };
// int Student::totalStudents=0;
// int main(){
//     Student s1;
//     s1.display();
//     Student s2;
//     s2.display();
//     Student s3;
//     s3.display();
//     return 0;
// }

//Library class
// #include<iostream>
// using namespace std;
// class Library{
//     static int totalBooks;
//     public:
//     void issueBook(){
//         totalBooks--;
//     }
//     void returnBook(){
//         totalBooks++;
//     }
//     void display(){
//         cout<<"Total Books: "<<totalBooks<<endl;
//     }
// };
// int Library::totalBooks=5;
// int main(){
//     Library l;
//     l.display();
//     l.issueBook();
//     cout<<"After issuing a book:"<<endl;
//     l.display();
//     l.returnBook();
//     cout<<"After returning a book:"<<endl;
//     l.display();
//     return 0;
// }

// Friend Function
//Volume class
// #include<iostream>
// using namespace std;
// class Box{
//     int length,breadth,height;
//     public:
//     friend int volume(Box b);
//     void input(){
//         cout<<"Enter Box Length: ";
//         cin>>length;
//         cout<<"Enter Box Breadth: ";
//         cin>>breadth;
//         cout<<"Enter Box Height: ";
//         cin>>height;
//     }
// };
// int volume(Box b){
//     return b.length*b.breadth*b.height;
// }
// int main(){
//     Box b;
//     b.input();
//     cout<<"Volume of Box: "<<volume(b)<<endl;
//     return 0;
// }

// Define two classes Student and Exam. Use a friend function to access private marks of Student in Exam for grade calculation.
// #include<iostream>
// using namespace std;
// class Student{
//     int marks;
//     public:
//     void input(){
//         cout<<"Enter marks: ";
//         cin>>marks;
//     }
//     friend void calculate(Student s);
// };
// class Exam{
//     public:
//     void displayGrade(int marks){
//         if(marks>=90)
//             cout<<"Grade: A";
//         else if(marks>=75)
//             cout<<"Grade: B";
//         else if(marks>=60)
//             cout<<"Grade: C";
//         else if(marks>=40)
//             cout<<"Grade: D";
//         else
//             cout<<"Grade: F";
//     }
// };
// void calculate(Student s){
//     Exam e;
//     e.displayGrade(s.marks);
// }
// int main(){
//     Student s;
//     s.input();
//     calculate(s);
//     return 0;
// }

// Create two classes Account and Loan. Use a friend function to check whether the account balance is sufficient for loan eligibility.
// #include<iostream>
// using namespace std;
// class Account;
// class Loan{
//     int minBalance;
//     public:
//     void input(){
//         cout<<"Enter Minimum Balance Required: ";
//         cin>>minBalance;
//     }
//     friend void check(Account a,Loan l);
// };
// class Account{
//     int balance;
//     public:
//     void input(){
//         cout<<"Enter Account Balance: ";
//         cin>>balance;
//     }
//     friend void check(Account a,Loan l);
// };
// void check(Account a,Loan l){
//     if(a.balance>=l.minBalance)
//         cout<<"Loan Eligible";
//     else
//         cout<<"Loan Not Eligible";
// }
// int main(){
//     Account a;
//     Loan l;
//     a.input();
//     l.input();
//     check(a,l);
//     return 0;
// }

// Write a class Complex and use a friend function to add two complex numbers.
// #include<iostream>
// using namespace std;
// class Complex{
//     int real;
//     int img;
//     public:
//     void input(){
//         cout<<"Enter Real Part: ";
//         cin>>real;
//         cout<<"Enter Imaginary Part: ";
//         cin>>img;
//     }
//     friend void add(Complex c1,Complex c2);
// };
// void add(Complex c1,Complex c2){
//     int real=c1.real+c2.real;
//     int img=c1.img+c2.img;
//     cout<<"Addition: "<<real<<" + "<<img<<"i";
// }
// int main(){
//     Complex c1,c2;
//     cout<<"Enter First Complex Number:"<<endl;
//     c1.input();
//     cout<<"Enter Second Complex Number:"<<endl;
//     c2.input();
//     add(c1,c2);
//     return 0;
// }

// Define two classes Point and Line. Use a friend function to check whether a point lies on a given line.
#include<iostream>
using namespace std;
class Line;
class Point{
    int x,y;
    public:
    void input(){
        cout<<"Enter x coordinate: ";
        cin>>x;
        cout<<"Enter y coordinate: ";
        cin>>y;
    }
    friend void check(Point p,Line l);
};
class Line{
    int m,c;
    public:
    void input(){
        cout<<"Enter slope: ";
        cin>>m;
        cout<<"Enter constant: ";
        cin>>c;
    }
    friend void check(Point p,Line l);
};
void check(Point p,Line l){
    if(p.y==l.m*p.x+l.c)
        cout<<"Point lies on the line";
    else
        cout<<"Point does not lie on the line";
}
int main(){
    Point p;
    Line l;
    p.input();
    l.input();
    check(p,l);
    return 0;
}
