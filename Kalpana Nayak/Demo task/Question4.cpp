// Write a program to find a given year is leap year or not
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a year:"<<endl;
    cin>>year;
    if((year%4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
        cout<<"The Inputted year is a LEAP YEAR";
    }
    else{
        cout<<"The inputted year is NOT a LEAP YEAR";
    }
}