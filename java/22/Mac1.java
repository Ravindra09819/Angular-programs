import java.util.*;
class Mac1
{
  public static void main(String args[])
  {
   LinkedList lo=new LinkedList();
   lo.add("Java");
   lo.add(10);
   lo.add(null);
   lo.add("Java");
   
   System.out.println(lo);
   lo.set(0,"php");
   System.out.println(lo);
   lo.add(0,"Python");
   System.out.println(lo);
   
   lo.removeLast();
   lo.removeFirst();
   System.out.println(lo);
   
   lo.addFirst("python");
   lo.addLast("Java");
   System.out.println(lo);
	
  }
}
