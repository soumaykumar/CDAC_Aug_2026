// // Swapping
// #include<iostream>
// using namespace std;
// template<class T> T swapvalues(T &a, T &b){
//       T Temp;
//       Temp=a;
//       a=b;
//       b=Temp;
// }
// int main(){
//     int a=5; int b=6;
//     swapvalues(a,b);
//     cout<<"Integers swapped:"<<a<<" "<<b<<endl;
//     float p=5.5f; float q= 6.5f;
//     cout<<"Floating point swapped:"<<p<<" "<<q<<endl;
//     string x="SOUMAY";string y="KUMAR";
//     swapvalues(x,y);
//     cout<<"String Swapped:"<<x<<" "<<y<<endl;
//     return 0;
// }

// //Create a function template findMax() that returns the maximum of three values.
// #include<iostream>
// using namespace std;
// template<class T> T findMax(T &x, T &y, T &z){
//     T max;
//     if(x>y && x>z){
//         max = x;
//     }
//     else if(y>x && y>z){
//         max = y;
//     }
//     else
//         max = z;
// }
// int main(){
//     int x,y,z;
//     cout<<"Enter x:"<<endl;
//     cin>>x;
//     cout<<"Enter y:"<<endl;
//     cin>>y;
//     cout<<"Enter z:"<<endl;
//     cin>>z;
//     cout<<"Max Value:"<<findMax(x,y,z);
// }

// Write a class template Calculator<T> with functions to perform addition, subtraction, multiplication, and division.
// #include<iostream>
// using namespace std;
// template<class T> T Calculator(T &x , T &y, char op){
//     switch(op){
//     case '+':
//         return x+y;
//     case '-':
//         return x-y;
//     case '*':
//         return x*y;
//     case '/':
//         return x/y;
//    default:
//       cout<<"Invalid operator"<<endl;
//       return 0;
//     }
// }
// int main(){
//     int x=10; int y=5;
//     cout<<"Addition:"<<Calculator(x,y,'+')<<endl;
//     cout<<"Substraction:"<<Calculator(x,y,'-')<<endl;
//     cout<<"Multiplication:"<<Calculator(x,y,'*')<<endl;
//     cout<<"Divison:"<<Calculator(x,y,'/')<<endl;
// }

// //Create a function template searchElement() that searches for an element in an array of any data type.
// #include<iostream>
// using namespace std;
// template<class T>
//  T searchElement(T a[],int n,T num){
//     bool found= false;
//       for (int i = 0; i < n; i++) {
//         if (a[i] == num) {
//             cout << num << " is available at index " << i << endl;
//             found = true;
//             break;
//         }
//     }
//         if(!found){
//          cout<<"Number not available"<<endl;
//         }
// }
//  int main(){
//     int a[]={1,5,7,8,9,11,13};
//     int num;
//     cout<<"Enter the number to be searched:"<<endl;
//     cin>>num;
//     searchElement(a,7,num);
//     return 0;
//  }

// //Write a class template Stack<T> with push, pop, and display functions. Demonstrate with integers and strings.
// #include<iostream>
// using namespace std;
// template<class T>
// class Stack{
//     T a[5];
//     int top;
//     public:
//     Stack(){
//         top=-1;
//     }
//     void push(T x){
//         a[++top]=x;
//     }
//     void pop(){
//         if(top>=0)
//             top--;
//     }
//     void display(){
//         for(int i=top;i>=0;i--)
//             cout<<a[i]<<" ";
//         cout<<endl;
//     }
// };
// int main(){
//     Stack<int>s1;
//     s1.push(10);
//     s1.push(20);
//     s1.push(30);
//     cout<<"Integer Stack: ";
//     s1.display();
//     s1.pop();
//     s1.display();
//     Stack<string>s2;
//     s2.push("Advance");
//     s2.push("Computing");
//     cout<<"String Stack: ";
//     s2.display();
// }
// Implement a template class Array<T> with functionalities: insert, delete, and display elements. 
// #include<iostream>
// using namespace std;
// template<class T>
// class Array{
//     T a[10];
//     int n=0;
//     public:
//     void insert(T x){
//         a[n++]=x;
//     }
//     void del(){
//         n--;
//     }
//     void display(){
//         for(int i=0;i<n;i++)
//             cout<<a[i]<<" ";
//     }
// };
// int main(){
//     Array<int>a;
//     a.insert(10);
//     a.insert(20);
//     a.insert(30);
//     a.display();
//     cout<<endl;
//     a.del();
//     a.display();
// }
//STL
//CONTAINERS:
//Write a program using vector to store and display integers. 
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector<int> numbers;
//     int n, value;
//     cout << "Enter the number of integers: ";
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cout << "Enter integer " << i + 1 << ": ";
//         cin >> value;
//         numbers.push_back(value);
//     }
//     cout << "\nThe integers are: ";
//     for (int num : numbers) {
//         cout << num << " ";
//     }
//     return 0;
// }

//Use list to create a list of student names. Insert and delete names dynamically.
// #include <iostream>
// #include <list>
// using namespace std;
// int main() {
//     list<string> names {"Soumay","Rohit","Rakesh"};
//     cout << "List Elements: ";
//     for(string names :names) {
//         cout << names<<", ";
//     }
//     names.push_front("Tanmay");
//     names.push_back("Sagar");
//     cout << endl << "Updated List: ";
//     for(string names : names) {
//         cout << names << ", ";
//     }
//     names.pop_front();
//     names.pop_back();
//     return 0;
//     cout << endl << "Final List: ";
//     for(string names : names) {
//         cout << names << ", ";
//     }
// }

// //Write a program using map to store roll number and student name pairs. Display them.
// #include<iostream>
// #include<map>
// using namespace std;
// int main() {
//     map<int, string> student;
// 	   student.insert(make_pair(11,"Soumay"));
// 	   student.insert(make_pair(10,"Messi"));
//     student.insert(make_pair(7,"Dhoni"));
//     for(auto i:student){
//     cout<<"Roll No.: "<<i.first<<" Student Name: "<<i.second<<endl;
//     }
// 	return 0;
// }

//Create a program using set to store unique numbers entered by the user.
// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     set<int>Numbers;
//     int n,x;
//     cout<<"Enter number of elements: ";
//     cin>>n;
//     cout<<"Enter numbers: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         Numbers.insert(x);
//     }
//     cout<<"Unique numbers: ";
//     for(int x:Numbers){
//         cout<<x<<" ";
//     }
//     return 0;
// }

//Use multimap to store book titles with multiple authors.
// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     multimap<string,string>Books;
//     string b,a;
//     int n;
//     cout<<"Enter number of books: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<"Enter Book Title and Author: "<<endl;
//         cin>>b>>a;
//         Books.insert({b,a});
//     }
//     for(auto x:Books){
//         cout<<x.first<<" - "<<x.second<<endl;
//     }
// }
//STACK REVERSE A STRING
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     string s;
//     stack<char>st;
//     cout<<"Enter String: ";
//     cin>>s;
//     cout<<"Reversed String: ";
//     for(char c:s)
//         st.push(c);
//     while(!st.empty()){
//         cout<<st.top();
//         st.pop();
//     }
// }
// //QUEUE TICKET BOOKING SYSTEM
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     queue<string>ticket;
//     string name;
//     int n;
//     cout<<"Enter number of customers: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<"Enter customer name: ";
//         cin>>name;
//         ticket.push(name);
//     }
//     cout<<"Ticket Booking Order:\n";
//     while(!ticket.empty()){
//         cout<<ticket.front()<<endl;
//         ticket.pop();
//     }
// }

// Iterators & Algorithms
// Use iterators to traverse a vector and display elements.
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v={3,6,7,8,9,11};
//     vector<int> ::iterator itr;
//     cout<<"Elements are:";
//     cout<<"{";
//     for(itr= v.begin();itr<v.end();itr++){
//         cout<<*itr<<" ";
//     }
//     cout<<"}";
//     return 0;
// }


// // Write a program to sort a vector of integers using sort() algorithm.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v={1,4,9,2,11,6,7,22};
//     sort(v.begin(),v.end());
//     cout << "Sorted vector of integers: ";
//     for (int value : v) {
//         cout << value << ' ';
//     }
// }


// // Demonstrate use of find() to locate an element in a list.
// #include<iostream>
// #include<list>
// #include<algorithm>
// using namespace std;
// int main(){
//     list<int>l={10,20,30,40,50};
//     int e;
//     cout<<"Enter element to find: ";
//     cin>>e;
//     list<int>::iterator itr;
//     itr=find(l.begin(),l.end(),e);
//     if(itr!=l.end())
//         cout<<"Found";
//     else
//         cout<<"Not Found";
// }


// Use count() algorithm to count occurrences of a character in a string (stored in vector).
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<string> v={"AdvanceComputing"};
//     char c;
//     cout<<"Enter the character to be counted: ";
//     cin>>c;
//     int n = count(v[0].begin(),v[0].end(),c);
//     cout<<"Character '"<<c<<"' occurred "<<n<<" times in the string";
// }

// RTTI (Run-Time Type Information)
// Create a base class Animal and derived classes Dog and Cat. Use typeid to display the type of object at runtime.
// #include<iostream>
// #include<typeinfo>
// using namespace std;
// class Animal{};
// class Dog:public Animal{};
// class Cat:public Animal{};
// int main(){
//     Dog d;
//     Cat c;
//     cout<<"Type of d: "<<typeid(d).name()<<endl;
//     cout<<"Type of c: "<<typeid(c).name()<<endl;
// }



// Write a program to use dynamic_cast to safely cast a base class pointer to a derived class pointer.
// #include<iostream>
// using namespace std;
// class Person{
//     public:
//     virtual void show(){}
// };
// class Student:public Person{
//     public:
//     void study(){
//         cout<<"Student is studying";
//     }
// };
// int main(){
//     Person *p=new Student;
//     Student *s=dynamic_cast<Student*>(p);
//     if(s)
//         s->study();
//     else
//         cout<<"Cast failed";
// }

// Demonstrate a program where typeid is used to compare types of two objects.
// #include<iostream>
// #include<typeinfo>
// using namespace std;
// class Student{
// };
// class Exam{
// };
// int main(){
//     Student s;
//     Exam e;
//     if(typeid(s)==typeid(e)){
//         cout<<"Same Type";
//     }
//     else
//         cout<<"Different Type";
// }

//
// #include<iostream>
// #include<typeinfo>
// using namespace std;
// class Person{
//     public:
//     virtual void show(){}
// };
// class Student:public Person{
//     public:
//     void study(){
//         cout<<"Student is studying"<<endl;
//     }
// };
// int main(){
//     Person *p;
//     Student s;
//     p=&s;
//     cout<<"Type: "<<typeid(*p).name()<<endl;
//     Student *s1=dynamic_cast<Student*>(p);
//     if(s1)
//         s1->study();
//     else
//         cout<<"Cast failed";
// }