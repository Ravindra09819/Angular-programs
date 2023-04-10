//Optional arguments
function Demo(no1, no2) {
    console.log("Inside Demo");
    console.log("value of no1:", +no1);
    if (no2 != undefined) {
        console.log("value of no2", +no2);
    }
}
Demo(10, 11); // mo1=10 no2=11
Demo(10); //no1=10 no2=undefined
