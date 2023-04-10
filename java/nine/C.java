
class C
{
	Test()//constructor
	{
		System.out.println("Constructor");
	}
	static//static block
	{
		
		 System.out.println("Static Block");
	}
	//instance block
	{
		 System.out.println("Instance Block");
	}
	public void hello()
	{
		 System.out.println("method");
	}
	
	
  public static void main(String args[])
  {
    Test t=new Test();
	t.hello();
	
  }
}
