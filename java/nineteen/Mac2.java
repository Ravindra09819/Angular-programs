class Table 
{
	public synchronized void printTable(int x)
	{
		for(int i=1;i<=10;i++)
		{
			try
			{
				Thread.sleep(100);
			}
			catch(Exception e)
			{
				
			}
			System.out.println(x*i);
		}
	}
}
class A extends Thread 
{
	Table t;
	public A(Table t)
	{
	this.t=t;	
	}
	public void run()
	{
	t.printTable(5);	
	}
}
class B extends Thread 
{
	Table t;
	public B(Table t)
	{
	this.t=t;	
	}
	public void run()
	{
	t.printTable(100);	
	}
}
class Mac2
{
   public static void main(String args[])
   {
	  
   Table to=new Table();
   
   A ao=new A(to);
   ao.start();
   
   B bo=new B(to);
   bo.start();
   
	
   }
}

