#include<iostream>
using namespace std;

void sumpairs(int a[],int n,int s)
{
  int l=0;
  int r=n-1;

  while(l<r)
  {
    if(a[l]+a[r]==s)
    {
      cout<<a[l]<<" "<<a[r]<<endl;
      l++;
      r--;
    }
    else if(a[l]+a[r]>s)
    r--;

    else
    l++;

  }

}

int main()
{
  int n,sum;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  cin>>sum;
  sumpairs(a,n,sum);
}
