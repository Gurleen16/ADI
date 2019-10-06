public class Kmpsearch
{
  static void kmp(String txt,String pat)
  {
    int tlen=txt.length();
    int plen=pat.length();
    int a[]=new int[plen];
    makechararray(pat,a,plen);
    int i=0,j=0,k;
    while(i<tlen)
    {
      if(pat.charAt(j)==txt.charAt(i))
      {
        i++;
        j++;
      }
      if(j==plen)
      {
        System.out.println("Pattern found at: "+(i-j));
        j=a[j-1];
      }
      else if(i<tlen && pat.charAt(j)!=txt.charAt(i))
      {
        if(j!=0)
        {
          j=a[j-1];
        }
        else
        i++;
      }
    }
  }

  static void makechararray(String pat,int a[],int len)
  {
    int i=0,j;
    for(j=1;j<len;j++)
    {
      if(pat.charAt(i)==pat.charAt(j))
      {
        a[j]=a[j-1]+1;
        i++;
      }
      else
      i=0;
    }
  }


  public static void main(String args[])
  {
    String txt="ABABCABCABABABD";
    String pat="ABABD";
    kmp(txt,pat);
  }

}
