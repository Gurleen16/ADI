import java.util.*;
public class BinaryString
{
  static char A[]=new char[20];
  static void binstring(int l,int h)
  {
    if(l==h)
    {
      for(int i=0;i<h;i++)
      System.out.print((int)A[i]);
      System.out.println();
    }
    else
    {
      A[l]=0;
      binstring(l+1,h);
      A[l]=1;
      binstring(l+1,h);
    }
  }
  public static void main(String args[])
  {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    binstring(0,n);
  }
}
