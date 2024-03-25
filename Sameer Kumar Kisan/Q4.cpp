#include<iostream>
using namespace std;
int main(){
    int yr;
    cout<<"Enter your year: "<<endl;
    cin>>yr;
    if(yr%4==0){
        cout<<yr<<" is a leap year"<<endl;
    }
    else{
        cout<<yr<<" is not a leap year\n"<<endl;
    }
}