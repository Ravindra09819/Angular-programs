using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment2
{
    internal class bill
    {
        public float c_bill,d_bill,total_bill_amount;
        public bill() 
        {
            College.Fest += new College.FestEventHandler(College_Fest);
        }
        public void College_Fest(object sender,FestEventArgs e) 
        {
            c_bill = 200 * e.num;
            d_bill = 10000+ 10* e.num;
            total_bill_amount =c_bill+d_bill;
        }
    }
}
