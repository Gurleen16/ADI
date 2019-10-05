#include<iostream>
using namespace std;

int firstoccurence(int a[],int n,int ele)
{
  int l=0;
  int r=n-1;
  while(l<=r)
  {
    int m=(l+r)/2;

    if(a[m]==ele)
    return m;

    else if(a[m]>ele)
    r=m;

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
  int res=firstoccurence(a,n,ele);
  cout<<res+1;
}
