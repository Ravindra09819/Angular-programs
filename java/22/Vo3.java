import java.util.*;
class Vo3
{
  public static void main(String args[])
  {
   Vector v=new Vector(10,1);
   System.out.println("capacity:"+v.capacity());//10
  for(int i=1;i<=10;i++)
  {
	  v.addElement(i);
  }
  System.out.println(v);
  v.addElement(11);
	System.out.println("capacity:"+v.capacity());
	System.out.println(v);
  }
}