import java.lang.reflect.*;
import java.lang.Class;


public class Mac
{
   public static void main(String args[])
   {
	   try
	   {
	 B bo=new B();
	 Class obj=bo.getClass();
	Method[] methods=obj.getDeclaredMethods();
	for(Method m:methods)
	{
	   System.out.println("Method name is:"+m.getName());
        int modifier=m.getModifiers();
 System.out.println("Modifiers :"+Modifier.toString(modifier));	
System.out.println("Return type :"+m.getReturnType()); 
	}
	   }
	   catch(Exception e)
	   {
		   System.out.println(e);
	   }
	 
   }
}


//====================================
public class B 
{
	public void show()
	{
		System.out.println("I m in public method.");
	}
	private void disp()
	{
		System.out.println("I m in private method");
		
	}
}
