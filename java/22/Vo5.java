import java.util.*;
class Vo5
{
  public static void main(String args[])
  {
   Vector<Object> v=new Vector<Object>();
   
    v.add("java");
	 v.add("java");
	 v.add(10);
	System.out.println(v);
	v.add(1,"python");
	System.out.println(v);
  }
}