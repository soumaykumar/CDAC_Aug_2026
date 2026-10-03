//Print 1 to N.
// #include<iostream>
// using namespace std;
// void print(int N){
//     if(N>0){    
//          print(N-1);
//          cout<<N<<" ";  
//     }
// }
// int main(){
//     int N;
//     cout<<"Enter N numbers:";
//     cin>>N;
//     print(N);
//     return 0;
// }

// //Print N to 1
// #include<iostream>
// using namespace std;
// void print(int N){
//     if(N>0){    
//          cout<<N<<" ";  
//          print(N-1);
//     }
// }
// int main(){
//     int N;
//     cout<<"Enter N numbers:";
//     cin>>N;
//     print(N);
//     return 0;
// }

//Power(x,n) using recursion
// #include<iostream>
// using namespace std;
// void power(int x, int n ,int p=1){
//     if(n>0){
//         p= p*x;
//         power(x,n-1,p);
//     }
//     else
//    cout<<p;
// }
// int main(){
//     int x; int n;
//     cout<<"Enter x:";
//     cin>>x;
//     cout<<"Enter n:";
//     cin>>n;
//     cout << "Power of x to n is:";
//     power(x,n);
// }
//Reverse a string using recursion

// #include <iostream>
// using namespace std;
// void reversestr(string str, int i) {
//     if (i >= 0) {
//         cout << str[i];
//         reversestr(str, i - 1);
//     }
// }

// int main() {
//     string str;
//     cout << "Enter the String: ";
//     cin >> str;
//     cout << "Reversed string is: ";
//     reversestr(str, str.length() - 1);
// }

//Check if a string is a palindrome
// #include<iostream>
// using namespace std;
// bool palindrome(string s,int i,int j){
//     if(i>=j)
//         return true;
//     if(s[i]!=s[j])
//         return false;
//     return palindrome(s,i+1,j-1);
// }
// int main(){
//     string s;
//     cout<<"Enter string: ";
//     cin>>s;
//     if(palindrome(s,0,s.length()-1))
//         cout<<"Palindrome";
//     else
//         cout<<"Not Palindrome";
//     return 0;
// }
// //Sum of array elements
// #include <iostream>
// using namespace std;
// int sum(int arr[], int n){
//     if(n==0)
//         return 0;
//     return arr[n-1]+sum(arr,n-1);
// }
// int main(){
//     int arr[5] = {3,2,4,5,6};
//     cout<<"Sum = "<<sum(arr, 5);
//     return 0;
// }

// //Maximun
// #include <iostream>
// using namespace std;
// int maximum(int arr[],int n){
//     if(n==1)
//         return arr[0];
//     int max =maximum(arr,n-1);
//     if(arr[n - 1] > max)
//         return arr[n - 1];
//     else
//         return max;
// }
// int main(){
//     int arr[5] = {10, 50, 20, 80, 30};
//     cout<<"Maximum = "<<maximum(arr, 5);
//     return 0;
// }

// //Perform linear search using recursion
// #include<iostream>
// using namespace std;
// void search(int arr[],int n,int i,int x){
//     if(i==n){
//         cout<<"Element not found";
//         return;
//     }
//     if(arr[i]==x){
//         cout<<"Element found";
//         return;
//     }
//     search(arr,n,i+1,x);
// }
// int main(){
//     int n;
//     int arr[100];
//     cout<<"Enter size: ";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     cin>>arr[i];
//     int x;
//     cout<<"Enter element to search: ";
//     cin>>x;
//     search(arr,n,0,x);
//     return 0;
// }

// //Count
// #include<iostream>
// using namespace std;
// int count(int n){
//     if(n==0)
//         return 0;
//     return 1+count(n/10);
// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"Number of digits: "<<count(n);
//     return 0;
// }
// //Sum of digits of a number
// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0)
//         return 0;
//     return n%10+sum(n/10);
// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"Sum of digits: "<<sum(n);
//     return 0;
// }
// //Subsequence of an array
// #include<iostream>
// using namespace std;
// void subsequence(int arr[],int n,int i,int ans[],int j){
//     if(i==n){
//         for(int k=0;k<j;k++)
//             cout<<ans[k]<<" ";
//         cout<<endl;
//         return;
//     }
//     ans[j]=arr[i];
//     subsequence(arr,n,i+1,ans,j+1);
//     subsequence(arr,n,i+1,ans,j);
// }
// int main(){
//     int arr[3]={1,2,3};
//     int ans[3];
//     subsequence(arr,3,0,ans,0);
//     return 0;
// }

// //Count total number of subsequences
// #include<iostream>
// using namespace std;
// int count(int n){
//     if(n==0)
//         return 1;
//     return 2*count(n-1);
// }
// int main(){
//     int arr[3]={1,2,3};
//     cout<<"Total subsequences: "<<count(3);
//     return 0;
// }

//All Substring of a string
// #include<iostream>
// using namespace std;
// void substring(string s,int i,int j){
//     if(i==s.length())
//         return;
//     if(j==s.length()){
//         substring(s,i+1,0);
//         return;
//     }
//     for(int k=i;k<=j;k++)
//         cout<<s[k];
//     cout<<endl;
//     substring(s,i,j+1);
// }
// int main(){
//     string s;
//     cout<<"Enter string: ";
//     cin>>s;
//     substring(s,0,0);
//     return 0;
// }

//Permutation
// #include<iostream>
// using namespace std;
// void permutation(string s,int i){
//     if(i==s.length()){
//         cout<<s<<endl;
//         return;
//     }
//     for(int j=i;j<s.length();j++){
//         swap(s[i],s[j]);
//         permutation(s,i+1);
//         swap(s[i],s[j]);
//     }
// }
// int main(){
//     string s;
//     cout<<"Enter string: ";
//     cin>>s;
//     permutation(s,0);
//     return 0;
// }

//Given sum K
// #include<iostream>
// using namespace std;
// int count(int arr[],int n,int i,int sum,int K){
//     if(i==n){
//         if(sum==K)
//             return 1;
//         return 0;
//     }
//     return count(arr,n,i+1,sum+arr[i],K)+count(arr,n,i+1,sum,K);
// }
// int main(){
//     int arr[4]={1,2,3,4};
//     int K=5;
//     cout<<"Count of subsequence: "<<count(arr,4,0,0,K);
//     return 0;
// }
//tower of hanoi
#include<iostream>
using namespace std;
void hanoi(int n,char a,char b,char c){
    if(n==1){
        cout<<"Move disk from "<<a<<" to "<<c<<endl;
        return;
    }
    hanoi(n-1,a,c,b);
    cout<<"Move disk from "<<a<<" to "<<c<<endl;
    hanoi(n-1,b,a,c);
}
int main(){
    int n;
    cout<<"Enter number of disks: ";
    cin>>n;
    hanoi(n,'A','B','C');
    return 0;
}
