abstract class A 
{
	abstract public void hello();//abstract method
	
}
class B extends A 
{
	public void hello()
	{
	  System.out.println("Hello B..");	
	}
}
class C extends A 
{
	public void hello()
	{
	  System.out.println("Hello C..");	
	}
}
class Main 
{
  public static void main(String[] args)
 {
	A ao=new B();
	ao.hello();
	
	A ao2=new C();
	ao2.hello();
 }
}