#include <iostream> 
using namespace std; 
int freq(int* arr, int n) 
{
	int maxcount = 0; 
	int e; 
	for (int i = 0; i < n; i++) { 
		int count = 0; 
		for (int j = 0; j < n; j++) { 
			if (arr[i] == arr[j]) 
				count++; 
		} 

		if (count > maxcount) { 
			maxcount = count; 
			e = arr[i]; 
		} 
	} 

	return e; 
} 
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
	cout << "ans is ="<<freq(ar, a); 
	return 0; 
} 

