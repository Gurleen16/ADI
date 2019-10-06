public class StringPermut
{
  static char str[]={'a','b','c'};
  static int n=3;

  static void swap(int b,int c)
  {
    char temp=str[b];
    str[b]=str[c];
    str[c]=temp;
  }

  static void permut(char a[],int l,int r)
  {
    if(l==r)
    {
      for(int i=0;i<n;i++)
      System.out.print(a[i]);
      System.out.println();
    }
    else
    {
      for(int i=l;i<r;i++)
      {
        swap(l,i);
        permut(a,l+1,r);
        swap(l,i);
      }
    }
  }

  public static void main(String args[])
  {
    permut(str,0,3);
  }
}
