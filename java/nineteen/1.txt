class A extends Thread 
{
	public void run()
	{
		for(int i=1;i<=10;i++)
		{
			System.out.println("A.."+i);
		}
	}
}
class B extends Thread 
{
	public void run()
	{
		for(int i=1;i<=10;i++)
		{
			System.out.println("B.."+i);
		}
	}
}
class C extends Thread 
{
	public void run()
	{
		for(int i=1;i<=10;i++)
		{
			System.out.println("C.."+i);
		}
	}
}
class Mac
{
   public static void main(String args[])
   {
	   System.out.println("Main thread starts...");
    A ao=new A();
	B bo=new B();
	C co=new C();
	
	ao.start();
	bo.start();
	co.start();
	try{
	ao.join();
	bo.join();
	co.join();
	}
	catch(Exception e)
	{
		
	}
	
	 System.out.println("Main thread Ends...");
   }
}

