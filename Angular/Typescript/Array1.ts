//int Arr[5]={10,20,30,40,50};  Reference c/c++/java/c#


//Arr is one dimensional array which containt 5 element is of type integer.
var Arr:number[]=[10,20,30,40,50,40.11];


console.log("Length of array is:"+Arr.length);
console.log("First element is:",+Arr[0]);
console.log("Second element is:",+Arr[1]);
console.log("Third element is:",+Arr[2]);

console.log("Elements from array are:");
var i:number=0;
//  1       2          3
for(i=0;i<Arr.length;i++)
{
    console.log(Arr[i]);//4
}
