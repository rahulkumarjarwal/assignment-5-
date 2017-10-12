#include <iostream>
using namespace std;

int k_small(int a[],int k)
{ 
return a[k-1];}

int k_large(int a[],int k,int n)
{ 
return a[n-k];}

int main() {
	int a[100],n,i,j,temp,k1,k2;
	cout<<"Enter the number of elements in the array(max 100).";
	cin>>n;
	cout<<"\nEnter the elements of the array.";
	for(i=0;i<n;i++)
	{ cin>>a[i];
	}
	for(i=0;i<n;i++)
	 { for(j=i+1;j<n;j++)
	 { if (a[i]>a[j])
	      { temp=a[i];
	       a[i]=a[j];
	       a[j]=temp;}
	       else a[i]=a[i];//array is sorted in increasing order.
	 	
	 }}
	 cout<<"\nThe sorted array is- \n";
	       for(i=0;i<n;i++)
	       cout<<a[i]<<" ";
cout<<"\n\nEnter a positive number (say k) to find kth smallest number in an the array .";
cin>>k1;
int small=k_small(a,k1);
cout<<"\nThe "<<k1<<"th smallest element in the array is "<<small;	       
	
cout<<"\n\nEnter a positive number (say k) to find kth largest number in an the array .";
cin>>k2;
int large=k_large(a,k2,n);
cout<<"\nThe "<<k2<<"th largest element in the array is "<<large;	       
	return 0;	
	
	
}
