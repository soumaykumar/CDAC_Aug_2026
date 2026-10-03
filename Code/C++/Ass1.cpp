#include<iostream>
using namespace std;
int main(){
    int a ,b;       // a & b are the two numbers
    cout<< "Enter two numbers :";
    cin>>a>>b;
    if(a>b){
        cout <<"First number is largest"<<endl; }
    else if(b>a){
    cout<<"Second number is largest"<<endl; }
   else{
   cout<<"Both numbers are equal"<<endl; }
   return 0;
}
