#include <iostream>

using namespace std;
int sum_array(int a[],int n)
{  int sum=0;
	for(int i=0;i<n;i++)
{   sum=sum+a[i];
}
  return sum;
}

int main() {
int arr[100],i,n,sum=0;
cout<<"Enter the number of elements in the array(max 100).\n";
cin>>n;
cout<<"Enter the elements of the array.\n";
for(i=0;i<n;i++)
{
	cin>>arr[i];
}
sum=sum_array(arr,n);
cout<<"The sum of all the elements of the array is ="<<sum;
 return 0;
}
