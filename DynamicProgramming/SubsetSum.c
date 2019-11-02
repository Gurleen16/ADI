#include<stdio.h>

int a[]={6,3,2,1};

int SubsetSum(int n,int sum)
{
  int s[n+1][sum+1];
  int i,j;

  for(i=0;i<=n;i++)
  {
    for(j=0;j<=sum;j++)
    {
      if(j==0)
      s[i][j]=1;
      else if(i==0)
      s[i][j]=0;
      else if(j<a[i-1])
      s[i][j]=s[i-1][j];
      else
      s[i][j]=s[i-1][j]||s[i-1][j-a[i-1]];
    }
  }
  for(i= 0;i<= n;i++)
  {
    for(j=0;j<=sum;j++)
    printf("%d ",s[i][j]);
    printf("\n");
  }
  return s[n][sum];
}

int main()
{
  int n=4;
  int m=5;
  if(SubsetSum(n,m)==1)
  printf("Found\n");
  else
  printf("Not Found\n");

}
