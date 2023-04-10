// Procedual oriented programming(pop)
function Addition(No1:number,No2:number)
{
    var Ans:number=0;
    Ans=No1+No2;
    return Ans;
}

 
function Subtraction(No1:number,No2:number)
{
    var Ans:number=0;
    Ans=No1-No2;
    return Ans;
}

var Value1:number=10;
var Value2:number=11;
var Ret:number=0;

Ret=Addition(Value1,Value2);
console.log("Addition is:",+Ret);

Ret=Subtraction(Value1,Value2);
console.log("Subtraction is:",+Ret);