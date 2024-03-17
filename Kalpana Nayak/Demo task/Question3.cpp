// Write a program to take age as user input and print he/she can vote or not
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter age:"<<endl;
    cin>>n;
    if(n>=18){
        cout<<"You can Vote";
    }
    else{
        cout<<"You can not Vote";
    }
}