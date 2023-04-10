// Procedual oriented programming(pop)
function Addition(No1, No2) {
    var Ans = 0;
    Ans = No1 + No2;
    return Ans;
}
function Subtraction(No1, No2) {
    var Ans = 0;
    Ans = No1 - No2;
    return Ans;
}
var Value1 = 10;
var Value2 = 11;
var Ret = 0;
Ret = Addition(Value1, Value2);
console.log("Addition is:", +Ret);
Ret = Subtraction(Value1, Value2);
console.log("Subtraction is:", +Ret);
