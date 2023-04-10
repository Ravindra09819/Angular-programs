using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment2
{
    
    public class FestEventArgs : EventArgs 
    {
        public int num;
        public FestEventArgs(int n)
        {
            num = n;
        }
    }
    public class College 
    {
    public delegate void FestEventHandler(object sender, FestEventArgs e);
    public static event FestEventHandler Fest;
    public void onFest(object sender, FestEventArgs e) 
    {
        if (Fest != null)
            Fest(sender, e);    
    }

    }
}
