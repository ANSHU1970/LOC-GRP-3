#include <iostream>
using namespace std;
void l(int arr[], int n) {
  int l = 0;
  int r = n - 1;
  
  while (l < r) 
  {
    while (arr[l] < 0 && l < r)
    {
      l++;
    }
    while (arr[r] >= 0 && l < r) {
      r--;
    }
    if (l < r) {
      int temp = arr[l];
      arr[l] = arr[r];
      arr[r] = temp;
    }
  }
}

int main() {
  int a;
	cout<<"enter the size of array"<<endl;
	cin>>a;
	int ar[a];
	cout<<"enter array elements"<<endl;
	for(int i=0;i<a;i++)
	{
		cin>>ar[i];
	}
  
  l(ar, a);
  
  for (int i = 0; i < a; i++)
  {
   cout << ar[i] << " ";
  }
  
  return 0;
}