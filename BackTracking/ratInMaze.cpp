#include<iostream>
using namespace std;

const int n=4;
void printboard(int sol[n][n])
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    cout<<sol[i][j]<<" ";
    cout<<endl;
  }
  cout<<endl;
}

bool isSafe(int maze[n][n],int x,int y)
{
  if(x>=0 && x<n && y>=0 && y<n && maze[x][y]==1)
  return true;

  return false;
}

bool solvemazeUtil(int maze[n][n],int x,int y,int sol[n][n])
{
  if(x==n-1 && y==n-1)
  {
    sol[x][y]=1;
    return true;
  }

  if(isSafe(maze,x,y)==true)
  {
      sol[x][y]=1;

      if(solvemazeUtil(maze,x+1,y,sol)==true)
      return true;

      if(solvemazeUtil(maze,x,y+1,sol)==true)
      return true;

      sol[x][y]=0;
      return false;
  }

  return false;
}

void solvemaze(int maze[n][n])
{
  int sol[n][n]={ { 0, 0, 0, 0 },
                   { 0, 0, 0, 0 },
                   { 0, 0, 0, 0 },
                   { 0, 0, 0, 0 } };

  if(solvemazeUtil(maze,0,0,sol)==false)
  {
    cout<<"Solution doesn't exit"<<endl;
    return;
  }

  printboard(sol);
}

int main()
{
  int maze[n][n]={ { 1, 0, 0, 0 },
                   { 1, 1, 0, 1 },
                   { 0, 1, 0, 0 },
                   { 1, 1, 1, 1 } };
  solvemaze(maze);
}
