//Define a structure Date with day, month, year. Write a program to check if the given date is valid or not.
// #include <iostream>
// using namespace std;
// struct Date {
//     int day;
//     int month;
//     int year;
// };
// int main() {
//     Date d;
//     cout<<"Enter day month year: "<<endl;
//     cin >> d.day >> d.month >> d.year;
//     if (d.month < 1 || d.month > 12)
//         cout<<"Invalid Date";
//     else if (d.day < 1 || d.day > 31)
//         cout<<"Invalid Date";
//     else if ((d.month == 4||d.month == 6||d.month == 9||d.month == 11) &&d.day > 30)
//         cout<<"Invalid Date";
//     else if (d.month == 2 && d.day > 29)
//         cout<<"Invalid Date";
//     else
//         cout<<"Valid Date";
//     return 0;
// }
// Create a structure Car with company, model, and price. Input details of cars and display all cars with price < 5 lakh
// #include<iostream>
// using namespace std;
// struct Car{
//     string company;
//     string model;
//     double price;
// };
// void input(Car &c){
//     cout<<"Enter Car Company: "<<endl;
//     cin>>c.company;
//     cout<<"Enter Car Model: "<<endl;
//     cin>>c.model;
//     cout<<"Enter Car Price: "<<endl;
//     cin>>c.price;
// }
// void display(Car c){
//     if(c.price < 500000){
//         cout<<"Car Company: "<<c.company<<endl;
//         cout<<"Car Model: "<<c.model<<endl;
//         cout<<"Car Price: "<<c.price<<endl;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter number of cars: ";
//     cin>>n;
//     Car c[n];
//     for(int i=0; i<n; i++){
//         cout<<"\nCar "<<i+1<<endl;
//         input(c[i]);
//     }
//     cout<<"\nCars with price less than 5 lakh:\n";
//     for(int i=0; i<n; i++){
//         display(c[i]);
//     }
//     return 0;
// }

//Define a structure BankAccount with account number, name, and balance. Display details of customers with balance less than ₹1000.
// #include<iostream>
// using namespace std;
// struct BankAccount {
//     int accno;
//     string name;
//     double balance;
// };
// void input(BankAccount &b) {
//     cout<<"Enter Account Number: ";
//     cin>>b.accno;
//     cout<<"Enter Name: ";
//     cin>>b.name;
//     cout<<"Enter Balance: ";
//     cin>>b.balance;
// }
// void display(BankAccount &b) {
//     if(b.balance < 1000) {
//         cout<<"Account Number: "<<b.accno<<endl;
//         cout<<"Name: "<<b.name<<endl;
//         cout<<"Balance: "<<b.balance<<endl;
//     }
// }
// int main() {
//     int n;
//     cout<<"Enter number of customers: ";
//     cin>>n;
//     BankAccount b[n];
//     for(int i=0; i<n; i++) {
//         cout<<"\nCustomer "<<i+1<<endl;
//         input(b[i]);
//     }
//     cout<<"\nCustomers with balance less than 1000:\n";

//     for(int i=0; i<n; i++) {
//         display(b[i]);
//     }

//     return 0;
// }
// Write a program using structure Movie (title, director, rating). Display the highest-rated movie.
// #include<iostream>
// using namespace std;
// struct Movie{
//     string title;
//     string director;
//     double rating;
// };
// void input(Movie &m){
//     cout<<"Enter Movie Title: "<<endl;
//     cin>>m.title;
//     cout<<"Enter Movie Director: "<<endl;
//     cin>>m.director;
//     cout<<"Enter Movie Rating: "<<endl;
//     cin>>m.rating;
// }
// void display(Movie m){
//     cout<<"Movie Title:"<<m.title<<" ";
//     cout<<"Movie Director:"<<m.director<<" ";
//     cout<<"Movie Rating:"<<m.rating;
// }
// int main(){
//     Movie m1,m2;
//     input(m1);
//     input(m2);
//     if(m1.rating>m2.rating){
//         display(m1);
//     }
//     else{
//         display(m2);
//     }
// }
//Define a structure Library with book id, title,and status (issued/available). Create functions to issue and return a book
// #include<iostream>
// using namespace std;
// struct Library {
//     int bookid;
//     string title;
//     string status;
// };
// void input(Library &b) {
//     cout<<"Enter Book ID: ";
//     cin>>b.bookid;
//     cout<<"Enter Title: ";
//     cin>>b.title;
//     b.status = "Available";
// }
// void display(Library &b) {
//     cout<<"Book ID: "<<b.bookid<<endl;
//     cout<<"Title: "<<b.title<<endl;
//     cout<<"Status: "<<b.status<<endl;
// }
// void issue(Library &b) {
//     if(b.status == "Available") {
//         b.status = "Issued";
//         cout<<"Book Issued Successfully"<<endl;
//     }
//     else {
//         cout<<"Book is already issued"<<endl;
//     }
// }
// void returnBook(Library &b) {
//     if(b.status == "Issued") {
//         b.status = "Available";
//         cout<<"Book Returned Successfully"<<endl;
//     }
//     else {
//         cout<<"Book is already available"<<endl;
//     }
// }
// int main() {
//     int n, id;
//     cout<<"Enter number of books: ";
//     cin>>n;
//     Library b[n];
//     for(int i=0; i<n; i++) {
//         cout<<"\nBook "<<i+1<<endl;
//         input(b[i]);
//     }
//     cout<<"\nBook Details:\n";
//     for(int i=0; i<n; i++) {
//         display(b[i]);
//     }
//     cout<<"\nEnter Book ID to issue: ";
//     cin>>id;
//     for(int i=0; i<n; i++) {
//         if(b[i].bookid == id) {
//             issue(b[i]);
//         }
//     }
//     cout<<"\nAfter Issue:\n";

//     for(int i=0; i<n; i++) {
//         display(b[i]);
//     }
//     cout<<"\nEnter Book ID to return: ";
//     cin>>id;

//     for(int i=0; i<n; i++) {
//         if(b[i].bookid == id) {
//             returnBook(b[i]);
//         }
//     }
//     cout<<"\nAfter Return:\n";

//     for(int i=0; i<n; i++) {
//         display(b[i]);
//     }
//     return 0;
// }