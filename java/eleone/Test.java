
final class A
{
	public void hello(int x,int y)
	{
	int z=x+y;
    System.out.println("sum is:"+z);	
	}
}
class B extends A 
{
    public void hello(int x,int y)
	{
	int z=x-y;
    System.out.println("subs is:"+z);	
	}	
}
class C extends A 
{
	public void hello(int x,int y)
	{
	int z=x*y;
    System.out.println("Multi is:"+z);	
	}
}
class D extends A 
{
	public void hello(int x,int y)
	{
	int z=x/y;
    System.out.println("Div is:"+z);	
	}
}
class Test
{
	public static void main(String args[])
  {
  A p[]={new A(),new B(),new C(),new D()}; 
  
  
  for(A q:p)
  {
	  q.hello(10,20);
  }
	
  }
}


