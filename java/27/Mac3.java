import java.io.*;
class Mac3
{
 public static void main(String args[])throws Exception
 {
	FileWriter f=new FileWriter("hello.txt");
	BufferedWriter b=new BufferedWriter(f);
	
	b.write(65);//A
	b.newLine();
	b.write("65");
	b.newLine();
	b.write("10.56");
	b.newLine();
	char ch[]={'a','b','c'};
	b.write(ch);
	b.newLine();
	b.write("India");
	b.flush();
	b.close();
	
 }
	
}

