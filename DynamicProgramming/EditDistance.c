#include<stdio.h>
#include<string.h>

char s1[]="Data";
char s2[]="Dent";

int min(int x,int y,int z)
{
  return x<y?(x<z?x:z):(y<z?y:z);
}

int EditDistance(int m,int n)
{
  int ed[m+1][n+1];
  int i,j;

  for(i=0;i<=m;i++)
  {
    for(j=0;j<=n;j++)
    {
      if(i==0)
      ed[i][j]=j;
      else if(j==0)
      ed[i][j]=i;
      else if(s1[i-1]==s2[j-1])
      ed[i][j]=ed[i-1][j-1];
      else
      {
        ed[i][j]=1+min(ed[i-1][j-1],ed[i-1][j],ed[i][j-1]);
      }
    }
  }
  return ed[m][n];
}
int main()
{

  printf("%d",EditDistance(strlen(s1),strlen(s2)));

}
