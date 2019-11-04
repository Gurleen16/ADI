#include<stdio.h>
#include<math.h>

int p[]={10,12,28};
int w[]={1,2,4};

int KnapSack(int i,int c)
{
  int s[i+1][c+1];
  int j,k;
  for(j=0;j<=i;j++)
  {
    for(k=0;k<=c;k++)
    {
      if(j==0||k==0)
      s[j][k]=0;
      else if(w[j]<=c)
      s[j][k]=s[j-1][k-w[j-1]]+p[j-1] > s[j-1][k] ?s[j-1][k-w[j-1]]+p[j-1] : s[j-1][k];
      else
      s[j][k]=s[j-1][k];
    }
  }
  return s[i][c];
}

int main()
{
  int i=3;
  int c=6;
  printf("%d",KnapSack(i,c));
}
