#include<iostream>
using namespace std;

int searchelement(int a[],int l,int r,int ele)
{
  if(r<l)
  return 0;
  if(l==r)
  return l;

  int m=(l+r)/2;
  if(a[m]==ele)
  return m;

  if(a[l]<=a[m])
  {
    if(ele>=a[l] && ele<=a[m])
    return searchelement(a,l,m-1,ele);

    return searchelement(a,m+1,r,ele);
  }
  if(ele>=a[m] && ele<=a[r])
  return searchelement(a,m+1,r,ele);

  return searchelement(a,l,m-1,ele);

}

int main()
{
  int n,ele;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  cin>>ele;
  int res=searchelement(a,0,n-1,ele);
  cout<<res+1;
}
