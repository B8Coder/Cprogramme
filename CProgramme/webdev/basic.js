
let n=(prompt("Enter any number: "));
n=parseInt(n);
if (n<0) {
    console.log(`${n} is negative  number.`);
}else if( n%2===0){
       
    console.log(`${n} is an Even  number.`);
}else{
    console.log(`${n} is an odd number.`)
}

