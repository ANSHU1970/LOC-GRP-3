#include <iostream>
using namespace std;
int main()
{
double a,b,s;
char c;
cout<<"enter the number"<<endl;
cin>>a;
cout<<"enter the number"<<endl;
cin>>b;
cout<<"enter the arithmetic operation symbol"<<endl;
cin>>c;
switch(c)
{
case '+':
              s=a+b;
              cout<<"sum is ="<<s;
              break;
case '-':
              s=a-b;
              cout<<"difference is ="<<s;
              break;
case '*':
              s=a*b;
              cout<<"product is ="<<s;
              break;
case '/':
              s=a/b;
              cout<<"result is ="<<s;
              break;
default: 
             cout<<"invalid output ";
             break;
}
return 0;
}