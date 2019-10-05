#include<iostream>
using namespace std;

int rotationcount(int a[],int l,int r)
{
  if(r<l)
  return 0;
  if(l==r)
  return l;

  int m=(l+r)/2;

  if(a[m+1]<a[m] && r>m)
  return m+1;

  if(a[m-1]>a[m] && m>l)
  return m;

  if(a[r]>a[m])
  return rotationcount(a,l,m-1);

  return rotationcount(a,m+1,r);

}

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  int res=rotationcount(a,0,n-1);
  cout<<res;
}
