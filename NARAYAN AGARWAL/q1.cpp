#include<iostream>
using namespace std;
int main()
{
	int a,b,c=0;
	cout<<"enter the size of array"<<endl;
	cin>>a;
	int ar[a];
	cout<<"enter array elements"<<endl;
	for(int i=0;i<a;i++)
	{
		cin>>ar[i];
	}
	cout<<"enter the number to be checked"<<endl;
	cin>>b;
	for(int j=0;j<a;j++)
	{
		if(ar[j]==b)
		{
			c++;
		}
	}
	cout<<"the number"<<" "<<b<<" occured"<<" "<<c<<" times";
}