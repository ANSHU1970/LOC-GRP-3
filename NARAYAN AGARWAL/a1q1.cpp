#include <iostream>
using namespace std;
int main()
{
int a=1;
while(a<=100)
{
if(a%3==0){
cout<<"Fizz"<<endl;
}
else if(a%5==0)
{
cout<<"Buzz"<<endl;
}
else
{
cout<<a<<endl;
}
a++;
}
return 0;
}