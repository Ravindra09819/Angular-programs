class A 
{
	public int i,j;
	public void showij()
	{
		System.out.println(i);
		System.out.println(j);
	}
}
class B extends A 
{
	public int k;
	public void showk()
	{
	System.out.println(k);	
	}
	public void sum()
	{
		int s=i+j+k;
		System.out.println("sum is:"+s);	
	}
}
class Test
{
  public static void main(String args[])
  {
	B bo=new B();
	bo.i=10;
	bo.j=20;
	bo.showij();
	bo.k=30;
	bo.showk();
	bo.sum();
  }
}
