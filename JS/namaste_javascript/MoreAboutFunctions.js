// Function Statement/Declaration
function saksham() {
  // JS will treat it as function and will have memory allogation like functions. It can be accessed before creation, so the difference is hoisting.
  console.log("Saksham");
}

// Function Expression.
var a = function () {
  // This is treated as a variable, not function so the variable a will store undefined after memory allogation phase and will not treat it as a function until it reads the syntax of this line. It can't be accessed before creation.
  console.log("This is function a");
};

// Anonynmous functions have no name, the above example line no. 8 is an example of anonymous function inside variable a. It can be used where functions can be used as values.

// Named function expression.
var b = function xyz() {
  console.log("anything");
};
b(); // we can access it like this.
xyz(); // we can't access it like this because it's not the part of the global scope, it can only be accessed inside value of b,

/*
First Class Functions.
 Parameter :- It refers to the value accessed to the function when declaring it, that you may recieve these values and start operating.
 Argument :- It refers to the value given to the function when calling it. We can even put function in an argument.

 Putting functions inside argument is called first class functions.

 Callback functions :- It gives access to do async things in Javascript, hence JS is async single threaded language, means it can go 1 thing at a time and by order. 

function x(){}
x(function y(){}) // y is a callback function. It gives responsibility to x for running y.
*/
