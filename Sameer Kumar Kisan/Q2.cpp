#include<iostream>
using namespace std;
int main(){
    int a,count;
    cout<<"Enter a natural number: "<<endl;
    cin>>a;
    for(int i=1;i<=a;i++){
        a%i==0;
        count=+1;
    }
    if(count==2){
        cout<<"The no is prime"<<endl;
    }
    else{
        cout<<"The no is composite"<<endl;
    }
}