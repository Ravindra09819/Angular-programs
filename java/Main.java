class Main
{
	public void hello(int x,int y)
	{
		int z=x+y;
		System.out.println("sum is:"+z);
	}
  public static void main(String args[])
  {
    A ao=new A()
	{
	 public void hello(int x,int y)
	 {
		int z=x-y;
		System.out.println("subs is:"+z);
	 }	
	};
	ao.hello(10,20);
	
	A ao2=new A();
	ao2.hello(10,20);
  }
 
}

