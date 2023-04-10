//Constructor Overloading:same name with different parameter
//Its name is same as class name but without any return type
class A 
{
	private int x,y;
	private String name;
	A()//Non-parameterized constructor
	{
	  x=10;
      y=20;
	  name="India";
	}
	A(int x)//parameterized constructor
	{
		this.x=x;
	}
	A(int x,int y)
	{
		this.x=x;
		this.y=y;
	}
	A(int x,int y,String name)
	{
		this.x=x;
		this.y=y;
		this.name=name;
	}
	public void show()
	{
		System.out.println(x);
		System.out.println(y);
		System.out.println(name);
	}
	
}
class Test
{
  public static void main(String args[])
  {
 A ao=new A();
 ao.show();
 
 A ao2=new A(11);
 ao2.show();
 
 A ao3=new A(12,13);
 ao3.show();
 
 A ao4=new A(14,15,"Pune");
 ao4.show();
 
	
   
   
	
  }
}
