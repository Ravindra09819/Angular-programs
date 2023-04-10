import java.io.*;
class Mac4
{
 public static void main(String args[])throws Exception
 {
	PrintWriter b=new PrintWriter("hello.txt");
	
	b.write(65);//A
	b.println(65);//65
	b.println(10.23);
	b.println('a');
	b.println("India");
	b.flush();
	b.close();
	
	
 }
	
}

