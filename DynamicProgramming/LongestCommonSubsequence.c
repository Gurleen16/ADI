#include<stdio.h>

char s1[]={'a','b','c','b','d','a','b'};
char s2[]={'b','d','c','a','b','a'};

int LCS(int n,int m)
{
  int s[n+1][m+1];
  int i,j;
  for(i=0;i<=n;i++)
  {
    for(j=0;j<=m;j++)
    {
      if(i==0||j==0)
      s[i][j]=0;
      else if(s1[i-1]==s2[j-1])
      s[i][j]=1+s[i-1][j-1];
      else
      s[i][j]=s[i-1][j] > s[i][j-1] ? s[i-1][j] : s[i][j-1];

    }
  }

  int index=s[n][m];
  char lcs[index+1];

  i=n,j=m;
  while(i>0 && j>0)
  {
    if(s1[i-1]==s2[j-1])
    {
      lcs[index-1]=s1[i-1];
      i--,j--,index--;
    }
    else if(s[i-1][j]>s[i][j-1])
    i--;
    else
    j--;
  }

  printf("%s",lcs);

  return s[n][m];
}

int main()
{
  int n=7;
  int m=6;
  printf("\n%d",LCS(n,m));
}
