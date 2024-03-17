// Write a program to find a number is even or odd
#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter a number:"<<endl;
   cin>>n;
   if(n%2 == 0)
   {
    cout<<"The inputted number is EVEN";
   }
   else{
    cout<<"The inputted number is ODD";
   }
}