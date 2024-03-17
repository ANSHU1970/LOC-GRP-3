#include <iostream>
using namespace std;
int main()
{
int a;
cout<<"enter the year"<<endl;
cin>>a;
if ((a% 4 == 0 && a% 100 != 0) || (a % 400 == 0))
{
cout<<"its a leap year";
}
else
{
cout<<"its not a leap year";
}
return 0;
}
