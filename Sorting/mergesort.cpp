#include<iostream>
using namespace std;

void merge(int a[],int l,int m,int r)
{
  int i,j,k;
  int n1=m-l+1;
  int n2=r-m;

  int L[n1],R[n2];

  for(i=0;i<n1;i++)
  L[i]=a[l+i];
  for(j=0;j<n2;j++)
  R[j]=a[m+j+1];

  i=0;
  j=0;
  k=l;

  while(i<n1 && j<n2)
  {
    if(L[i]<=R[j])
    {
      a[k]=L[i];
      i++;
    }
    else
    {
      a[k]=R[j];
      j++;
    }
    k++;
  }

  while(i<n1)
  {
    a[k]=L[i];
    i++;
    k++;
  }
  while(j<n2)
  {
    a[k]=R[j];
    j++;
    k++;
  }
}
void mergesort(int a[],int low,int high)
{
  if(low<high)
  {
    int m=(low+high)/2;
    mergesort(a,low,m);
    mergesort(a,m+1,high);
    merge(a,low,m,high);
  }
}
int main()
{
  int n,ele;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  mergesort(a,0,n-1);
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
}
