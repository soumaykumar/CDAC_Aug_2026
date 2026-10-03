//swap two numbers
// #include <iostream>
// using namespace std;
// void input(int *a, int *b){
//     cout<<"Enter value of a: ";
//     cin>>*a;

//     cout<<"Enter value of b: ";
//     cin>>*b;
// }
// void swap(int *a, int *b){
//     *a = *a + *b;
//     *b = *a - *b;
//     *a = *a - *b;
// }
// int main(){
//     int a,b;
//     input(&a,&b);
//     cout<<"Before Swapping:"<<endl;
//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b<<endl;
//     swap(&a,&b);
//     cout<<"After Swapping:"<<endl;
//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b<<endl;
// }

//Reads array of marks and display highest marks.
// #include <iostream>
// using namespace std;
// // Read array
// void read(int arr[], int n) {
//      cout << "Enter marks out of 100"<<": "<<endl;
//     for (int i = 0; i < n; i++) {
//         cout <<"Student"<< i + 1 << ": ";
//         cin >> arr[i];
//     }
// }
// // Find highest mark
// int highest(int *arr, int n) {
//     int max = *arr;
//     for (int i = 1; i < n; i++) {
//         if (*(arr + i) > max) {
//             max = *(arr + i);
//         }
//     }
//     return max;
// }

// int main(){
//     int n;
//     cout<<"Enter number of students: ";
//     cin>> n;
//     int marks[n];
//     read(marks, n);
//     cout<<"Highest mark = "<<highest(marks, n)<<endl;
// }

//traverse a string and count the number of vowels
// #include <iostream>
// #include <string>
// using namespace std;
// int countvowels(string &str){
//     int count = 0;
//     char *ptr = &str[0];
//     for(int i = 0; i < str.length(); i++) {
//         if (*ptr == 'a'||*ptr == 'e'||*ptr == 'i'||*ptr == 'o'||*ptr == 'u'||*ptr == 'A'||*ptr == 'E'||*ptr == 'I'||*ptr == 'O'||*ptr == 'U') {
//             count++;
//         }
//         ptr++;
//     }
//     return count;
// }
// int main() {
//     string str;
//     cout << "Enter the string: ";
//     getline(cin, str);
//     cout << "Number of vowels = " << countvowels(str)<<endl;
//     return 0;
// }

//Reverse an array using pointer.
// #include <iostream>
// using namespace std;
// void input(int *arr, int n) {
//     cout << "Enter the elements of array:" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> *(arr + i);
//     }
// }
// void reverse(int *arr, int n) {
//     for (int i = 0; i < n / 2; i++) {
//         int temp = *(arr + i);
//         *(arr + i) = *(arr + n - 1 - i);
//         *(arr + n - 1 - i) = temp;
//     }
// }
// void display(int *arr, int n) {
//     cout << "Reversed array: ";
//     for (int i = 0; i < n; i++) {
//         cout << *(arr + i) << " ";
//     }
//     cout << endl;
// }
// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;
//     int arr[n];
//     input(arr, n);
//     reverse(arr, n);
//     display(arr, n);
//     return 0;
// }

//Dynamical allocates memory for a student array using new ,input marks and find average marks.
// #include<iostream>
// using namespace std;
// void input(int *a, int n) {
//     cout << "Enter Marks of Student out of 100:"<<endl;
//     for (int i = 0; i < n; i++) {
//         cin >> *(a + i);
//     }
// }
// double average(int *a, int n) {
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += *(a + i);
//     }
//     return (double)sum / n;
// }

// int main(){
//     int n;
//     cout<<"Enter the number of students: ";
//     cin>>n;
//     int *marks = new int[n];
//     input(marks, n);
//     cout << "Average Marks of Student: "<<average(marks, n)<< endl;
//     delete[] marks;
//     return 0;
// }

//COPY STRING
// #include<iostream>
// using namespace std;
// void stringcopy(const char* src, char* des) {
//     while (*src != '\0') {
//         *des = *src;
//         src++;
//         des++;
//     }
//     *des = '\0';
// }
// int main() {
//     const char* src = "Soumay";
//     char des[100];
//     stringcopy(src, des);
//     cout << "Copied String is: " << des;
   
// }
// A program to swap two arrays of equal size using pointers.
// #include<iostream>
// using namespace std;
// void input(int *a, int *b, int n){
//     cout<<"Enter elements of first array:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>*(a+i);
//     }
//     cout<<"Enter elements of second array:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>*(b+i);
//     }
// }
// void swap(int *a, int *b, int n){
//     for(int i=0;i<n;i++){
//         int temp = *(a+i);
//         *(a+i) = *(b+i);
//         *(b+i) = temp;
//     }
// }
// void display(int *a, int *b, int n){
//     cout<<"First array after swapping: ";
//     for(int i=0;i<n;i++){
//         cout<<*(a+i)<<" ";
//     }
//     cout<<endl;
//     cout<<"Second array after swapping: ";
//     for(int i=0;i<n;i++){
//         cout<<*(b+i)<<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter size of arrays: ";
//     cin>>n;
//     int a[n],b[n];
//     input(a,b,n);
//     swap(a,b,n);
//     display(a,b,n);
// }
//Write a program that uses a pointer to display the address and value of each element in an integer array.
// #include<iostream>
// using namespace std;
// void input(int *a,int n){
//     cout<<"Enter elements of array:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>*(a+i);
//     }
// }
// void display(int *a,int n){
//     cout<<"Values of Elements in the given array are: ";
//     for(int i=0;i<n;i++){
//         cout<<*(a+i)<<" ";
//     }
//     cout<<endl;
//     cout<<"Address of each element in the given array are: ";
//     for(int i=0;i<n;i++){
//         cout<<(a+i)<<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"Size of array is:"<<" ";
//     cin>>n;
//     int a[n];
//     input(a,n);
//     display(a,n);
// }
//Write a program to allocate memory for storing n student names dynamically using pointers.
// #include<iostream>
// using namespace std;
// void input(string *p, int n){
//     cout<<"Enter student names:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>*p;
//         cout<<"Student "<<i+1<<": "<<*p<<endl;
//     }  
// }
// int main(){
//     int n;
//     cout<<"Enter the number of students: ";
//     cin>>n;
//     string *p = new string;
//     input(p,n);
//     delete p;
// }
//write a program that uses a pointer to count how many positive and negative numbers are present in an array.
// #include<iostream>
// using namespace std;
// void input(int *a, int n){
//     cout << "Enter the numbers:" << endl;
//     for(int i = 0; i < n; i++){
//         cin >> *(a + i);
//     }
// }
// void count(int *a, int n, int *positive, int *negative){
//     for(int i = 0; i < n; i++){
//         if(*(a + i) >= 0)
//             (*positive)++;
//         else
//             (*negative)++;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the size of the numbers array: ";
//     cin>>n;
//     int *a= new int[n];
//     input(a,n);
//     int positive = 0, negative = 0;
//     count(a, n, &positive, &negative);
//     cout << "Number of positive numbers: " << positive << endl;
//     cout << "Number of negative numbers: " << negative << endl;
//     delete[] a;
//     return 0;
// }
