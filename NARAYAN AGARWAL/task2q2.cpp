#include <iostream>
using namespace std;
int main()
{
int a,i,c=0;
cout<<"enter the number"<<endl;
cin>>a;
for(i=1;i<=a;i++)
{
if(a%i==0)
{
c++;
}
}
if(c==2)
{
cout<<a<<"is prime number"<<endl;
}
else
{
cout<<a<<"is not a prime number"<<endl;
}
return 0;
}
