#include <iostream>
using namespace std;
int main()
{
int a,b,s=0;
cout<<"enter the number"<<endl;
cin>>a;
do{
b=a%10;
s+=b;
a/=10;
}while(a>0);
cout<<"sum ="<<s<<endl;
return 0;
}