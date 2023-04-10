using System;
using ExceptionClass;
namespace CustomException
{
    public class CustomException
    {
        public static void Main(string[] args)
        {
            try
            {
               MyOperations.process(5, 1, 5);
                MyOperations.process2();
            }
            catch (MyCustomException e)
            {
                Console.WriteLine($"Error Code:{e.err_code},\nError Message:{e.message}");
            }
            Console.ReadKey();
        }
    }
}
