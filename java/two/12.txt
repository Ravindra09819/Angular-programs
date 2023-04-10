class A6 
{
 public static void main(String args[])
 {
	 int sum=0;
	int[] []x={{10,20,30,40,50},{60,70,80,90,100}};
 
   for(int i=0;i<=1;i++)//row
   {
	   for(int j=0;j<=4;j++)//col
	   {
		System.out.print(" "+x[i][j]); 
           sum=sum+x[i][j];		
	   }
	   
	   System.out.println("\n");
   }
   System.out.println("==================");
   System.out.println("sum is:"+sum);
    
 }
}
