 //object oriented Programming(oop)

 // class Defination
class Arithematic
{
    //characteristics
    No1:number;
    No2:number;
   
    constructor(a:number,b:number)
    {
       this.No1=a;
       this.No2=b;  
    }

 Addition()//behaviour
{
    var Ans:number=0;//local variable
    Ans=this.No1+this.No2;
    return Ans;
}
Subtraction()//behaviour
{
    var Ans:number=0;//local variable
    Ans=this.No1-this.No2;
    return Ans;
}
}
var obj1=new Arithematic(10,11);
var obj2 =new Arithematic(10,11);


var Ret:number=0;
Ret=obj1.Addition();
console.log("Addition is:",+Ret);

Ret=obj2.Subtraction();
console.log("Subtraction is:",+Ret);