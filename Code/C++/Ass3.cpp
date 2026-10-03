// Highest Lowest
// #include<iostream>
// using namespace std;
// void input(int*arr){
//     cout<<"Enter prices of items:"<<endl;
//     for(int i=0;i<10;i++){
//         cin>>arr[i];
//     }
// }
// void Check(int *arr){
//     int h; int l;
//     h=arr[0];
//     l=arr[0];
//     for(int i=1;i<10;i++){
//         if(arr[i]>h){
//             h =arr[i];
//         }
//         else if(arr[i]<l){
//             l=arr[i];
//         }
//     }
//     cout<<"Highest priced item is "<<h<<endl;
//     cout<<"Lowest price item is "<<l<<endl;
// }
// int main(){
//     int arr[10];
//     input(arr);
//     Check(arr);
// }

//Calculate marks
// #include<iostream>
// using namespace std;
// void input(int *arr){
//     cout<<"Enter Marks of Subjects out of 100: "<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
// }
// void calculate(int *arr){
//     int total =500; int StudentTotalMarks=0;
//     int Average, Percentage;
//     for(int i=0;i<5;i++){
//     StudentTotalMarks = arr[i] + StudentTotalMarks;}
//      Average = StudentTotalMarks/5;
//      cout<<"Average of Student Marks: "<<Average<<endl;
//      Percentage = StudentTotalMarks/5;
//      cout<<"Student Percentage is "<<Percentage<<"%";
// }

// int main(){
//     int arr[5];
//      input(arr);
//      calculate(arr);
// }

//City names reverse
// #include<iostream>
// using namespace std;
// void input(string *arr){
//     cout<<"Enter 5 cities"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
// }
// void reverse(string *arr){
//     cout<<"Cities in reverse order are: "<<endl;
//     for(int i=4;i>=0;i--){
//         cout<<arr[i]<<endl;
//     }
// }
    
// int main(){
//     string arr[5];
//     input(arr);
//     reverse(arr);
// }

//Cricket team
// #include <iostream>
// using namespace std;
// void input(int *arr)
// {
//     cout << "Runs Scored in matches:" << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cin >> arr[i];
//     }
// }
// int calculateavg(int *arr){
//     int sum = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         sum += arr[i];
//     }
//     return sum / 10;
// }
// int main(){
//     int arr[10];
//     input(arr);
//     int average = calculateavg(arr);
//     cout << "Average runs: " << average << endl;
// }

//Count Even or odd numbers in 20 number array
// #include<iostream>
// using namespace std;    
// void input(int *arr){
//     cout<<"Enter the numbers: "<<endl;
//     for(int i=0;i<20;i++){
//         cin>>arr[i];
//     }
// }
// void count(int *arr){
//     int count=0;
//     for(int i=0;i<20;i++){
//         if(arr[i]%2 == 0){
//             count++;
//         }
//     }
//     cout<<"Total even numbers: "<<count<<endl;
//     cout<<"Total odd numbers: "<<(20-count)<<endl;
// }
// int main(){
//     int arr[20];
//     input(arr);
//     count(arr);
// }

//Search an element in array
// #include <iostream>
// using namespace std;
// void input(int *arr,int n){
//     cout<<"Enter the elements of array:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
// }
// }
// void search(int*arr, int n){
//     int num;
//     cout<<"Enter the number to be searched:"<<endl;
//     cin>>num;
//     int flag=0;
//     int count=0;
//     for(int i=0;i<n;i++){
//     if(arr[i]==num){
//         flag=1;
//         count++;
//         } }
//     if(flag==1){
//         cout<<num<<" is present "<<count<<" times"<<endl;
//     }
//     else{
//         cout<<"Number is not found"<<endl;
//     }
//     }
// void swap(int&a,int&b){
//     a= a+b;
//     b=a-b;
//     a= a-b;  
// }
// int main(){
//     int num;
//     cout<<"Enter the number of elements:"<<endl;
//     cin>>num;
//     int arr[num];
//     input(arr,num);
//     search(arr,num);
// }


// //Sorting an array
// #include <iostream>
// using namespace std;
// void input(int *arr,int n){
//     cout<<"Enter the elements of array:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
// }
// }
// void display(int*arr, int n)
// {
//      cout<<"Sorted array is "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;}
// }
// void swap(int&a,int&b){
//     a= a+b;
//     b=a-b;
//     a= a-b;
// }
// void sort(int* arr, int n){
//     for(int i=0;i<n;i++){
//         for(int i=0;i<n;i++){
//             if(arr[i]>arr[i+1]){
//                 swap(arr[i],arr[i+1]);
//             }
            
//         }
//     }
// }
// int main(){
//     int num;
//     cout<<"Enter the number of elements:"<<endl;
//     cin>>num;
//     int arr[num];
//     input(arr,num);
//     sort(arr,num);
//     display(arr,num);
// }

//Merge two arrays into third array
// #include<iostream> 
// using namespace std;
// void input(int*a, int*b, int m, int n){
//     cout<<"Enter the elements of 1st array: "<<endl;
//     for(int i=0;i<m;i++){
//         cin>>a[i];
//     }
//     cout<<"Enter the elements of 2nd array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>b[i];
//     }
// }
// void display(int*c, int m, int n){
//     cout<<"Merged array is: "<<endl;
//     for(int i=0;i<m+n;i++){
//         cout<<c[i]<<" ";
//     }
// }
// void merge(int*a, int*b, int*c, int m, int n){
//     for(int i=0;i<m;i++){
//         c[i]=a[i];
//     }
//     for(int i=0;i<n;i++){
//         c[m+i]=b[i];
//     }
// }
// int main(){
//     int m; int n;
//     cout<<"Enter the size of 1st array: "<<endl;
//     cin>>m;
//     cout<<"Enter the size of 2nd array: "<<endl;
//     cin>>n;
//     int a[m]; int b[n]; int c[m+n];
//     input(a,b,m,n);
//     merge(a,b,c,m,n);
//     display(c,m,n);
// }

//Student highest scorer
// #include <iostream>
// using namespace std;
// void input(int *arr){
//     cout<<"Enter the marks of students: "<<" "<<endl;
//     for(int i=0;i<30;i++){
//         cin>>arr[i];
//     }
// }
// void highest(int *arr){
//     int h=arr[0];
//     for(int i=1;i<30;i++){
//         if(arr[i]>h){
//             h=arr[i];
//         }
//     }
//     cout<<"Highest marks scored by student is: "<<h<<endl;
// }
// int main(){
//     int arr[30];
//     input(arr);
//     highest(arr);
// }

// Temperature of 7 days
// #include <iostream>
// using namespace std;
// void input(int *arr){
//     cout<<"Enter the temperature of 7 days: "<<endl;
//     for(int i=0;i<7;i++){
//         cin>>arr[i];
//     }
// }
// void checktemp(int *arr){
//     int h=arr[0];
//     int l=arr[0];
//     for(int i=1;i<7;i++){
//         if(arr[i]>h){
//             h=arr[i];
//         }
//         else if(arr[i]<l){
//             l=arr[i];
//         }
//     }
//     cout<<"Hottest day is "<<h<<" Degree Celsius"<<endl;
//     cout<<"Coldest day is "<<l<<" Degree Celsius"<<endl;
// }
// int main(){
//     int arr[7];
//     input(arr);
//     checktemp(arr);
// }

//Add 2 matrices
// #include <iostream>
// using namespace std;    
// void input(int *arr, int m, int n){
//     cout<<"Enter the elements of matrix: "<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i*n+j];
//         }
//     }
// }
// int main(){

//Multply 2 matrices

////Basic String Handling
//Vowels and Consonants using string
// #include <iostream>
// using namespace std;
// void input(string &s){
//     cout<<"Enter the string: "<<endl;
//     getline(cin,s);
// }
// void count(string s){
//     int v=0; int c=0;
//     for(int i=0;i<s.length();i++){
//        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
//             v++;
//        }
//        else{
//             c++;
//        }
//     }
//     cout<<"Total vowels are: "<<v<<endl;
//     cout<<"Total consonants are: "<<c<<endl;
// }
// int main(){
//     string s;
//     input(s);
//     count(s);
// }

//Palindrome using string
// #include <iostream>
// using namespace std;    
// void input(string &s){
//     cout<<"Enter the string: "<<endl;
//     getline(cin,s);
// }
// void check(string s){
//     string rev;
//     for(int i=0;s[i]!='\0';i++){
//         rev+=s[i];
//     }
//     if(s==rev){
//         cout<<"String is Palindrome"<<endl;
//     }
//     else{
//         cout<<"String is not Palindrome"<<endl;
//     }
// }
// int main(){
//     string s;
//     input(s);
//     check(s);
// }

//Length of string without using string.length() function
// #include <iostream>
// using namespace std;
// void input(string &s){
//     cout<<"Enter the string: "<<endl;
//     getline(cin,s);
// }
// void strlen(string s){
//     int count=0;
//     for(int i=0;s[i]!='\0';i++){
//         count++;
//     }
//     cout<<"Length of string is: "<<count<<endl;
// }
// int main(){
//     string s;
//     input(s);
//     strlen(s);
// }

//Lowercase to uppercase in string
// #include <iostream>
// using namespace std;
// void input(string &s){
//     cout<<"Enter the string: "<<endl;
//     getline(cin,s);
// }
// void LowertoUppercase(string &s){
//     for(int i=0;i<s.length();i++){
//         if(s[i]>='a' && s[i]<='z'){
//             s[i]=s[i]-'a'+'A';
//         }
//     }
//     cout<<"String in uppercase is: "<<s<<endl;
// }

// int main(){
//     string s;
//     input(s);
//     LowertoUppercase(s);
// }

//Reverse a string without using a inbuilt function
// #include <iostream>
// using namespace std;    
// void input(string &s){
//     cout<<"Enter the string: "<<endl;
//     getline(cin,s);
// }
// void reverse(string &s){
//     string rev;
//     for(int i=0;s[i]!='\0';i++){
//         rev=s[i]+rev;
//     }
//     cout<<"Reversed string is: "<<rev<<endl;
// }
// int main(){
//     string s;
//     input(s);
//     reverse(s);
// }

////STRING OPERATIONS
//Concatenation
// #include<iostream>
// using namespace std;
// void input(string &s1, string &s2){
//     cout<<"Enter the first string: "<<endl;
//     getline(cin,s1);
//     cout<<"Enter the second string: "<<endl;
//     getline(cin,s2);
// }
// void concat(string s1,string s2){
//     string result = s1;
//     for(int i=0; s2[i]!='\0'; i++){
//         result += s2[i];
//     }
//     cout << "Concatenated string: " << result << endl;
// }
// int main(){
//     string s1,s2;
//     input(s1,s2);
//     concat(s1,s2);
// }

//Checks Strings equal or not 
// #include<iostream>
// using namespace std;
// void input(string &s1, string &s2){
//     cout<<"Enter the first string: "<<endl;
//     getline(cin,s1);
//     cout<<"Enter the second string: "<<endl;
//     getline(cin,s2);
// }
// void check(string s1, string s2){
//     if(s1==s2){
//         cout<<"Strings are equal"<<endl;
//     }
//     else{
//         cout<<"Strings are not equal"<<endl;
//     }
// }
// int main(){
//     string s1,s2;
//     input(s1,s2);
//     check(s1,s2);
// }

//Write a program to count the number of words in a given string.
// #include <iostream>
// using namespace std;
// void input(string &s){
//     cout<<"Enter the string: "<<endl;
//     getline(cin,s);
// }
// void count(string s){
//     int count=0;
//     for(int i=0;i<s.length();i++){
//         if(s[i]==' ' && s[i+1]!=' '){
//             count++;
//         }
//     }
//     cout<<"Total number of words in the string is: "<<count+1<<endl;
// }
// int main(){
//     string s;
//     input(s);
//     count(s);
// }

//Input a sentence and count how many times a particular character occurs.
// #include <iostream>
// using namespace std;
// void input(string &s){
//     cout<<"Enter the string: "<<endl;    
//     getline(cin,s);  
// }
// void count(string s){
//     char ch;
//     cout<<"Enter the character to be counted: "<<endl;
//     cin>>ch;
//     int count=0;
//     for(int i=0;i<s.length();i++){
//         if(s[i]==ch){
//             count++;
//         }
//     }
//     cout<<"The character '"<<ch<<"' occurs "<<count<<" times in the string."<<endl;
// }
// int main(){
//     string s;
//     input(s);
//     count(s);
// }

//Input a string and replace all spaces with -.
// #include <iostream>
// using namespace std;
// void input(string &s){
//     cout<<"Enter the string: "<<endl;    
//     getline(cin,s);  
// }
// void replace(string &s){
//     for(int i=0;i<s.length();i++){
//         if(s[i] ==' '){
//             s[i]='-';
//         }
//     }
//     cout<<"String after replacing:"<<s<<endl;
// }
// int main(){
//     string s;
//     input(s);
//     replace(s);
// }

//A library wants to store book titles. Write a program to search for a book by its title.
// #include <iostream>
// using namespace std;
// void input(string *arr, int n){
//     cout<<"Enter the titles of books: "<<endl;
//     for(int i=0;i<n;i++){
//         getline(cin,arr[i]);
//     }
// }
// void search(string *arr, int n){
//     string title;
//     cout<<"Enter the title of the book to search: "<<endl;
//     getline(cin,title);
//     int flag=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==title){
//             flag=1;
//         }
//     }
//     if(flag==1){
//         cout<<"Book Found"<<endl;
//     }
//     else{
//         cout<<"Book Not Found"<<endl;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the number of books: "<<endl;
//     cin>>n;
//     string arr[n];
//     input(arr,n);
//     search(arr,n);
// }

//A school wants to generate student IDs by combining first three letters of name + roll number. Write a program to generate IDs without string fucntions.
// #include<iostream>
// using namespace std;

// void generateID(string name, int rno){
//     cout<<"Student ID: ";
//     for(int i=0;i<3;i++){
//         cout<<name[i];
//     }
//     cout<<rno;
// }

// int main(){
//     string name;
//     int rno;
//     cout<<"Enter name: ";
//     getline(cin, name);
//     cout << "Enter roll number: ";
//     cin >> rno;
//     generateID(name, rno);
// }

//Input a full name and print only the initials.
// #include <iostream>
// using namespace std;
// void input(string &name){
//     cout<<"Enter full name: "<<endl;
//     getline(cin,name);
// }
// void print(string name){
//     cout<<"Initials: ";
//     for(int i=0;i<name.length();i++){
//         if(i==0 || name[i-1]==' '){
//             cout<<name[i]<<".";
//         }
//     }
// }
// int main(){
//     string name;
//     input(name);
//     print(name);
// }

//A password system requires:
//  At least 8 characters
//  At least one digit
//  At least one special character
// Write a program to check whether the entered password is valid.
// #include <iostream>
// using namespace std;
// void input(string &password){
//     cout<<"Enter the password: "<<endl;
//     getline(cin,password);
// }
// void passwordcheck(string password){
//     int flag=0;{
//         for(int i=0;i<password.length();i++){
//             if(password[i]>='0' && password[i]<='9'||(password[i]>='!'&&password[i]<='/')||(password[i]>=':'&&password[i]<='@') || (password[i]>='['&&password[i]<='`')||(password[i]>='{'&&password[i]<='~')){
//                 flag=1;
//             }
//         }
//     }
//     if(flag==1){
//         cout<<"Password is valid"<<endl;
//     }
//     else{ 
//         cout<<"Password is invalid"<<endl;
//     }
// }

// int main(){
//     string password;
//     input(password);
//     passwordcheck(password);
// }

//A social media app wants to count the number of hashtags (#) and mentions (@) in a post.
// #include <iostream>
// using namespace std;
// void input(string &post){
//     cout<<"Enter the post: "<<endl;
//     getline(cin,post);
// }
// void count(string post){
//     int hashtag=0; int mention=0;
//     for(int i=0;i<post.length();i++){
//         if(post[i]=='#'){
//             hashtag++;
//         }
//         else if(post[i]=='@'){
//             mention++;
//         }
//     }
//     cout<<"Total hashtags: "<<hashtag<<endl;
//     cout<<"Total mentions: "<<mention<<endl;
// }
// int main(){
//     string post;
//     input(post);
//     count(post);
// }

//Add 2 matrices
// #include<iostream>
// using namespace std;
// void memoryallocation(int**&a,int rows,int cols){
//     a=new int*[rows];
//     for(int i=0;i<rows;i++){
//         (a)[i]=new int[cols];
//     }
// }
// void input(int**a,int rows,int cols){
//     cout<<"Enter the elements of matrix: "<<endl;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin>>*(*(a+i)+j);
//         }
//     }
// }
// void display(int**a,int rows,int cols){
//     cout<<"The matrix is: "<<endl;
//     cout<<"[";
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<*(*(a+i)+j)<<" ";
//         }
//     }
//     cout<<"]"<<endl;
// }
// void sum(int**a1,int**a2,int rows,int cols){
//     cout<<"The sum of two matrices is: "<<endl;
//     cout<<"[";
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<*(*(a1+i)+j)+*(*(a2+i)+j)<<" ";
//         }
//     }
//     cout<<"]"<<endl;
// }
// void deleteArray(int**&a,int rows){
//     for(int i=0;i<rows;i++){
//         delete[] a[i];
//     }
//     delete[] a;
//     a=nullptr;
// }
// int main(){
//     int rows,cols;
//     cout<<"Enter the number of rows: ";
//     cin>>rows;
//     cout<<"Enter the number of columns: ";
//     cin>>cols;
//     int**a1; int**a2;
//     memoryallocation(a1,rows,cols);
//     memoryallocation(a2,rows,cols);
//     input(a1,rows,cols);
//     input(a2,rows,cols);
//     display(a1,rows,cols);
//     display(a2,rows,cols);
//     sum(a1,a2,rows,cols);
//     deleteArray(a1,rows);
//     deleteArray(a2,rows);
// }

//Multiply 2 matrices
// #include<iostream>
// using namespace std;
// void memoryallocation(int**&a,int rows,int cols){
//     a=new int*[rows];
//     for(int i=0;i<rows;i++){
//         a[i]=new int[cols];
//     }
// }
// void input(int**a,int rows,int cols){
//     cout<<"Enter the elements of matrix: "<<endl;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin>>*(*(a+i)+j);
//         }
//     }
// }
// void display(int**a,int rows,int cols){
//     cout<<"[";
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<*(*(a+i)+j)<<" ";
//         }
//     }
//     cout<<"]"<<endl;
// }

// void multiply(int**a1,int**a2,int rows,int cols){
//     cout<<"The multiplied matrix is: "<<endl;
//     cout<<"[";
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<*(*(a1+i)+j) * *(*(a2+i)+j)<<" ";
//         }
//     }
//     cout<<"]"<<endl;
// }
// void deleteArray(int**&a,int rows){
//     for(int i=0;i<rows;i++){
//         delete[] a[i];
//     }
//     delete[] a;
//     a=nullptr;
// }

// int main(){
//     int rows,cols;
//     cout<<"Enter the number of rows: ";
//     cin>>rows;
//     cout<<"Enter the number of columns: ";
//     cin>>cols;
//     int**a1;
//     int**a2;
//     memoryallocation(a1,rows,cols);
//     memoryallocation(a2,rows,cols);
//     input(a1,rows,cols);
//     input(a2,rows,cols);
//     cout<<endl<<"First matrix:"<<endl;
//     display(a1,rows,cols);
//     cout<<endl<<"Second matrix:"<<endl;
//     display(a2,rows,cols);
//     multiply(a1,a2,rows,cols);
//     deleteArray(a1,rows);
//     deleteArray(a2,rows);
// }