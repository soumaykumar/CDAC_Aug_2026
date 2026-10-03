//Natural Numbers till 20.
// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i=1;i<=n;i++){
//         cout<<i<<" ";
//     }
// }
// int main(){
//     print(20);
// }

//Printing Natural Numbers till 20 in reverse order.
// #include<iostream>  
// using namespace std;
// void printreverse(int n){
//     for(int i=n;i>=1;i--){
//         cout<<i<<" ";
//     }
// }
// int main(){
//     printreverse(20);
// }

//Printing all even numbers from 1 to 20.
// #include<iostream>
// using namespace std;
// void printevennum(int n){
//     cout<<"Even numbers from 1 to "<<n<<" are: ";
//     for(int i=2;i<=n;i++){
//         if(i%2==0){
//             cout<<i<<" ";
//         }
//     }
// }
// int main(){
//     printevennum(20);
// }

//Printing all odd numbers from 1 to 20.
// #include<iostream>  
// using namespace std;
// void printoddnum(int n){
//     cout<<"Odd numbers from 1 to "<<n<<" are: ";
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             cout<<i<<" ";
//         }
//     }
// }
// int main(){
//     printoddnum(20);
// }

//Adding all numbers from 1 to 20
// #include<iostream>
// using namespace std;    
// void addnum(int n){
//     int sum=0; 
//     for(int i=1;i<=n;i++){
//         sum= sum+i;
//     }
//     cout<<"Sum of numbers from 1 to "<<n<<" is: "<<sum;
// }
// int main(){
//     addnum(20);
// }

//Adding all even numbers from 1 to 20
// #include<iostream>  
// using namespace std;
// void sumevennum(int n){
//     int sum=0;
//     for(int i=2;i<=n;i++){
//         if(i%2==0){
//             sum=sum+i;
//         }
//     }
//     cout<<"Sum of all even numbers from 1 to "<<n<<" is: "<<sum;
// }
// int main(){
//     sumevennum(20);
// }

//Adding all odd numbers from 1 to 20
// #include<iostream>  
// using namespace std;
// void sumoddnum(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             sum=sum+i;
//         }
//     }
//     cout<<"Sum of all odd numbers from 1 to "<<n<<" is: "<<sum;
// }
// int main(){
//     sumoddnum(20);
// }

//Multplication table of a number
// #include<iostream>
// using namespace std;
// void multiplynum(int n){
//     int result;
//     for(int i=1;i<=n;i++){
//         result = i*n;
//         cout<<n<<"X"<<i<<"="<<result<<"  ";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     multiplynum(n);
// }

//Factorial of a number
// #include<iostream>
// using namespace std;
// void fact(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;}
//         cout<<"Factorial of "<<n<<": "<<fact<<endl;
//     }
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     fact(n);
// }

//Checking prime number
// #include <iostream>
// using namespace std;
// void checkprimenum(int n){
//     int flag = 0;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             flag = 1;
//         }
//     }
//     if(flag==0)
//         cout<<n<<" is a prime number";
//     else
//         cout<<n<<" is not prime number";
// }
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     checkprimenum(n);
// }
//Sum of all digits of a number and print
// #include<iostream>
// using namespace std;
// void digitsum(int num){
//     int digit;
//     int sum=0;
//     while(num > 0){
//         digit=num % 10;
//         cout<<digit<<" ";

//         sum=sum+digit;
//         num=num/10;
//     }
//     cout<<endl;
//     cout<<"Sum= "<<sum;
// }
// int main(){
//     int num;
//     cout<<"Enter number: ";
//     cin>>num;
//     digitsum(num);
//     return 0;
// }
//Print Reverse a number
// #include<iostream>
// using namespace std;
// int reversenum(int num){
//     int result =0;
//     while(num>0){
//         int digit= num%10;
//         result = result*10 + digit;
//         num =num/10;
//     }
//     return result;
// }
//     int main(){
//     int num; int result=0;
//     cout<<"Enter the number:";
//     cin>>num;
//     cout<<"Reversed number :"<<reversenum(num);
// }

//Print Armstrong or not
// #include<iostream>
// using namespace std;
// int main(){
// }

//Print Fibonacci
// #include<iostream>
// using namespace std;
// void fib(int num){ 
//     int sum=0;
//     int s1=0,s2=1;
//     for(int i=1;i<=num;i++){
//         cout<<s1<<endl;;
//         sum=s1+s2;
//         s1=s2;
//         s2=sum;
//     }
// }
// int main(){
//     int num;
//     cout<<"Enter the size of the series: ";
//     cin>>num;
//     fib(num);
// }

//Print Palindrome or not
// #include<iostream>
// using namespace std;
// int reversenum(int num)
// {   int result = 0;
//     while(num > 0)
//     {
//         int digit = num % 10;
//         result = result * 10 + digit;
//         num = num / 10;
//     }
//     return result;
// }
// int main()
// {
//     int num;
//     cout << "Enter the number: ";
//     cin >> num;
//     int result = reversenum(num);
//     if(num == result)
//     {
//         cout << "Number is Palindrome";
//     } 
//     else
//     {
//         cout << "Number is not Palindrome";
//     }
//     return 0;
// }

//Pattern 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of rows:";
//     cin>>n;
//     cout<<"//PATTERN//"<<endl;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//      cout<<endl;
//     }
//     return 0;
// }

//Pattern 2
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter number of rows : ";
//     cin >> n;
//     cout<<"//PATTERN//"<<endl;
//     for(int i=1;i<=n;i++){
//      for(int k=1;k<=(n-i);k++){
//         cout<<" ";
//     }
//      for(int j=1;j<=i;j++){
//          cout << "*";
//     }
//         cout << endl;
//    }
// }

////Pattern 3
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of rows:";
//     cin>>n;
//     cout<<"//PATTERN//"<<endl;
//     for(int i=0;i<n;i++){  
//         for(int j=1;j<=(n-i);j++){  
//         cout<<" ";
//     }
//         for(int j=0;j<=i;j++){
//         cout<<"*";
//     }
//         for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//      cout<<endl;
//    }
// }
//Pattern 4 
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;
//     cout<<"//PATTERN//"<<endl;
//     for(int i=1;i<=2*n-1;i++){
//       cout << "*";
//     }
//     cout << endl;
//     for(int i=n-1;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=2*(n-i)-1;j++) {
//             cout << " ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
//Pattern 5
// #include<iostream>
// using namespace std;
// int main(){
//     int ch;
//     int n;
//     cout<<"Enter number of rows:";
//     cin>>n;
//     cout<<"//PATTERN//"<<endl;
//     for(int i=n;i>=1;i--){
//     int ch=65;
//     for(int j=1;j<=i;j++){
//         cout<<(char)ch++;
//     }
//     cout<<endl;
//     }
// }

//Pattern 6
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;
//     cout<<"//PATTERN//"<<endl;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//     cout<<endl;
//     }
// }

//Pattern 7
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;
//     cout<<"//PATTERN//"<<endl;
//     for(int i=1;i<=2*n-1;i++){
//       cout << "*";
//     }
//     cout << endl;
//     for(int i=n-1;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=2*(n-i)-1;j++) {
//             cout << " ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
//PATTERN 8
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter number of rows: ";
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         cout << char('A' + i - 1);
//     }
//     for(int j=n-1; j>=1; j--){
//         cout << char('A' + j - 1);
//     }
//     cout << endl;
//     for(int i=n-1; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout << char('A' + j - 1);
//         }
//         for(int j=1; j<=2*(n-i)-1; j++){
//             cout << " ";
//         }
//         for(int j=i; j>=1; j--){
//             cout << char('A' + j - 1);
//         }
//     cout << endl;
//     }
// }

//Armstrong number
// #include<iostream>
// using namespace std;
// int reverse(int n){
//     int result=0;
//     while(n>0){
//         int digit=n%10;
//         result=result*10+digit;
//         n=n/10;
//     }
//     return result;
// }
// int main(){
//     int n,i,sum=0;
//     cout<<"Enter number:";
//     cin>>n;
//     i=n;
//     while(n>0){
//         int digit=n%10;
//         sum=sum+(digit*digit*digit);
//         n=n/10;
//     }
//     if(sum==i)
//         cout<<"Number is Armstrong";
//     else
//         cout<<"Number is not Armstrong";
// }