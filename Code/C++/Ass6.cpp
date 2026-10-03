//BankAccount
// #include<iostream>
// using namespace std;
// class BankAccount {
//     int accno;
//     string name;
//     int balance;
// public:
//     void deposit();
//     void withdraw();
// };
// void BankAccount::deposit(){
//     cout<<"Enter the account number: ";
//     cin>>accno;
//     cout<<"Enter Name: ";
//     cin>>name;
//     cout<<"Enter Bank Balance: ";
//     cin>>balance;
// }
// void BankAccount::withdraw(){
//     int w;
//     cout<<"Enter the value to withdrawn:";
//     cin>>w;
//     if(balance>= w){
//     cout<<"Money withdrawn successful"<<endl;}
//     else{
//     cout<<"Money withdrawn unsuccessful"<<endl;
//     }
// }
// int main(){
//     BankAccount c1,c2,c3;
//     c1.deposit();
//     c2.deposit();
//     c3.deposit();
//     cout<<" CUSTOMER 1 "<<endl;
//     c1.withdraw();
//     cout<<" CUSTOMER 2 "<<endl;
//     c2.withdraw();
//     cout<<" CUSTOMER 3 "<<endl;
//     c3.withdraw();
// }

// CAR //
// #include<iostream>
// using namespace std;
// class Car {
//     string brand;
//     string model;
//     string price;
// public:
//     void input(Car c[]);
//     void display(Car c[]);
// };
// void Car::input(Car c[]){
//      for(int i=0;i<5;i++) {
//         cout<<"\nEnter details of Car "<< i + 1 << endl;
//         cout << "Enter the Car Brand: ";
//         getline(cin,c[i].brand);
//         cout << "Enter the Car Model: ";
//         getline(cin,c[i].model);
//         cout << "Enter the Car Price: ";
//         getline(cin,c[i].price);
//     }
// }
// void Car::display(Car c[]){
//       for (int i = 0; i < 5; i++) {
//         cout << "\nCar " << i + 1 << endl;
//         cout << "Car Brand: " << c[i].brand << endl;
//         cout << "Car Model: " << c[i].model << endl;
//         cout << "Price: " << c[i].price << endl;
//     }
// }
// int main(){
//     Car c[5];
//     c[0].input(c);
//     c[0].display(c);
// }


//Student
// #include <iostream>
// using namespace std;
// class Student {
// private:
//     int rollno;
//     string name;
//     double marks;
// public:
//     void input();
//     void display();
//     void calculate();
// };

// void Student::input() {
//     cout << "\nEnter details of Student:" << endl;
//     cout << "Enter Student Roll Number: ";
//     cin >> rollno;
//     cout << "Enter Student Name: ";
//     cin >> name;
//     cout << "Enter Student Marks out of 100: ";
//     cin >> marks;
// }

// void Student::display() {
//     cout << "\n/// RESULT ///" << endl;
//     cout << "Student Roll No: " << rollno << endl;
//     cout << "Student Name: " << name << endl;
//     cout << "Student Marks: " << marks << endl;
// }
// void Student::calculate() {
//     if (marks >= 90) {
//         cout << "Grade: A" << endl;
//     }
//     else if (marks >= 75) {
//         cout << "Grade: B" << endl;
//     }
//     else if (marks >= 50) {
//         cout << "Grade: C" << endl;
//     }
//     else if (marks >= 40) {
//         cout << "Grade: D" << endl;
//     }
//     else {
//         cout << "YOU FAILED" << endl;
//     }
// }
// int main() {
//     Student s1, s2, s3;
//     s1.input();
//     s2.input();
//     s3.input();
//     cout << "\n STUDENT 1" << endl;
//     s1.display();
//     s1.calculate();
//     cout << "\n STUDENT 2" << endl;
//     s2.display();
//     s2.calculate();
//     cout << "\n STUDENT 3" << endl;
//     s3.display();
//     s3.calculate();
//     return 0;
// }

//Library Book
// #include<iostream>
// using namespace std;
// class LibraryBook{
//     int bookID;
//     string title, author;
//     bool available;
// public:
//     void input(){
//         cout<<"Enter Book ID: ";
//         cin>>bookID;
//         cout<<"Enter Title: ";
//         cin>>title;
//         cout<<"Enter Author: ";
//         cin>>author;
//         available=true;
//     }
//     void issueBook(){
//         if(available){
//             available=false;
//             cout<<"Book Issued Successfully"<<endl;
//         }
//         else
//             cout<<"Book Already Issued"<<endl;
//     }
//     void returnBook(){
//         if(!available){
//             available=true;
//             cout<<"Book Returned Successfully"<<endl;
//         }
//         else
//             cout<<"Book Already Available"<<endl;
//     }
//     void display(){
//         cout<<"\nBook ID: "<<bookID;
//         cout<<"\nTitle: "<<title;
//         cout<<"\nAuthor: "<<author;
//         cout<<"\nStatus: "<<(available?"Available":"Issued")<<endl;
//     }
// };

// int main(){
//     LibraryBook b;
//     b.input();
//     b.display();
//     b.issueBook();
//     b.display();
//     b.returnBook();
//     b.display();
//     return 0;
// }
//Employee class ??
// #include<iostream>
// using namespace std;
// class Employee{
//     string name, designation;
//     double salary;
// public:
//     void read(){
//         cout<<"Enter Employee Name: ";
//         cin>>name;
//         cout<<"Enter Employee Designation: ";
//         cin>>designation;
//         cout<<"Enter Employee Salary: ";
//         cin>>salary; }
//     double getSalary(){
//         return salary; }
//     void display(){
//         cout<<"\nName: "<<name;
//         cout<<"\nDesignation: "<<designation;
//         cout<<"\nSalary: "<<salary<<endl;  }
// };
// int main(){
//     int n;
//     cout<<"Enter number of Employees: ";
//     cin>>n;
//     Employee emp[n];
//     for(int i=0;i<n;i++)
//         emp[i].read();
//     int max=0;
//     for(int i=1;i<n;i++){
//         if(emp[i].getSalary()>emp[max].getSalary())
//             max=i;
//     }
//     cout<<"\nEmployee with Highest Salary:";
//     emp[max].display();
//     return 0;
// }

// CONSTRUCTORS
// CLASS RECTANGLE 
// #include<iostream>
// using namespace std;
// class Rectangle{
//     private:
//     int length;
//     int breadth;
//     public:
//     Rectangle(){
//         length=5;
//         breadth=4;
//     }
//     void area(){
//         int area = length*breadth;
//         cout<<"Area of Rectangle is: "<<" ";
//         cout<<area;
//     }
// };
// int main(){
//     Rectangle r;
//     r.area();
// }

//Laptop Class
// #include<iostream>
// using namespace std;
// class Laptop{
//     string brand;
//     string ram;
//     double price;
// public:
// Laptop(string b, string r, double p){
//          brand = b;
//          ram = r;
//          price = p;
//     }
// void display(){
//     cout<<"Laptop Brand Name: "<<brand<<endl;
//     cout<<"Laptop Ram: "<<ram<<endl;
//     cout<<"Laptop Price: "<<price<<endl;
//     }
// };
// int main(){
//     Laptop l("Asus","16GB",100000);
//     l.display();
// }

//Complex Class
// #include<iostream>
// using namespace std;
// class Complex{
//     int real;
//     int img;
// public:
//     Complex(int real, int img){
//         this->img = img;
//         this->real = real;
//     }
//     void add(Complex c1,Complex c2,Complex c3){
//         c3.real = c1.real + c2.real;
//         c3.img = c1.img + c2.img;
//         cout<<"Addition of two complex numbers: "<<c3.real<<"+"<<c3.img<<"i"<<endl;
//     }
// };
// int main(){
//     Complex c1(5,4);
//     Complex c2(8,9);
//     Complex c3(0,0);
//     c1.add(c1,c2,c3);
// }

// Flight Class
// #include<iostream>
// using namespace std;
// class Flight{
//     int fnum;
//     string src;
//     string des;
// public:
//    Flight(){
//     fnum = 5;
//     src = "Delhi";
//     des = "Mumbai";
//    }
//    void display(){
//    cout<<"Flight number: "<<fnum<<endl;
//    cout<<"Source: "<<src<<endl;
//    cout<<"Destination: "<<des<<endl;
//    }
// };
// int main(){
//     Flight f;
//     f.display();
// }
//Class HotelRoom
#include<iostream>
using namespace std;
class HotelRoom{
    int roomnum;
    string type;
    int rent;
public:
    HotelRoom(int roomnum, string type, int rent){
        this->roomnum = roomnum;
        this->type = type;
        this->rent = rent;
    }
    void display(){
        cout<<"Room Number: "<<roomnum<<endl;
        cout<<"Type: "<<type<<endl;
        cout<<"Rent: "<<rent<<endl;
    }
};
int main(){
    HotelRoom r1(101,"AC",2500);
    HotelRoom r2(102,"Non-AC",1800);
    r1.display();
    cout<<endl;
    r2.display();
    return 0;
}