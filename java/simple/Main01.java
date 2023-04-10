import java.util.Scanner;
class Main01 
{
   public static void main(String args[])
  {
	Scanner so=new Scanner(System.in);
	int a;
	char ch;
	System.out.println("Enter any alphabet:");
	ch=so.next().charAt(0);
	
	a=(int)ch;
	if(a>=65 && a<=90)
	{
		a=a+32;
		ch=(char)a;
		System.out.println(ch);
		
	}
	else if(a>=97 && a<=122)
	{
		a=a-32;
		ch=(char)a;
		System.out.println(ch);
	}
	else
	{
	System.out.println("its not an alphabet...");	
	}
  }
}
