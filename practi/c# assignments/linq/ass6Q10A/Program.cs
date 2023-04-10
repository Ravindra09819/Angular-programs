using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ass6Q10A
{
    class Program
    {
        static void Main(string[] args)
        {

            int[] numbers = {
                1,2,3,4,5,6,7,8,9,10,11,12,13,14
            };
            Console.Write("\nGiven input are : \n");
            foreach (var num in numbers)
            {
                Console.Write("{0}  ", num);
            }
            var nQuery =
            from VrNum in numbers
            where VrNum > 0
            where VrNum < 6
            select VrNum;
            Console.Write("\n\nThe numbers within the range of 1 to 10 are : \n");
            foreach (var VrNum in nQuery)
            {
                Console.Write("{0}  ", VrNum);
            }
            Console.ReadLine();
        }
    }
}
