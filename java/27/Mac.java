import java.io.*;
class Mac
{
 public static void main(String args[])
 {
	File f=new File("MyFolder");
	
	System.out.println(f.exists());
	try
	{
	f.mkdir();
	}
	catch(Exception e)
	{
	System.out.println(e);	
	}
	System.out.println(f.exists());
 }
	
}

