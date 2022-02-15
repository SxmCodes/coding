var a = 100; // It's value would be changed.
let b = 1000; // If we put let, then it will not shadow because the another b is just accessable inside the block.
{
  // This is a block in JS, it's also known as Compound Statement.

  var a = 10; // This will shadow the variale which is outside the scope (in just var).
  console.log(a);
  // We have to group multiple statements of javascript where it expects to take just a single statement.
  // Block scope --> What functions and method are accessible inside scope.
  let b = 20;
  const c = 30;
  console.log(a);
  console.log(b);
  console.log(c);
}
// console.log(a); // Only this will work as it is in the global scope.
// console.log(b); // Error.
// console.log(c); // Error.
console.log(b); // This will run 1000 as it is outside the block.

// It will also work in case of functions.
var c = 100;
function motherf() {
  var c = 30;
  console.log(window.c);
  window.c = 20;
}
motherf();
console.log(c);

// Illegal Shadowing --> When we try to shadow var variable with let inside the block, we can but when we shadow let with var inside the block, we can't.

// Lexical Block Scope -->
const a = 20;
{
  const a = 100;
  {
    const a = 200;
    console.log(a); // This will print 200, as it just takes the nearest value.
    }
    console.log(a); // This will print 100;
}
