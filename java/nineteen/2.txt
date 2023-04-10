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

class Mac1
{
   public static void main(String args[])
   {
	  
    A ao=new A();
	ao.setPriority(8);
	
	B bo=new B();
	bo.setPriority(4);
	
	ao.start();
	bo.start();
	
	
	
   }
}

