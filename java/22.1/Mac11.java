class Mac11 
{
	class B 
	{
		public void show()
		{
		System.out.println("Hello i m in class B.");	
		}
		class C
		{
			public void show()
			{
				System.out.println("Hello i m in class C.");	
			}
		}
		
	}


public static void main(String args[])
  {
    Mac11 m=new Mac11();
	Mac11.B bo=m.new B();
	Mac11.B.C co=bo.new C();
	bo.show();
	co.show();
  }
  
 }