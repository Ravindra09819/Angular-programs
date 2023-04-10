import java.util.*;
class Vo1
{
  public static void main(String args[])
  {
   Vector v=new Vector();
   System.out.println(v.capacity());//10
  for(int i=1;i<=100;i++)
  {
	  v.addElement(i);
    
  }
  System.out.println(v);
	
  }
}