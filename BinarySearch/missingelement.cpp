#include<iostream>
using namespace std;

int missingelement(int a[],int l,int r)
{
  int m;
  while((r-l)>1)
  {
    m=(l+r)/2;

    if(a[l]-l !=a[m]-m)
    r=m;

    else if(a[r]-r !=a[m]-m)
    l=m;
  }
  return m+1;
}

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  int res=missingelement(a,0,n-1);
  cout<<res;
}
