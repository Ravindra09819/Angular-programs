import java.io.*;
class Mac1
{
 public static void main(String args[])
 {
	File f=new File("C:\\xampp");
	
	String[] s=f.list();
	
	for(String x:s)
	{
	System.out.println(x);
	}
 }
	
}

