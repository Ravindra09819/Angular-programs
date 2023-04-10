using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SaddlePoint
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter no of rows:");
            int n=Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter no of cols:");
            int m=Convert.ToInt32(Console.ReadLine());
            int[,] arr = new int[n, m];
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine($"Enter elements of row {i+1}");
                for (int j=0; j < m;j++)
                {
                    arr[i,j]=Convert.ToInt32(Console.ReadLine());
                }
            }
            Console.WriteLine("Entered matrix is as follows:");
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine();
                for (int j = 0; j < m; j++)
                    Console.Write($"{arr[i, j]}    ");
            }
            Console.WriteLine();
            int k;
            int sc = 0;
            for (int i = 0; i < n; i++)
            {
                int max = arr[i,0];
                int col = 0;
                
                for (int j = 0; j < m; j++)
                {
                    if (arr[i, j] >= max)
                    { 
                        max = arr[i, j];
                        col = j;
                        
                    }    
                }
                for(k=0;k<n;k++)
                {
                    if (max > arr[k, col])
                        break;
                }
                if (k == n) 
                {
                    sc++;
                    Console.WriteLine($"Saddle point at row {i} col {col} : {arr[i,col]}");
                }
                
            }
            if (sc == 0)

            {
                Console.WriteLine("No saddle point in entered matrix!!");
            }
            Console.ReadKey();
        }
    }
}
//Console.WriteLine($"Row {i} Col {col} : {arr[i,col]}");
//Console.WriteLine($"Maximum element of row{i} is in col {col}:{arr[i,col]}");
