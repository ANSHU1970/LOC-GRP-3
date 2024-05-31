#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the size of array"<<endl;
	cin>>a;
	int ar[a];
	cout<<"enter array elements"<<endl;
	for(int i=0;i<a;i++)
	{
		cin>>ar[i];
	}
	int arr[a];
	for(int j=0;j<a;j++)
	{
		arr[j]=ar[j];
	}
	cout<<"array elements are:-"<<endl;
	for(int i=0;i<a;i++)
	{
		cout<<arr[i];
	}
}