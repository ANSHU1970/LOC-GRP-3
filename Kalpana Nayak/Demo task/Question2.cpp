// Write a program to find a number is prime or not
#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
           count++;
        }
        
    }
    if(count==0){
        cout<<"PRIME";
    }
    else{
        cout<<"NOT PRIME";
    }
    return 0;
}