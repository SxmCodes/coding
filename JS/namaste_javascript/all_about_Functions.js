// Function Statement.
function a() {
  console.log("A is called.");
}
a(); // This will work fine.

// Function Expression.
// Function Statement is also known as Function Decleration.
var b = function () {
  console.log("B is called");
};
b(); // If we put this before the function, it will give error.

// Anonymous Function.
// function () {
// This will give syntax error. This is used in that place where functions are placed as values.
// }

// Named Function Expression.
// It is same like the function expression but here we give it a name.
var c = function ab() {
  // This is a named function expression.
  console.log("C is called.");
  /* If we call ab, it gives error as it's not inside global scope. We can access ab inside ab like console.log(ab). */
};

// Difference b/w Parameters & Arguments.
function d(param1, param2) {
  // Variable which are there inside the brackets are parameters. Which would be passed inside the function.
}
d(1, 2); // These are arguments, they are the actual values of that parameters.

// First Class Functions.
// We can use functions as parameters, arguments or returned from functions  or the ability to use that as values. This only known as first class functions. They are also known as First Class Citizens as well.
var e = function (param1) {
  return function xyz() {
    // Anything.
  };
};
console.log(e()); // this will return xyz function.

// Arrow Function.
