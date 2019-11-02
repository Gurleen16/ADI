#include<stdio.h>

int a[]={50,3,10,7,40,80};

int LIS(int n)
{
  int lis[n];
  int i,j,c=0,max=0;
  for(i=0;i<n;i++)
  lis[i]=1;
  for (i=1;i<n;i++)
  {
    for(j=0;j<i;j++)
    if(a[i]>a[j] && lis[i]<lis[j]+1)
    lis[i]=lis[j]+1;
  }
  for (i=0;i<n;i++)
  {
    if(max<lis[i])
    max=lis[i];
  }
  return max;
}

int main()
{
  int n=6;
  printf("%d",LIS(n));

}
