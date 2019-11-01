#include<stdio.h>

int Factorial(int n)
{
  int s[n+1];
  s[1]=1;
  for(int i=2;i<=n;i++)
  s[i]=i*s[i-1];
  return s[n];
}

int main()
{
  int n=4;
  printf("%d",Factorial(n));
}
