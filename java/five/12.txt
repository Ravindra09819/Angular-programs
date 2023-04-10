class A3
{
 public static void main(String args[])
 {
   int x[][][]={
             {{10,20,30,40}},
			 {{11,12,13},{45,46}},
			 {{47,48,49,50}}
			 };
	for(int i=0;i<x.length;i++)
	{
		for(int j=0;j<x[i].length;j++)
		{
			for(int k=0;k<x[i][j].length;k++)
			{
				System.out.print(" "+x[i][j][k]);
			}
			System.out.println("\n");
		}
	}		
			
 }
}
