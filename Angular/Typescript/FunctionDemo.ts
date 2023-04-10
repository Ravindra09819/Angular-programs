// function defination

//tsc filename ts

//node filename js
function fun()//1
{
    console.log("Inside fun");
}
//function call
fun()


function gun(no:number)//2
{
    console.log("Inside gun:"+no);

}
gun(11);
function sun(no:number):number //3
{
var i:number=no; //local variables
i++;
return i;
}
var ret:number=0;
var a:number=10;
ret=sun(a);
console.log("Return value is:"+ret);