#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    if(age>=18){
        cout<<"Adult: You can vote"<<endl;
    }
    else{
        cout<<"Minor:You can't vote\n"<<endl;
    }
}