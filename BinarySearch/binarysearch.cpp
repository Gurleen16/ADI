#include<iostream>
using namespace std;

int binarysearch(int a[],int l,int r,int ele)
{
  if(l<=r)
  {
    int m=(l+r)/2;

    if(a[m]==ele)
    return m;

    else if(a[m]>ele)
    return binarysearch(a,l,m-1,ele);

    else
    return binarysearch(a,m+1,r,ele);

  }
  return -1;
}
int binarysearchiter(int a[],int l,int r,int ele)
{
  while(l<=r)
  {
    int m=(l+r)/2;

    if(a[m]==ele)
    return m;

    else if(a[m]>ele)
    r=m-1;

    else
    l=m+1;

  }
  return -1;
}

int main()
{
  int n,ele;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  cin>>ele;
  int res=binarysearch(a,0,n-1,ele);
  int res1=binarysearchiter(a,0,n-1,ele);
  cout<<res<<" "<<res1;
}
