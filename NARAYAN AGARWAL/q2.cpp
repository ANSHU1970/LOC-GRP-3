#include<iostream>
using namespace std;
int main()
{
	int a,b,z,n,k,m;
	cout<<"enter the size of 1st array"<<endl;
	cin>>a;
	int ar[a];
	cout<<"enter array elements"<<endl;
	for(int i=0;i<a;i++)
	{
		cin>>ar[i];
	}
    cout<<"enter the size of 2nd array"<<endl;
	cin>>b;
	int arr[b];
	cout<<"enter array elements"<<endl;
	for(int j=0;j<b;j++)
	{
		cin>>arr[j];
    }
    int ab[(a+b)];
    for(k=0;k<a;k++)
    {
        ab[k]=ar[k];
    }
    z=k;
    for(int k=0;k<b;k++)
    {
        ab[z]=arr[k];
        z++;
    }
    n=a+b;
    for(m=n-1;m>=0;m--)
    {
       cout<<ab[m];
    }
}