using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace oops
{
    class A
    {
       
        public virtual void show()
        {
            Console.WriteLine("Hello: Base Class!");
        }
    }

    class B : A
    {
        public new void show()
        {
            Console.WriteLine("Hello: Derived Class! B");
            
        }
    }
    class C : A
    {
        public override void show()
        {
            Console.WriteLine("Hello: Derived Class! C");
            
        }
    }

     class demo
    {
        public static int num;
        public static void func()
        {
            Console.WriteLine($"Value of num before function is called {num}");
            num = num + 10;
            Console.WriteLine($"Value of num after function is called {num}");
        }
        private demo()
        {
            Console.WriteLine($"Public contructor will only be called each time");
        }
    }
    class demo2
    {
        static int count = 1;
        static demo2() { Console.WriteLine($"Static contructor will only be called once. During creation of object {count}"); }
        public demo2()
        {
            Console.WriteLine($"Public contructor will only be called each time");
            Console.WriteLine($"Object number : {count}");
            count++;
        }
        

    }
    class Program
    {
        static void Main(string[] args)
        {
            A a1 = new A();
            a1.show();
            B b1 = new B();
            b1.show();
            A a2 = new B();
            a2.show();
            C c1 = new C();
            c1.show();
            A a3 = new C();
            a3.show();

            //demo d1 = new demo();
            demo.num = 10;
            demo.func();

            Console.WriteLine("\n\nStatic constructor calls:");
            demo2 e1 = new demo2();
            demo2 e2 = new demo2();
            demo2 e3 = new demo2();
            Console.ReadLine();
        }
    }
}
