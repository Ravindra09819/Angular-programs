import java.io.*;
class Mac2
{
 public static void main(String args[])
 {
	 try
	 {
	FileWriter f=new FileWriter("hello.txt");
	f.write(67);//C
	f.write("ncwebworld");
	
	char[] ch={'a','e','i','o','u'};
	f.write(ch);
	
	f.flush();
	f.close();
	 }
	 catch(Exception e)
	 {
		 
	 }
 }
	
}

