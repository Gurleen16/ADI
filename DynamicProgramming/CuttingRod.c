#include<stdio.h>
#include<string.h>

int p[]={1,5,8,9,10,17,17,20};

int maxf(int x,int y)
{
  return x>y?x:y;
}

int CuttingRod(int n)
{
  int cr[n+1];
  int i,j;
  int max;
  cr[0]=0;
  for(i=1;i<=n;i++)
  {
    max=-99;
    for(j=0;j<i;j++)
    {
      max=maxf(p[j]+cr[i-j-1],max);
    }
    cr[i]=max;
  }
  return cr[n];
}
int main()
{
  printf("%d",CuttingRod(8));

}
