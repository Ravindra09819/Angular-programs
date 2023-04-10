
class Main
{
  public static void main(String args[])
   {
	int balance=10000;
	int withdrawl=11000;
	
	if(balance<withdrawl)
		throw new ArithmeticException("Insufficient Balance..Dont Be Oversmart!!!");
	System.out.println("Transaction completed..");
	System.out.println("Program continues..");
   }
 }
 
