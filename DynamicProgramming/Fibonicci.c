#include<stdio.h>

int Fibonicci(int n)
{
  int s[n+1];
  s[0]=0;
  s[1]=1;
  for(int i=2;i<=n;i++)
  s[i]=s[i-1]+s[i-2];
  return s[n];
}

int main()
{
  int n=4;
  printf("%d",Fibonicci(n));
}
