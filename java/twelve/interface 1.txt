interface A 
{
	public void hello1();
	
}
interface B extends A
{
	public void hello2();
	
}
class C implements B 
{
	public void hello1()
	{
		System.out.println("Hello A..");
	}
	public void hello2()
	{
		System.out.println("Hello B..");
	}
}
class Main 
{
  public static void main(String args[])
  {
	
	C co=new C();
	co.hello1();
	co.hello2();
   
  }
}
