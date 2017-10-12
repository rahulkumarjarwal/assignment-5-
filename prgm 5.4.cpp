#include <iostream>
using namespace std;

int small_element(int a[],int n)
{ int small=a[0];
 for(int i=1;i<n;i++)
 { if(a[i]<small)
    small=a[i];
   else
   small=small;
 }
 return small;
}

int big_element(int a[],int n)
{ int big=a[0];
 for(int i=1;i<n;i++)
 { if(a[i]>big)
    big=a[i];
   else
   big=big;
 }
 return big;
}
int main(){
int a[100],b[100],c[200],n,m,i,j;
cout<<"Enter the number of elements of 1st array.";
cin>>n;
cout<<"\nEnter the elements of 1st array.";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"\nEnter the number of elements of 2nd array. ";
cin>>m;
cout<<"\nEnter the elements of 2nd array.";
for(i=0;i<m;i++)
cin>>b[i];
cout<<"\nThe merged array is:\n";
{for(j=0;j<n;j++)
  c[j]=a[j];
 for(j=n;j<n+m;j++)
  c[j]=b[j-n];}
  for(j=0;j<m+n;j++)
  cout<<c[j]<<" ";
  int small=small_element(c,n+m);
  cout<<"\nThe smallest element of the merged array is :"<<small;
  int big=big_element(c,n+m);
  cout<<"\nThe largest element of the merged array is :"<<big;
	return 0;	
	
	
}
