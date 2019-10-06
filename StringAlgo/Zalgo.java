public class Zalgo
{
  static void zsearch(String txt,String pat)
  {
    String concat=pat+'$'+txt;
    int len=concat.length();
    int Z[]=new int[len];
    makechararray(concat,Z,len);

    for(int i=0;i<len;i++)
    {
      if(Z[i]==pat.length())
      System.out.println("String found at: "+(i-pat.length()-1));
    }
  }

  static void makechararray(String con,int Z[],int len)
  {
    int n=len;
    int L,R,k;
    L=R=0;
    for(int i=0;i<n;i++)
    {
      if(i>R)
      {
        L=R=i;

        while(R<n && con.charAt(R-L)==con.charAt(R))
        R++;
        Z[i]=R-L;
        R--;
      }
      else
      {
        k=i-L;

        if(Z[k]<R-i+1)
        Z[i]=Z[k];

        else
        {
          L=i;
          while(R<n && con.charAt(R-L)==con.charAt(R))
          R++;
          Z[i]=R-L;
          R--;
        }
      }
    }
  }


  public static void main(String args[])
  {
    String txt="ABABCABCABABABD";
    String pat="ABABD";
    zsearch(txt,pat);
  }

}
