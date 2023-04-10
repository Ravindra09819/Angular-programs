using System;
namespace ExceptionClass
{
    public class MyCustomException: Exception 
    {
        public string err_code;
        public string message;
        //public MyCustomException(string code, string msg, string OrgExMsg) : base(OrgExMsg)
        public MyCustomException(string code, string msg,string OrgExMsg):base(OrgExMsg) { 
            err_code = code;
            message = msg;
        }        
    }
    public class MyOperations
    {
        public static int process(int a,int b,int n) {
            int result;
            try
            {
                result = a / b;
            }
            catch(DivideByZeroException e) {
                MyCustomException ex = new MyCustomException("Maths Error","Invalid Denominator",e.Message);
                throw (ex);
            }
            return result;
        }
        public static void process2() {
            int[] arr = new int[3] { 1, 2, 3};
            try
            {
                Console.WriteLine(arr[0]);
                Console.WriteLine(arr[1]);
                Console.WriteLine(arr[2]);
                Console.WriteLine(arr[3]);

            }
            catch (IndexOutOfRangeException e)
            {
                MyCustomException ex = new MyCustomException("Index error", "Index not valid", e.Message);
                throw (ex);
            }
        }
    }
}
