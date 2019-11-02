#include<stdio.h>

int a[]={1,2,3};

int CoinChange(int n,int sum)
{
  int i,j;
  int table[sum+1];

  for(i=0;i<=sum;i++)
  table[i]=0;

  table[0]=1;
  for(i=0;i<n;i++)
  {
    for(j=a[i];j<=sum;j++)
    table[j]+=table[j-a[i]];

  }
  return table[sum];
}

int main()
{
  int n=3,sum=4;
  printf("%d",CoinChange(n,sum));

}
