using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string input;
            string [ , ] points = new string[4,6];
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 6; j++)
                {
                    int num = 0;
                    points[i,j] = Convert.ToString(num);
                }
            }
            for (int i = 0; i < 4; i++)
            {
                Console.WriteLine("Enter name of team"+(i+1));
                points[i,0] =  Console.ReadLine();
            }
            while (true) { 
            Console.WriteLine("\nEnter match detail :");
            input = Console.ReadLine();
            string[] result = input.Split(';');
            for (int i = 0; i < 4; i++)
            {
                if(result[0] == points[i,0])
                {
                    points[i,1] = Convert.ToString(Convert.ToInt32(points[i,1]) + 1);
                    if(result[2] == "win")
                    {
                        points[i,2] = Convert.ToString(Convert.ToInt32(points[i,2]) + 1);
                        points[i,5] = Convert.ToString(Convert.ToInt32(points[i,5]) + 3);
                    }
                    else if(result[2] == "draw")
                    {
                        points[i,3] = Convert.ToString(Convert.ToInt32(points[i,3]) + 1);
                        points[i,5] = Convert.ToString(Convert.ToInt32(points[i,5]) + 1);
                    }
                    else
                    {
                        points[i,4] = Convert.ToString(Convert.ToInt32(points[i,4]) + 1);
                    }

                }
                if(result[1] == points[i,0])
                {
                    points[i,1] = Convert.ToString(Convert.ToInt32(points[i,1]) + 1);
                    if(result[2] == "win")
                    {
                        points[i,4] = Convert.ToString(Convert.ToInt32(points[i,4]) + 1);
                    }
                    else if(result[2] == "draw")
                    {
                        points[i,3] = Convert.ToString(Convert.ToInt32(points[i,3]) + 1);
                        points[i,5] = Convert.ToString(Convert.ToInt32(points[i,5]) + 1);
                    }
                 

                }
            }
            Console.WriteLine("Team| MP| W | D | L | P");
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 6; j++)
                {
                    
                    Console.Write(points[i,j]+" | ");
                }
                Console.WriteLine("\n");
            }
            }
            


            Console.ReadKey();
        }
    }
}
