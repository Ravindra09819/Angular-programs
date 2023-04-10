class Z
{
 public static void main(String args[])
 {
   int x[]= new int[]{10,20,30,40,50};
   int max=x[0];
   int min=x[0];
   for(int i=0;i<x.length;i++)
   {
   if(x[i]>max)
   max=x[i];
   }
   System.out.println("the max value from the array:" +max);
   {
	   for(int i=0;i>x.length;i++)
   {
   if(x[i]<min)
   min=x[i];
   }
   System.out.println("the min value from the array:" +min);
   }
   }
}