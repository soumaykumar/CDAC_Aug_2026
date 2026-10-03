// Complex Class
// #include<iostream>
// using namespace std;

// class Complex{
//     int real;
//     int img;
// public:
//     Complex(){
//         real=0;
//         img=0;
//     }
//     Complex(int r,int i){
//         real=r;
//         img=i;
//     }
//     Complex operator+(const Complex &c){
//         Complex t;
//         t.real=real+c.real;
//         t.img=img+c.img;
//         return t;
//     }
//     void add(){
//         cout<<"Addition: "<<real<<" + "<<img<<"i"<<endl;
//     }
// };
// int main(){
//     Complex c1(10,20);
//     Complex c2(5,10);
//     Complex c3=c1+c2;
//     c3.add();
//     return 0;
// }

//class Distance
// #include<iostream>
// using namespace std;
// class Distance{
//     int feet;
//     int inches;
// public:
//     Distance(){
//         feet=0;
//         inches=0;
//     }
//     Distance(int f,int i){
//         feet=f;
//         inches=i;
//     }
//     Distance operator+(const Distance& d){
//         Distance t;
//         t.feet=feet+d.feet;
//         t.inches=inches+d.inches;
//         if(t.inches>=12){
//             t.feet=t.feet+t.inches/12;
//             t.inches=t.inches%12;
//         }
//         return t;
//     }
//     void show(){
//         cout<<"Distance: "<<feet<<" feet "<<inches<<" inches"<<endl;
//     }
// };
// int main(){
//     Distance d1(5,8);
//     Distance d2(7,9);
//     Distance d3=d1+d2;
//     d3.show();
//     return 0;
// }

//String Class
// #include<iostream>
// using namespace std;
// class String{
//     char str[100];
// public:
//     String(char s[]){
//         int i=0;
//         while(s[i]!='\0'){
//             str[i]=s[i];
//             i++;
//         }
//         str[i]='\0';
//     }
//     bool operator==(String s){
//         int i=0;

//         while(str[i]!='\0' || s.str[i]!='\0'){
//             if(str[i]!=s.str[i])
//                 return false;
//             i++;
//         }
//         return true;
//     }
// };
// int main(){
//     char a[100],b[100];
//     cout<<"Enter first string: ";
//     cin>>a;
//     cout<<"Enter second string: ";
//     cin>>b;
//     String s1(a);
//     String s2(b);
//     if(s1==s2)
//         cout<<"Strings are equal";
//     else
//         cout<<"Strings are not equal";
//     return 0;
// }
//MATRIX CLASS
// #include<iostream>
// using namespace std;
// class Matrix{
//     int r,c;
//     int a[10][10];
// public:
//     void input(){
//         cin>>r>>c;
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 cin>>a[i][j];
//             }
//         }
//     }
//     Matrix operator*(Matrix m){
//     Matrix t;
//     if(c!=m.r){
//         cout<<"Matrix multiplication not possible";
//         t.r=0;
//         t.c=0;
//         return t;
//     }
//     t.r=r;
//     t.c=m.c;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<m.c;j++){
//             t.a[i][j]=0;
//             for(int k=0;k<c;k++){
//                 t.a[i][j]+=a[i][k]*m.a[k][j];
//             }
//         }
//     }
//     return t;
// }
//     void show(){
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++)
//                 cout<<a[i][j]<<" ";
//             cout<<endl;
//         }
//     }
// };
// int main(){
//     Matrix m1,m2,m3;
//     cout<<"Enter first matrix rows,columns and elements:"<<endl;
//     m1.input();
//     cout<<"Enter second matrix rows,columns and elements:"<<endl;
//     m2.input();
//     m3=m1*m2;
//     cout<<"Result:"<<endl;
//     m3.show();
//     return 0;
// }

//Fraction Class
// #include<iostream>
// using namespace std;
// class Fraction{
//     int num;
//     int deno;
// public:
//     Fraction(){
//         num=0;
//         deno=1;
//     }
//     Fraction(int n,int d){
//         num=n;
//         deno=d;
//     }
//     Fraction operator+(const Fraction &f){
//         Fraction t;
//         t.num=num*f.deno+f.num*deno;
//         t.deno=deno*f.deno;
//         return t;
//     }
//     void show(){
//         cout<<num<<"/"<<deno;
//     }
// };
// int main(){
//     Fraction f1(1,2);
//     Fraction f2(3,4);
//     Fraction f3=f1+f2;
//     f3.show();
//     return 0;
// }

//BankAccount Class
// #include<iostream>
// using namespace std;
// class BankAccount{
//     int balance;
// public:
//     BankAccount(int balance){
//         this->balance = balance;
//     }
//     bool operator>(BankAccount b){
//         return balance > b.balance;
//     }
// };
// int main(){
//     BankAccount a1(50000);
//     BankAccount a2(40000);
//     if(a1 > a2)
//         cout<<"Account 1 has more balance";
//     else
//         cout<<"Account 2 has more balance";
//     return 0;
// }

//A class Time has hours and minutes. Overload the ++ operator to increment time by one minute.
// #include<iostream>
// using namespace std;
// class Time{
//     int hrs;
//     int mins;
// public:
//     Time(int h,int m){
//         hrs=h;
//         mins=m;
//     }
//     void operator++(){
//         mins++;
//         if(mins==60){
//             mins=0;
//             hrs++;
//         }
//     }
//     void display(){
//         cout<<hrs<<" hours "<<mins<<" minutes";
//     }
// };
// int main(){
//     Time t(11,59);
//     cout<<"Before increment: ";
//     t.display();
//     ++t;
//     cout<<"\nAfter increment: ";
//     t.display();
//     return 0;
// }

//Vector
// #include<iostream>
// using namespace std;
// class Vector{
//     int x,y,z;
// public:
//     Vector(int x,int y,int z){
//         this->x=x;
//         this->y=y;
//         this->z=z;
//     }
//     Vector operator-(Vector v){
//         Vector t(0,0,0);
//         t.x= x-v.x;
//         t.y= y-v.y;
//         t.z= z-v.z;
//         return t;
//     }
//     void display(){
//         cout<<"("<<x<<","<<y<<","<<z<<")";
//     }
// };
// int main(){
//     Vector v1(8,6,4);
//     Vector v2(3,2,1);
//     Vector v3=v1-v2;
//     cout<<"Result: ";
//     v3.display();
//     return 0;
// }

//Total marks
// #include<iostream>
// using namespace std;
// class Marks{
//     int total;
// public:
//     Marks(int total){
//         this->total=total;
//     }
//     void operator+=(int marks){
//         total+=marks;
//     }
//     void display(){
//         cout<<"New Total Marks: "<<total;
//     }
// };
// int main(){
//     int total,marks;
//     cout<<"Enter total marks: ";
//     cin>>total;
//     Marks m(total);
//     cout<<"Enter new marks: ";
//     cin>>marks;
//     m+=marks;
//     m.display();
//     return 0;
// }

//Create a class Book with price. Overload the < opera-tor to compare book prices.
#include<iostream>
using namespace std;
class Book{
    int price;
public:
    void input(){
        cin>>price;
    }
    bool operator<(Book b){
        return price<b.price;
    }
};
int main(){
    Book b1,b2;
    cout<<"Enter price of Book 1: ";
    b1.input();
    cout<<"Enter price of Book 2: ";
    b2.input();
    if(b1<b2)
        cout<<"Book 1 is cheaper";
    else
        cout<<"Book 2 is cheaper";
    return 0;
}