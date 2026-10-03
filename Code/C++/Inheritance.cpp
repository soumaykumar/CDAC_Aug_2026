// // Create a base class Person with data members name and age. Derive a class Student that adds rollNumber and marks. 
// // Write a program to display details of a student.
// #include<iostream>
// using namespace std;
// class Person{
//     string name;
//     int age;
//     public:
//     void input(){
//         cout<<"Enter Person Name: ";
//         getline(cin,name);
//         cout<<"Enter age: ";
//         cin>>age;
//     }
//     void display(){
//         cout<<"Person's Name: "<<name<<endl;
//         cout<<"Person's age : "<<age<<endl;
//     }
// };
// class Student:public Person{
//     int rno;
//     int marks;
//     public:
//     void input(){
//         Person::input();
//         cout<<"Enter Student RollNo.: ";
//         cin>>rno;
//         cout<<"Enter Student Marks: ";
//         cin>>marks;
//     }
//     void display(){
//         cout<<"******STUDENTS DETAILS*****"<<endl;
//         Person::display();
//         cout<<"Student Rollno: "<<rno<<endl;
//         cout<<"Student Marks: "<<marks<<endl;
//     }
// };
// int main(){
//     Student s;
//     s.input();
//     s.display();
//     return 0;
// }

//Define a class Vehicle with attributes brand and price. Derive a class Car that adds model and mileage. Display car details using single inheritance.
// #include<iostream>
// using namespace std;
// class Vehicle{
//     string brand;
//     double price;
// public:
//     Vehicle(string b,double p){
//         brand=b;
//         price=p;
//     }
//     void display(){
//         cout<<"Vehicle Brand:"<<brand<<endl;
//         cout<<"Vehicle Price:"<<price<<endl;
//     }
// };
// class Car:public Vehicle{
//     string model;
//     double mileage;
// public:
//     Car(string b,double p,string mo,double mi):Vehicle(b,p){
//         model=mo;
//         mileage=mi;
//     }
//     void display(){
//         Vehicle::display();
//         cout<<"Car Model:"<<model<<endl;
//         cout<<"Car Mileage:"<<mileage<<endl;
//     }
// };
// int main(){
//     Car c("TATA",100000,"Nano",14.5);
//     c.display();
//     return 0;
// }

//
// #include<iostream>
// using namespace std;
// class Employee{
//     int empid;
//     double sal;
//     public:
//     Employee(int i,int s){
//         empid=i;
//         sal=s;
//     }
//     void display(){
//         cout<<"Employee ID:"<<empid<<endl;
//         cout<<"Employee Salary:"<<sal<<endl;
//     }
// };
// class Manager:public Employee{
//     string dep;
//     public:
//     Manager(int i,int s,string d):Employee(i,s){
//         dep=d;
//     }
//     void display(){
//         Employee::display();
//         cout<<"Manager Department:"<<dep<<endl;
//     }
// };
// int main(){
//     Manager m(11,67000,"IT");
//     m.display();
//     return 0;
// }
//Shape class
// #include <iostream>
// using namespace std;
// class Shape {
// public:
//     virtual float area() = 0;
// };
// class Circle : public Shape {
//     float radius;
// public:
//     Circle(float r) {
//         radius = r;
//     }
//     float area() {
//         return 3.14 * radius * radius;
//     }
// };
// class Rectangle:public Shape {
//     int length, breadth;
// public:
//     Rectangle(int l, int b) {
//         length = l;
//         breadth = b;
//     }
//     float area() {
//         return length * breadth;
//     }
// };
// int main() {
//     Circle c(3.5);
//     Rectangle r(10, 4);
//     Shape *ptr1;
//     Shape *ptr2;
//     ptr1 = &c;
//     ptr2 = &r;
//     cout << "Area of Circle = " << ptr1->area() << endl;
//     cout << "Area of Rectangle = " << ptr2->area() << endl;
//     return 0;
// }

//class Student
// #include<iostream>
// using namespace std;
// class Person{
//     int id;
//     public:
//     Person(){
//         id=0;
//     }
//     Person(int i){
//         id=i;
//     }
//     void show(){
//         cout<<"Person ID: "<<id<<endl;
//     }
// };
// class Student:public Person{
//     string studentname;
//     public:
//     Student(){}
//     Student(int i,string s):Person(i){
//         studentname=s;
//     }
//     void show(){
//         Person::show();
//         cout<<"Student Name: "<<studentname<<endl;
//     }
// };
// class Exam:virtual public Student{
//     string examname;
//     public:
//     Exam(){}
//     Exam(int i,string s,string e):Student(i,s){
//         examname=e;
//     }
//     void show(){
//         Student::show();
//         cout<<"Exam Name: "<<examname<<endl;
//     }
// };
// class Sports:virtual public Student{
//     string sportsname;
//     public:
//     Sports(){}
//     Sports(int i,string s,string sp):Student(i,s){
//         sportsname=sp;
//     }
//     void show(){
//         cout<<"Sports Name: "<<sportsname<<endl;
//     }
// };
// class Result:public Exam,public Sports{
//     int rank;
//     public:
//     Result(){
//         rank=0;
//     }
//     Result(int i,string s,string e,string sp,int r):Student(i,s),Exam(i,s,e),Sports(i,s,sp){
//         rank=r;
//     }
//     void show(){
//         Exam::show();
//         Sports::show();
//         cout<<"Rank: #"<<rank<<endl;
//     }
// };
// int main(){
//     int id,rk;
//     string sname,ename,spname;
//     cout<<"Enter Person Id: ";
//     cin>>id;
//     cout<<"Enter Student Name: ";
//     cin>>sname;2
//     cout<<"Enter Exam Name: ";
//     cin>>ename;
//     cout<<"Enter Sports Name: ";
//     cin>>spname;
//     cout<<"Enter Rank: ";
//     cin>>rk;
//     Result r(id,sname,ename,spname,rk);
//     cout<<"***RESULT***"<<endl;
//     r.show();
//     return 0;
// }
//Create a class Account with attributes accountNumber and balance. Derive two classes: SavingsAccount and CurrentAccount with their specific features.
// #include<iostream>
// using namespace std;
// class Account{
// protected:
//     int accno;
//     double bal;
// public:
//     Account(int a,double b){
//         accno=a;
//         bal=b;
//     }
//     void show(){
//         cout<<"Account No: "<<accno<<endl;
//         cout<<"Balance: "<<bal<<endl;
//     }
// };
// class SavingsAccount:public Account{
// public:
//     SavingsAccount(int a,double b):Account(a,b){}
//     void interest(){
//         bal=bal+bal*5/100;
//     }
// };
// class CurrentAccount:public Account{
// public:
//     CurrentAccount(int a,double b):Account(a,b){}
//     void withdraw(double amount){
//         if(amount<=bal+5000)
//             bal=bal-amount;
//         else
//             cout<<"Withdrawal not possible"<<endl;
//     }
// };
// int main(){
//     SavingsAccount s(11,10000);
//     s.interest();
//     cout<<"Savings Account:"<<endl;
//     s.show();
//     CurrentAccount c(12,20000);
//     c.withdraw(12000);
//     cout<<"\nCurrent Account:"<<endl;
//     c.show();
//     return 0;
// }

//Define a base class Employee with virtual function calculateSalary(). Derive classes Manager and Developer, each calculating salary differently. Use a base class pointer to call correct functions.
// #include<iostream>
// using namespace std;
// class Employee{
// protected:
//     int salary;
// public:
//     Employee(int s){
//         salary=s;
//     }
//     virtual void calculateSalary(){
//         cout<<"Salary: "<<salary<<endl;
//     }
// };
// class Manager:public Employee{
// public:
//     Manager(int s):Employee(s){}
//     void calculateSalary(){
//         cout<<"Manager Salary: "<<salary+10000<<endl;
//     }
// };
// class Developer:public Employee{
// public:
//     Developer(int s):Employee(s){}
//     void calculateSalary(){
//         cout<<"Developer Salary: "<<salary+5000<<endl;
//     }
// };
// int main(){
//     Employee *e;
//     Manager m(50000);
//     e=&m;
//     e->calculateSalary();
//     Developer d(50000);
//     e=&d;
//     e->calculateSalary();
//     return 0;
// }

//Class Account
// #include<iostream>
// using namespace std;
// class Account{
// protected:
//     double bal;
// public:
//     Account(double b){
//         bal=b;
//     }
//     virtual void withdraw(double amount){
//         cout<<"Withdrawal"<<endl;
//     }
// };
// class SavingsAccount:public Account{
// public:
//     SavingsAccount(double b):Account(b){}
//     void withdraw(double amount){
//         if(bal-amount>=1000){
//             bal=bal-amount;
//             cout<<"Savings Withdrawal Successful"<<endl;
//             cout<<"Balance: "<<bal<<endl;
//         }
//         else
//             cout<<"Minimum balance required"<<endl;
//     }
// };

// class CurrentAccount:public Account{
// public:
//     CurrentAccount(double b):Account(b){}
//     void withdraw(double amount){
//         if(amount<=bal+5000){
//             bal=bal-amount;
//             cout<<"Current Withdrawal Successful"<<endl;
//             cout<<"Balance: "<<bal<<endl;
//         }
//         else
//             cout<<"Overdraft limit exceeded"<<endl;
//     }
// };
// int main(){
//     Account *a;
//     SavingsAccount s(10000);
//     a=&s;
//     a->withdraw(8500);
//     CurrentAccount c(10000);
//     a=&c;
//     a->withdraw(14000);
//     return 0;
// }

//
// #include<iostream>
// using namespace std;
// class Employee{
// public:
//     virtual void calculatePay()=0;
// };
// class HourlyEmployee:public Employee{
//     int hours,rate;
// public:
//     HourlyEmployee(int h,int r){
//         hours=h;
//         rate=r;
//     }
//     void calculatePay(){
//         cout<<"Hourly Pay: "<<hours*rate<<endl;
//     }
// };
// class SalariedEmployee:public Employee{
//     int salary;
// public:
//     SalariedEmployee(int s){
//         salary=s;
//     }
//     void calculatePay(){
//         cout<<"Salaried Pay: "<<salary<<endl;
//     }
// };
// int main(){
//     Employee *e;
//     HourlyEmployee h(8,500);
//     e=&h;
//     e->calculatePay();
//     SalariedEmployee s(50000);
//     e=&s;
//     e->calculatePay();
//     return 0;
// }

//Define an abstract class Shape with pure virtual function perimeter(). Derive Square and Circle that implement it.
// #include<iostream>
// using namespace std;
// class Shape{
// public:
//     virtual void perimeter()=0;
// };
// class Square:public Shape{
//     int side;
// public:
//     Square(int s){
//         side=s;
//     }
//     void perimeter(){
//         cout<<"Square Perimeter: "<<4*side<<endl;
//     }
// };
// class Circle:public Shape{
//     int r;
// public:
//     Circle(int x){
//         r=x;
//     }
//     void perimeter(){
//         cout<<"Circle Perimeter: "<<2*3.14*r<<endl;
//     }
// };
// int main(){
//     Shape *s;
//     Square sq(4);
//     s=&sq;
//     s->perimeter();
//     Circle c(5);
//     s=&c;
//     s->perimeter();
//     return 0;
// }
//TEACHER
#include<iostream>
using namespace std;
class Teacher{
    string subject;
    public:
    Teacher(string s){
        subject=s;
    }
    void show(){
        cout<<"Subject: "<<subject<<endl;
    }
};
class Researcher{
    string specialization;
    public:
    Researcher(string s){
        specialization=s;
    }
    void show(){
        cout<<"Specialization: "<<specialization<<endl;
    }
};
class Professor:public Teacher,public Researcher{
    public:
    Professor(string s,string sp):Teacher(s),Researcher(sp){}
    void show(){
        Teacher::show();
        Researcher::show();
    }
};
int main(){
    Professor p("Java","Advance Computing");
    p.show();
    return 0;
}