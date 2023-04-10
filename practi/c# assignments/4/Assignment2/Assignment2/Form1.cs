using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Assignment2
{
    public partial class Form1 : Form
    {
        College c=null;
        bill b=null;
        string message;

        public Form1()
        {
            c= new College();   
            b= new bill();
            InitializeComponent();
        }

        private void calc_Click(object sender, EventArgs e)
        {
            FestEventArgs fe = new FestEventArgs(int.Parse(num_of_ppl.Text));
            c.onFest(sender,fe);//Invoke event
            message = "Caterer bill:"+b.c_bill + "\nDecorator bill:" + b.d_bill + "\nTotal bill amount is :" +b.total_bill_amount;
            MessageBox.Show(message);
        }
    }
}
