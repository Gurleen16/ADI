#include<iostream>
using namespace std;

const int n=4;
void printboard(int board[n][n])
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    cout<<board[i][j]<<" ";
    cout<<endl;
  }
  cout<<endl;
}

bool isSafe(int board[n][n],int row,int col)
{
  int i,j;

  for(i=0;i<col;i++)
  if(board[row][i]==1)
  return false;

  for(i=row,j=col;i>=0&&j>=0;i--,j--)
  if(board[i][j]==1)
  return false;

  for(i=row,j=col;i<n,j>=0;i++,j--)
  if(board[i][j]==1)
  return false;

  return true;
}
bool solveNQ(int board[n][n],int col)
{
  if(col>=n)
  {
    printboard(board);
    return true;

  }
  bool res=false;
  for(int i=0;i<n;i++)
  {
    if(isSafe(board,i,col))
    {
      board[i][col]=1;

      res=solveNQ(board,col+1)||res;
      //return true;

      board[i][col]=0;
    }
  }
  return res;
}


void nqueen()
{
  int board[n][n];
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    board[i][j]=0;

  if(solveNQ(board,0)==false)
  {
    cout<<"Solution doesn't exit"<<endl;
  }
}

int main()
{
  nqueen();
}
