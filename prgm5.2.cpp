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

float mean_array(int a[],int n)
{  float sum=0;
	for(int i=0;i<n;i++)
{   sum=sum+a[i];
}
  float mean=sum/n;
  return mean;
}
float median_array(int a[],int n)
{  float m;
int i,j,temp;
for(i=0;i<n;i++)
	 { for(j=i+1;j<n;j++)
	 { if (a[i]>a[j])
	      { temp=a[i];
	       a[i]=a[j];
	       a[j]=temp;}
	       else a[i]=a[i];//array is sorted in increasing order.
	 	
	 }}
if(n%2==0)
 { m=(a[n/2]+a[(n-2)/2]);
  return m/2;	
 }
 else
{ m=a[(n-1)/2];
 return m;}
}
int mode_array( int a[],int n)
{
 int number = a[0];
 int mode = number;
 int count = 1;
 int countMode = 1;
 for (int i=1; i<n; i++)
 {
      if (a[i] == number) 
      { 
         ++count;
      }
      else
      { 
            if (count > countMode) 
            {
                  countMode = count;
                  mode = number;
            }
           count = 1; 
           number = a[i];
       }  
  }
 return mode;
}

int main() {
int i,n , arr[100];
cout<<"Enter the number of elements in the array(max 100).\n";
cin>>n;
cout<<"Enter the elements of the array.\n";
for(i=0;i<n;i++)
{
	cin>>arr[i];
}
int small=small_element( arr,n);
cout<<"\nThe smallest element in the array is "<<small<<".";
int big=big_element( arr,n);
cout<<"\nThe biggest element in the array is "<<big<<".";
float mean=mean_array(arr,n);
cout<<"\nThe mean of all the elements of the array is ="<<mean;
float median=median_array(arr,n);
cout<<"\nThe median of all the elements of the array is ="<<median;
int mode=mode_array(arr,n);
cout<<"\nThe most frequent element in the array is "<<mode;

	return 0;
	
}
	

