public class Knapsack
{
  public static void main(String args[])
  {
    float p[]={10,5,15,7,6,18,3};
    float w[]={2,3,5,7,1,4,1};
    float pw[]=new float[7];

    float c=15;

    for(int i=0;i<7;i++)
    pw[i]=p[i]/w[i];

    for(int i=0;i<7;i++)
    {
      for(int j=i+1;j<7;j++)
      {
        if(pw[i]>pw[j])
        {
          float temp=pw[i];
          pw[i]=pw[j];
          pw[j]=temp;

          temp=p[i];
          p[i]=p[j];
          p[j]=temp;

          temp=w[i];
          w[i]=w[j];
          w[j]=temp;
        }
      }
    }

    float profit=0;

    for(int i=6;i>=0 && c!=0;i--)
    {
      if(w[i]<c)
      {
        c=c-w[i];
        System.out.println(pw[i]);
        profit+=p[i];
      }
      else
      {
        System.out.println(pw[i]);
        profit+=(c/w[i])*p[i];
        c=0;
      }
    }
    System.out.println("Profit: "+profit);

  }
}
