#include<iostream>
using namespace std;

int partition(int a[],int low,int high)
{
  int pivot=a[high];
  int i=low-1;
  for(int j=low;j<high;j++)
  {
    if(a[j]<pivot)
    {
      i++;
      int temp=a[j];
      a[j]=a[i];
      a[i]=temp;
    }
  }
  int temp=a[high];
  a[high]=a[i+1];
  a[i+1]=temp;

  return i+1;
}

void quicksort(int a[],int low,int high)
{
  if(low<high)
  {
    int pi=partition(a,low,high);
    quicksort(a,low,pi-1);
    quicksort(a,pi+1,high);
  }
}
int main()
{
  int n,ele;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  quicksort(a,0,n-1);
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
}
