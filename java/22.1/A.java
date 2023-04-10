class A1
{
	class B 
	{
		class C 
		{
			public void show()
			{
				System.out.println("I m in Innermost clas...........................");
			}
		}
	}
}
	
class A 
{	

public static void main(String args[])
  {
	
  new A1().new B().new C().show();
	
  }
  
 }