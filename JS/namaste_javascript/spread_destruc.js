// Spread operator and Destructuring.
arr = [1, 2, 3]
function avg(a, b, c) {
    return a + b + c / 3
}
let hello = avg(...arr) // This will pass the numbers to function, only that numbers would be passed which are called as parameters. It will ignore the next values.
console.log(hello);

let a = [4, 6, ...arr, 378, 69]
// In this the ...arr will open up the values of array in this.
console.log(a)

// We can do certain things this spread operator, like copy, paste....
let array2 = [...arr]// This will inherit the values of arr.
console.log(array2);
// Concatinate the arrays together.
let array3 = [...arr, ...array2, ...a];
console.log(array3);